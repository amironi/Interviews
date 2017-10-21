////////////////////////////////////////////////////////////
//
//	    ClassFactory.h
//
////////////////////////////////////////////////////////////

#pragma once
#include "Radio.h"

#pragma warning(disable:4800)   // disable BOOL to bool warnings

class RadioClassFactory : public IClassFactory
{
public:

	RadioClassFactory();
  
	virtual HRESULT __stdcall QueryInterface(REFIID id, void** ppv);
  virtual ULONG   __stdcall AddRef();
  virtual ULONG   __stdcall Release();
  virtual HRESULT __stdcall CreateInstance(IUnknown* pIUnknown, REFIID id, void** ppv);
  virtual HRESULT __stdcall LockServer(BOOL lock);

	bool IsServerLocked();

private:
	// Lock count for the class factory
	LONG lockCount;
	
	// Reference count for the class factory
  LONG refCount;
};



