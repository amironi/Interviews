////////////////////////////////////////////////////////////
//
//	    Exports.cpp
//
////////////////////////////////////////////////////////////

#include "Component.h"
#include "ClassFactory.h"

MyClassFactory classFactory;


HRESULT __stdcall DllGetClassObject(CLSID& rclsid, IID& id, void** p)
{
    *p = 0;

    if(rclsid != CLSID_Component) return E_FAIL;
    if(id != IID_IUnknown && id != IID_IClassFactory) return E_NOINTERFACE;

    *p = &classFactory;
    classFactory.AddRef();

    return NO_ERROR;
}

HRESULT __stdcall DllCanUnloadNow(void)
{
    if(classFactory.CanUnloadNow()) 
        return S_OK;
    else
        return S_FALSE;
}
