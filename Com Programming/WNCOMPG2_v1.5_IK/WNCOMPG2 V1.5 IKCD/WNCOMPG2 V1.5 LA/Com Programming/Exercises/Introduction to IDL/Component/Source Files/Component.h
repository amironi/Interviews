////////////////////////////////////////////////////////////
//
//          Component.h
//
////////////////////////////////////////////////////////////

#pragma once
#include "Interface.h"

class Component : public IAAA,
                  public IBBB,
                  public ICCC
{
public:
	virtual HRESULT __stdcall QueryInterface(const IID& id, void** p);
	virtual ULONG   __stdcall AddRef();
	virtual ULONG   __stdcall Release();

	// TODO Test1

	// TODO Test2

	// N.B. property is defined as a member variable
	// TODO Test3 [propget]
	// TODO Test3 [propput]

	// TODO Test4

	// TODO Test5

	// TODO Test6
    
	Component() : count(0), property(0) {}

private:
	int property;
	int count;
};


