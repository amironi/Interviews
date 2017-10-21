// Automation.cpp : Implementation of CAutomation
#include "stdafx.h"
#include "Server.h"
#include "Automation.h"

/////////////////////////////////////////////////////////////////////////////
// CAutomation


STDMETHODIMP CAutomation::Hello(BSTR message)
{
	MessageBoxW(0, message, L"Hello", MB_OK);
	return S_OK;
}
