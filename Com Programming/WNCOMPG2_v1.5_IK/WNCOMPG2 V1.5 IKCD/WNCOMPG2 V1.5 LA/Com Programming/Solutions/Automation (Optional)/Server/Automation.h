// Automation.h : Declaration of the CAutomation

#ifndef __AUTOMATION_H_
#define __AUTOMATION_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAutomation
class ATL_NO_VTABLE CAutomation : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAutomation, &CLSID_Automation>,
	public IDispatchImpl<IAutomation, &IID_IAutomation, &LIBID_SERVERLib>
{
public:
	CAutomation()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_AUTOMATION)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAutomation)
	COM_INTERFACE_ENTRY(IAutomation)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IAutomation
public:
	STDMETHOD(Hello)(/*[in]*/ BSTR message);
};

#endif //__AUTOMATION_H_
