////////////////////////////////////////////////////////////
//
//	    Component.cpp
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Component.h"
#include "ClassFactory.h"



HRESULT __stdcall Component::QueryInterface(REFIID id, void** p)
{
	*p = 0;     // prepare for failure

	if(id == IID_IUnknown) 
		*p = static_cast<IUnknown*>(static_cast<IAAA*>(this));
	if(id == IID_IAAA)     
		*p = static_cast<IAAA*>(this);
	if(id == IID_IBBB)     
		*p = static_cast<IBBB*>(this);
	if(id == IID_ICCC)     
		*p = static_cast<ICCC*>(this);

	if(*p == 0)
		return E_NOINTERFACE;
	else
	{
		AddRef();
		return S_OK;
	}
}

ULONG __stdcall Component::AddRef()
{
	return ++count;
}

ULONG __stdcall Component::Release()
{
	if(--count == 0)
	{
		delete this;
		classFactory.DecrementObjectCount();
		return 0;
	}

	return count;
}

// TODO Test1

// TODO Test2

// N.B. property is defined as a member variable
// TODO Test3 [propget]
// TODO Test3 [propput]

// TODO Test4

// TODO Test5

// TODO Test6



