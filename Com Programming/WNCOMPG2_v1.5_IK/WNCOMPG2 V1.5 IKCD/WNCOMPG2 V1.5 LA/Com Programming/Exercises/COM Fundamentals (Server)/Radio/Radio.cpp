////////////////////////////////////////////////////////////
//
//	    Radio.cpp
//
////////////////////////////////////////////////////////////
#include "Radio.h"

// N.B. Look in Interface.h for definitions of GUIDS
// change all return codes - they have been added to get a clean compile
LONG Radio::objectCount = 0;

Radio::Radio()
  : refCount( 0 )
{
  // There is now one more object in the world, so
  // increment the object count

}

Radio::~Radio()
{
  // There is now one less object in the world, so
  // decrement the object count

}

bool Radio::DoObjectsExist()
{

	// Use the value of objectCount to determine whether any
	// instances of the Radio class exist. If there are no objects,
	// return false, otherwise return true.

	return false;
}

HRESULT __stdcall Radio::QueryInterface( REFIID id, void** ppv )
{
    // Accept IUnknown and ITrafficInfo (return S_OK)
    // Reject all other intefaces (return E_NOINTERFACE)

    // If the client requests a valid interface you must AddRef the object.
    HRESULT hr = E_FAIL;

    return hr;
}

ULONG __stdcall Radio::AddRef()
{
    // Increment reference count 

    return 0;
}

ULONG __stdcall Radio::Release()
{
    // Decrement reference count and 'commit suicide' if the count is zero.

    return 0;
}

HRESULT __stdcall Radio::Alert( char* message )
{
    // Display the message in a MessageBox

    return S_OK;
}

