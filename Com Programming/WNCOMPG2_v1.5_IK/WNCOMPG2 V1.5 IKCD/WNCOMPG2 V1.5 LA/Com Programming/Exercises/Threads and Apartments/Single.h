// Single.h : Declaration of the CSingle

#ifndef __SINGLE_H_
#define __SINGLE_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSingle
class ATL_NO_VTABLE CSingle : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSingle, &CLSID_Single>,
	public IQAPrint
{
public:
	CSingle()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SINGLE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CSingle)
	COM_INTERFACE_ENTRY(IQAPrint)
END_COM_MAP()

// ISingle
public:
	STDMETHOD(PrintString)(/*[in]*/ BSTR b);
};

#endif //__SINGLE_H_
