////////////////////////////////////////////////////////////
//
//	    Exports.cpp
//
////////////////////////////////////////////////////////////
#include "Radio.h"
#include "ClassFactory.h"

// n.b. Look in Interface.h for definitions of GUIDS


//
// The one and only class factory for making Radio objects
//
RadioClassFactory theFactory;


HRESULT __stdcall DllGetClassObject( REFCLSID rclsid, REFIID id, void** ppv )
{
  // COM will load the DLL into memory when it wants to create a class 
  // object.  The class object is declared as a global variable ( theFactory )
  // so it will be created automatically.  However it is this function's 
  // responsibility to check that COM has supplied the correct class id for
  // the object and that the requested id is supported by the class factory.
	
	// return CLASS_E_CLASSNOTAVAILABLE if the class id is wrong.  You can find the class id from
  // Interface.h.
  
  // Hint: To implement this method, you first need to check that they are
  //       passing in a CLSID that you can understand, but then you will be returning a pointer 
  //       to your class factory of the requested type. Therefore, once you have checked that
  //       the CLSID is valid, you can delegate the rest of the call to the class object itself.

  return S_OK;
}

HRESULT __stdcall DllCanUnloadNow( void )
{
  // Use the method DoObjectsExist() (from the Radio class) and
	// IsServerLocked() (from the RadioClassFactory class) to check to
	// see whether it is safe to unload the DLL.

	// Both need to return false for you to indicate that the DLL can
	// be unloaded.
  return S_FALSE;
}

