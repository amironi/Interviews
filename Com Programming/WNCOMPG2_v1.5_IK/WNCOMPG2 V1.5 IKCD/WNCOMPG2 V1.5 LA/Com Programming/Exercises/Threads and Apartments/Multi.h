// Multi.h : Declaration of the CMulti

#ifndef __MULTI_H_
#define __MULTI_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMulti
class ATL_NO_VTABLE CMulti : 
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CMulti, &CLSID_Multi>,
	public IQAPrint
{
public:
	CMulti()
	{
	}

	
DECLARE_REGISTRY_RESOURCEID(IDR_MULTI)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMulti)
	COM_INTERFACE_ENTRY(IQAPrint)
END_COM_MAP()

// IMulti
public:
	STDMETHOD(PrintString)(/*[in]*/ BSTR b);
};

#endif //__MULTI_H_
