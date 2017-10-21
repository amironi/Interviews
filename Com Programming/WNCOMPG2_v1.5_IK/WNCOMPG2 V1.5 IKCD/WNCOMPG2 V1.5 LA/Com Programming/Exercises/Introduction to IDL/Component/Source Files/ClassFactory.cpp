////////////////////////////////////////////////////////////
//
//	    ClassFactory.cpp
//
////////////////////////////////////////////////////////////

#include "ClassFactory.h"
HRESULT __stdcall MyClassFactory::QueryInterface(REFIID id, void** p)
{
    if(id == IID_IUnknown)
    {
        *p = static_cast<IUnknown*>(this);
        AddRef();
        return S_OK;
    }
    if(id == IID_IClassFactory)
    {
        *p = static_cast<IClassFactory*>(this);
        AddRef();
        return S_OK;
    }

    // otherwise
    *p = 0;
    return E_NOINTERFACE;
}

ULONG __stdcall MyClassFactory::AddRef()
{
    return ++interfaceCount;
}

ULONG __stdcall MyClassFactory::Release()
{
    return --interfaceCount;
}


HRESULT __stdcall MyClassFactory::CreateInstance(IUnknown* pOuterUnknown, REFIID id, void** p)
{
    // Aggregation not supported
    if(pOuterUnknown != 0) return CLASS_E_NOAGGREGATION;

    // Create the component
    Component* pComponent = new Component;
    if(pComponent == 0) return E_OUTOFMEMORY;

    // Get id interface for the component
    *p = 0;
    HRESULT hError = pComponent->QueryInterface(id, p);
    if (SUCCEEDED(hError))
    {
        objectCount++;
        return S_OK;
    }
    else
    {
        delete pComponent;
        return hError;
    }
}

HRESULT __stdcall MyClassFactory::LockServer(BOOL state)
{
    if(state)
        lockCount++;
    else
        lockCount--;

    return S_OK;
}


// other methods

bool MyClassFactory::CanUnloadNow()
{
    if (objectCount    != 0) return false;
    if (interfaceCount != 0) return false;
    if (lockCount      != 0) return false;

    // otherwise
    return true;
}

void MyClassFactory::DecrementObjectCount()
{
    objectCount--;
}
