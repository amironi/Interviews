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
	// Put this new thread into an STA
	CoInitializeEx( 0, COINIT_MULTITHREADED );

	// AddRef() onto the COM object	
	IQAPrintPtr spQAP = (IQAPrint *) arg;

	
	// Call the method 
	spQAP->PrintString( "This should all appear on one line" );

	// No longer talking to the COM object
	spQAP = 0;

	// This thread has to tell COM that it's gone
	CoUninitialize();

	// One less thread is now alive
	InterlockedDecrement( &threadCount );
}


int main(int argc, char* argv[])
{
	CoInitializeEx( 0, COINIT_MULTITHREADED );

	//
	// Create an instance of the COM object
	//
	IQAPrint *p = 0;
	HRESULT hr = CoCreateInstance( __uuidof( Multi ),
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
		_beginthread( ThreadFunc, 0, p );
	}

	//
	// Process messages and wait for all the threads to finish
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
