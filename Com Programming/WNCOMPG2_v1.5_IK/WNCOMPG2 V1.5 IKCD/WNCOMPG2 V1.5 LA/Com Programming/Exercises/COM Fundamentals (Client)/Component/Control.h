// Control.h : Declaration of the CControl

#ifndef __CONTROL_H_
#define __CONTROL_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CControl
class ATL_NO_VTABLE CControl : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CControl, &CLSID_Control>,
	public IDispatchImpl<IControl, &IID_IControl, &LIBID_COMPONENTLib>
{
public:
	CControl()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CONTROL)

BEGIN_COM_MAP(CControl)
	COM_INTERFACE_ENTRY(IControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IControl
public:
	STDMETHOD(Square)(/*[in]*/ double number, /*[out, retval]*/ double* pResult);
	STDMETHOD(Multiply)(/*[in]*/ double number1, /*[in]*/ double number2, /*[out, retval]*/ double* pResult);
	STDMETHOD(Average)(/*[in]*/ double number1, /*[in]*/ double number2, /*[out, retval]*/ double* pResult);
	STDMETHOD(SquareRoot)(/*[in]*/ double number, /*[out, retval]*/ double* pResult);
};

#endif //__CONTROL_H_
