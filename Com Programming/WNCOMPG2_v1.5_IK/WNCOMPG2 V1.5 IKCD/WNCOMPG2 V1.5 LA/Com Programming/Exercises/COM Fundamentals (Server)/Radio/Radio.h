////////////////////////////////////////////////////////////
//
//          Component.h
//
////////////////////////////////////////////////////////////

#pragma once
#include "Interface.h"

class Radio : public ITrafficInfo
{
public:

	// Methods from IUnknown
  virtual HRESULT __stdcall QueryInterface(REFIID id, void** ppv);
  virtual ULONG   __stdcall AddRef();
  virtual ULONG   __stdcall Release();
  
	// Methods from ITrafficInfo
	virtual HRESULT __stdcall Alert( char* message );

	
	// Support methods for object counting
	static bool DoObjectsExist();  
	
	// CTOR()/DTOR()
	Radio();
  virtual ~Radio();

private:

	// Object counting mechanism for ALL instances
	static LONG objectCount;

	// Reference counting mechanism for a single object
  LONG refCount;
};



