// FireCtrl.cpp : Implementation of CFireCtrl

#include "stdafx.h"
#include "Fire.h"
#include "FireCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CFireCtrl


HRESULT CFireCtrl::OnDraw(ATL_DRAWINFO& di)
{
	RECT& rc = *(RECT*)di.prcBounds;
	::FillRect(di.hdcDraw, &rc, (HBRUSH)GetStockObject(BLACK_BRUSH));
	return S_OK;
}

LRESULT CFireCtrl::OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	if (m_bFire)
	{
	 	m_FireWnd.MoveWindow (10, 10, LOWORD(wParam)-20, HIWORD(wParam)-20);
		m_FireWnd.InitFire (CFireWnd::red);
	}	

	return TRUE;
}

LRESULT CFireCtrl::OnTimer(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	if ((int)wParam == m_nTimerID1)
	{
		if (m_bUp   && m_nTemperature < 500) m_nTemperature += 10;
		if (m_bDown && m_nTemperature > 180) m_nTemperature -= 10;
	}
	else if ( (int)wParam == m_nTimerID2 )
	{
		m_FireWnd.RenderFlame();
		m_FireWnd.PaintFlame();
		
		// Eat spurious WM_TIMER messages
		MSG msg;
		while(::PeekMessage(&msg, m_hWnd, WM_TIMER, WM_TIMER, PM_REMOVE));

	}
	return TRUE;
}


STDMETHODIMP CFireCtrl::CreateFire()
{
	if (!m_bFire)
	{
		RECT rc;
		GetClientRect (&rc);
		rc.left+=10;
		rc.right-=10;
		rc.top+=10;
		rc.bottom-=10;
		m_nTemperature = 250;
		m_FireWnd.Create( m_hWndCD, rc );
		m_FireWnd.InitFire (CFireWnd::red);
		m_bFire = TRUE;
	}

	m_nTimerID1 = SetTimer (0x100, 1000);
	m_nTimerID2 = SetTimer (0x101, 33);
	return S_OK;
}

STDMETHODIMP CFireCtrl::Up()
{
	m_bUp   = TRUE;
	m_bDown = FALSE;
	m_FireWnd.m_nDecay = 3;
	return S_OK;
}

STDMETHODIMP CFireCtrl::Down()
{
	m_bUp   = FALSE;
	m_bDown = TRUE;
	m_FireWnd.m_nDecay = 10;
	return S_OK;
}

HWND CFireCtrl::Create(HWND hWndParent, RECT& rcPos)
{
	HWND hwnd = CWindowImpl<CFireCtrl>::Create(hWndParent, rcPos);

	if(!hwnd)
		return NULL;
	
	//get ourselves into the ROT
	CLSID		clsid;

	IPersistStreamInitImpl<CFireCtrl>::GetClassID (&clsid);
		
	CComPtr<IUnknown> pUnknown;

	if(FAILED(ControlQueryInterface(IID_IUnknown, (void**)&pUnknown)))
		return hwnd;

	::RegisterActiveObject (pUnknown, clsid,   
							ACTIVEOBJECT_WEAK, &m_ulActiveCookie); 
	return hwnd;
}

LRESULT CFireCtrl::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	if (m_ulActiveCookie)
	{
		::RevokeActiveObject (m_ulActiveCookie, NULL);	
		m_ulActiveCookie = 0;
	}
	return TRUE;
}


STDMETHODIMP CFireCtrl::get_Temperature(short * pVal)
{
	*pVal = m_nTemperature;
	return S_OK;
}
