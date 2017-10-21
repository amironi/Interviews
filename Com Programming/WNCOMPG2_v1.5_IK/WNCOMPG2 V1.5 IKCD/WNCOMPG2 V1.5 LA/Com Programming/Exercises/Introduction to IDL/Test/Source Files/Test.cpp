////////////////////////////////////////////////////////////
//
//          Test.cpp
//
////////////////////////////////////////////////////////////
#include <windows.h>
#include <assert.h>
#include "../../Component/Source Files/Interface.h"
#include "../../Component/Source Files/Interface_i.c"

void main()
{
  HRESULT hr;
  IAAA* pAAA = 0;
  IBBB* pBBB = 0;
  ICCC* pCCC = 0;

	
  IClassFactory* pClassFactory = 0;

	// 1. Initialise COM
  hr = CoInitialize( 0 );
  assert( SUCCEEDED( hr ) );

	// 2. Create class factory
  hr = CoGetClassObject( CLSID_Component, 
                         CLSCTX_INPROC, 
                         0,
                         IID_IClassFactory, 
                         (void**)&pClassFactory );
  assert( SUCCEEDED( hr ) );

	// 3. Create object
  hr = pClassFactory->CreateInstance( 0, 
                                      IID_IAAA, 
                                      (void**)&pAAA );
  assert( SUCCEEDED( hr ) );
  pClassFactory->Release();

	// 4. Get other interface pointers

  hr = pAAA->QueryInterface(IID_IBBB, (void**)&pBBB);
  hr = pAAA->QueryInterface(IID_ICCC, (void**)&pCCC);

	// 5. Call test methods
    
	// Test1.	Using an [in] parameter
	pAAA->Test1(100);

	// Test2.	Passing a reference pointer to the server
	date theDate;
	pAAA->Test2(&theDate);

	// Test3.	Using property get and put methods
	long x = 66;
	pBBB->put_Test3(x);		// store x on the server
	x = 0;					// reset x on the client
	pBBB->get_Test3(&x);	// retrieve x from the server

    
	// Test4.	Pass a string to the server
	pBBB->Test4( (unsigned char*) "Hello" );

	// Test5.	Allocating memory for a structure on the server
	date* p = 0;
  pCCC->Test5( &p );		// server allocates memory
	CoTaskMemFree( p );		// client deallocates memory

	// Test6.	Passing part of an array to the server
	long array[10] = { 999, 999, 1, 3, 5, 7, 9, 999, 999, 999 };
	pCCC->Test6(array, 10, 2, 5);	// 10 elements, 5 transmitted, starting with element 2

	// 6. Release pointers
	pAAA->Release();
	pBBB->Release();
	pCCC->Release();

	// 7. Unload COM
	CoUninitialize();
}
