////////////////////////////////////////////////////////////
//
//	    ClassFactory.cpp
//
////////////////////////////////////////////////////////////
#include "ClassFactory.h"

// Class factory code must be thread safe.  This means that
// all operations with state information such as incrementing
// or decrementing reference counts should be protected with 
// Win32 synchronisation code (e.g. InterlockedIncrement or 
// CRITICAL_SECTION).
// You can save time in this exercise by ignoring the thread 
// safe requirement

// N.B. Look in Interface.h for definitions of GUIDS
// change all return codes - they have been added to get a clean compile
RadioClassFactory::RadioClassFactory()
	: refCount( 0 ), lockCount( 0 )
{

}

bool RadioClassFactory::IsServerLocked()
{
	// Check the value of BOTH the reference count and the 
	// lock count. If either of these is non-zero, then you should
	// return true. If both of these are zero, then return false.

	return true;
}


HRESULT __stdcall RadioClassFactory::QueryInterface( REFIID id, void** ppv )
{
  // Accept IUnknown and IClassFactory (return S_OK)
	// Reject all other interfaces (return E_NOINTERFACE)

  // Don't forget to call AddRef() if successful
  return S_OK;
}

ULONG __stdcall RadioClassFactory::AddRef()
{
  // Increment reference count for class object.
  return 0;
}

ULONG __stdcall RadioClassFactory::Release()
{
  // Decrement reference count for the class object
	// Remember, the class object is being implemented as a 
	// GLOBAL variable, so don't call delete!
  
  return 0;
}


HRESULT __stdcall RadioClassFactory::CreateInstance( IUnknown* pOuterUnknown, REFIID id, void** ppv )
{
  // This component does not support aggregation.  If pOuterUnknown is non-zero then
  // the client is asking to aggregate our object.  You should reject aggregation 
  // requests (return CLASS_E_NOAGGREGATION).

  // Create the component using new.  If this succeeds you must increment the object count.

  // You should now have a pointer to the object's IUnknown which could be returned 
  // in ppv directly.  However you should use QueryInterface on your object, passing (id, ppv) 
  // as parameters because the client may be requesting a pointer to an interface other 
  // than IUnknown.

	// Don't forget that the client might be asking for an interface that object does not
	// support. How would you handle a failed call to QueryInterface()?

  return S_OK;
}

HRESULT __stdcall RadioClassFactory::LockServer( BOOL state )
{
  // Use the server management object to increment or decrement the lock count for the 
	// DLL.
  return S_OK;
}



