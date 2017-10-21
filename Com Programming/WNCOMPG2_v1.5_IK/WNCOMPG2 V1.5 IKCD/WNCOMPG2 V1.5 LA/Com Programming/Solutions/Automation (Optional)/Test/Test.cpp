////////////////////////////////////////////////////////////
//
//          Test.cpp
//
////////////////////////////////////////////////////////////

#include <iostream>
#include "../Server/Server.h"
#include "../Server/Server_i.c"
#include <assert.h>
using namespace std;

HRESULT hr;
IUnknown*      pIUnknown = 0;
IDispatch*     pIDispatch = 0;
IAutomation*   pIAutomation = 0;
IClassFactory* pClassFactory = 0;


void main()
{
	// 1. Initialise COM
	hr = CoInitialize(0);
	assert( SUCCEEDED( hr ) );

	// 2. Create Class Factory
	hr = CoGetClassObject( CLSID_Automation, 
												 CLSCTX_INPROC, 
												 0,
												 IID_IClassFactory, 
												 (void**)&pClassFactory);

	assert( SUCCEEDED( hr ) );

	// 3. Create Object
	hr = pClassFactory->CreateInstance( 0,
																			IID_IUnknown,
																			(void**) &pIUnknown );
	assert( SUCCEEDED( hr ) );

	// 4. Query for IDispatch
	hr = pIUnknown->QueryInterface( IID_IDispatch,
																 (void**) &pIDispatch );
	assert( SUCCEEDED( hr ) );

	// 5. Check if Type Info is present
	unsigned count;
	hr = pIDispatch->GetTypeInfoCount( &count );
	if( count == 0 )
	{
			cout << "No type information found" << endl;
			exit( 1 );
	}

	// 6. Late Binding (using IDispatch)
	BSTR		message1 = SysAllocString( L"IDispatch Client" );
	LCID		English = MAKELCID( LANG_ENGLISH, SUBLANG_ENGLISH_UK );
	DISPID	DispatchIDs[1];
	OLECHAR* ArrayOfNames[1];
	
	ArrayOfNames[0] = L"Hello";

	hr = pIDispatch->GetIDsOfNames( IID_NULL, 
																	ArrayOfNames, 
																	1,
																	English,
																	DispatchIDs );
	assert( SUCCEEDED( hr ) );
	
	VARIANT v;
	v.vt			= VT_BSTR;
	v.bstrVal = message1;
		
	DISPPARAMS NoArgs = {&v, 0, 1, 0 };
	hr = pIDispatch->Invoke( DispatchIDs[0], 
													 IID_NULL,
													 English,
													 DISPATCH_METHOD,
													 &NoArgs,
													 0, 0, 0 );
	assert( SUCCEEDED( hr ) );
	SysFreeString( message1 );

	// 7. Early Binding (using IAutomation)
	hr = pIUnknown->QueryInterface( IID_IAutomation,
																	(void**) &pIAutomation );
	assert( SUCCEEDED( hr ) );

	BSTR message2 = SysAllocString( L"IAutomation Client" );
	pIAutomation->Hello( message2 );
	SysFreeString( message2 );

	// 8. Release objects and shutdown
	pClassFactory->Release();
	pIUnknown->Release();
	pIDispatch->Release();
	pIAutomation->Release();

	CoUninitialize();
}

