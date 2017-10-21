// FireCtrl.h : Declaration of the CFireCtrl

#ifndef __FIRECTRL_H_
#define __FIRECTRL_H_

#include "resource.h"       // main symbols
#include "firewndatl.h"


/////////////////////////////////////////////////////////////////////////////
// CFireCtrl
class ATL_NO_VTABLE CFireCtrl :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFireCtrl,&CLSID_FireCtrl>,
	public CComControl<CFireCtrl>,
	public IDispatchImpl<IFireCtrl, &IID_IFireCtrl, &LIBID_FIRELib>,
	public IPersistStreamInitImpl<CFireCtrl>,
	public IOleControlImpl<CFireCtrl>,
	public IOleObjectImpl<CFireCtrl>,
	public IOleInPlaceActiveObjectImpl<CFireCtrl>,
	public IViewObjectExImpl<CFireCtrl>,
	public IConnectionPointContainerImpl<CFireCtrl>,
	public IOleInPlaceObjectWindowlessImpl<CFireCtrl>
{
private:
	CFireWnd	m_FireWnd;
	int			m_nTemperature;
	BOOL		m_bUp;
	BOOL		m_bDown;
	BOOL		m_bFire;
	int			m_nTimerID1, m_nTimerID2;
	ULONG		m_ulActiveCookie;

public:
	CFireCtrl():	
		m_bFire (FALSE),
		m_bUp   (FALSE),
		m_bDown (FALSE),
		m_nTemperature ( 0 ),
		m_nTimerID1 ( 0 ),
		m_nTimerID2 ( 0 ),
		m_ulActiveCookie ( 0 )
	{
		m_bWindowOnly = TRUE;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FIRECTRL)

BEGIN_COM_MAP(CFireCtrl) 
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IFireCtrl)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject, IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject2, IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL(IViewObjectEx)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleInPlaceObject, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY_IMPL(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY_IMPL(IOleControl)
	COM_INTERFACE_ENTRY_IMPL(IOleObject)
	COM_INTERFACE_ENTRY_IMPL(IPersistStreamInit)
	COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
END_COM_MAP()

BEGIN_PROPERTY_MAP(CFireCtrl)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROPERTY_MAP()


BEGIN_CONNECTION_POINT_MAP(CFireCtrl)
END_CONNECTION_POINT_MAP()


BEGIN_MSG_MAP(CFireCtrl)
	MESSAGE_HANDLER(WM_SIZE, OnSize)
	MESSAGE_HANDLER(WM_TIMER, OnTimer)
	MESSAGE_HANDLER(WM_PAINT, OnPaint)
	MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
	MESSAGE_HANDLER(WM_KILLFOCUS, OnKillFocus)
	MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
END_MSG_MAP()


// IViewObjectEx
	STDMETHOD(GetViewStatus)(DWORD* pdwStatus)
	{
		ATLTRACE(_T("IViewObjectExImpl::GetViewStatus\n"));
		*pdwStatus = VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE;
		return S_OK;
	}

// IFireCtrl
public:
	STDMETHOD(get_Temperature)(/*[out, retval]*/ short *pVal);
	STDMETHOD(Up)();
	STDMETHOD(Down)();
	STDMETHOD(CreateFire)();

// Message map functions
	HRESULT OnDraw(ATL_DRAWINFO& di);
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnTimer(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	HWND Create(HWND hWndParent, RECT& rcPos);

};

#endif //__FIRECTRL_H_
