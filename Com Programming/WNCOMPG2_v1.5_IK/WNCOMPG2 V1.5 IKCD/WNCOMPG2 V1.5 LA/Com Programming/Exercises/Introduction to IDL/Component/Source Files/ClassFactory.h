////////////////////////////////////////////////////////////
//
//	    ClassFactory.h
//
////////////////////////////////////////////////////////////

#pragma once
#include "Component.h"

#pragma warning(disable:4800)   // disable BOOL to bool warnings

class MyClassFactory : public IClassFactory
{
public:
    virtual HRESULT __stdcall QueryInterface(REFIID id, void** p);
    virtual ULONG   __stdcall AddRef();
    virtual ULONG   __stdcall Release();
    virtual HRESULT __stdcall CreateInstance(IUnknown* pUnknown, REFIID id, void** p);
    virtual HRESULT __stdcall LockServer(BOOL lock);
    bool CanUnloadNow();
    void DecrementObjectCount();
private:
    int objectCount;
    int interfaceCount;
    int lockCount;
};

extern MyClassFactory classFactory;
