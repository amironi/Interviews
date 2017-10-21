// ThreadTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _WIN32_DCOM
#include "ole2.h"
#include "process.h"
#include "stdio.h"
#import  "..\ThreadServer.tlb" no_namespace


LONG threadCount = 0L;


void ThreadFunc( void *arg )
{
	IQAPrintPtr spQAP = 0;
	HRESULT hr = S_OK;

	// Put this new thread into an STA
	CoInitialize( 0 );
	
	//
	// TODO: This code is unsafe because we are taking
	//       a raw interface and using it from another 
	//       thread. Replace this line with a more 
	//       robust mechanism.
	//
	spQAP = (IQAPrint *) arg;

	if( SUCCEEDED( hr ) )
	{
		// Call the method 
		spQAP->PrintString( "This should all appear on one line" );

		// No longer talking to the COM object
		spQAP = 0;
	}

	// This thread has to tell COM that it's gone
	CoUninitialize();

	// One less thread is now alive
	InterlockedDecrement( &threadCount );
}


int main(int argc, char* argv[])
{
	CoInitialize( 0 );

	//
	// Create an instance of the COM object
	//
	IQAPrint *p = 0;
	HRESULT hr = CoCreateInstance( __uuidof( Single ),
																 0,
																 CLSCTX_INPROC_SERVER,
																 __uuidof( IQAPrint ),
																 (void **) &p 
															 );
	//
	// Create four threads, passing the interface pointer to
	// each in turn
	//
	for( int i = 0; i < 4; ++i )
	{
		InterlockedIncrement( &threadCount );

		//
		// TODO: Passing a raw interface pointer here 
		//       isn't robust. Change the code so that
		//       we pass a reference to an apartment 
		//       neutral stream.
		//
		_beginthread( ThreadFunc, 0, p );
	}

	//
	// Process messages and wait for all the threads to finish
	// Note that for any thread that enters an STA and wants
	// to block it MUST process messages
	//
	MSG msg;
	while( threadCount )
	{
		if( PeekMessage( &msg, 0, 0, 0, PM_REMOVE ) )
		{
			DispatchMessage( &msg );
		}
	}

	p->Release();
		
	CoUninitialize();

	wprintf( L"Press <Enter> to continue" );
	getchar();

	return 0;
}
