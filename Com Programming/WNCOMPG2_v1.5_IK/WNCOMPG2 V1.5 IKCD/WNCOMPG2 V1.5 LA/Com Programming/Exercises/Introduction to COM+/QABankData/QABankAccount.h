// QABankAccount.h : Declaration of the CQABankAccount

#ifndef __QABANKACCOUNT_H_
#define __QABANKACCOUNT_H_

#include "resource.h"       // main symbols
#include <mtx.h>

#import "C:\Program Files\Common Files\System\ado\msado15.dll" rename("EOF", "ADOEOF")

/////////////////////////////////////////////////////////////////////////////
// CQABankAccount
class ATL_NO_VTABLE CQABankAccount : 
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CQABankAccount, &CLSID_QABankAccount>,
	public IObjectControl,
	public IObjectConstruct,
	public IDispatchImpl<IQABankAccount, &IID_IQABankAccount, &LIBID_QABANKDATALib>
{
	_bstr_t m_connectString;

public:
	CQABankAccount()
	{
	}

	HRESULT FinalConstruct()
	{
		// TODO:
		// We will optionally want to replace this hard coded information with
		// an Object Constructor string
		m_connectString = L"Provider=SQLOLEDB;Trusted_Connection=yes;Initial Catalog=QABank";
	
		return S_OK;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_QABANKACCOUNT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CQABankAccount)
	COM_INTERFACE_ENTRY(IQABankAccount)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IObjectConstruct)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;


// IObjectConstruct
	STDMETHOD( Construct )( IDispatch * );


// IQABankAccount
public:
	STDMETHOD(UpdateAccount)(/*[in]*/ BSTR accountName, /*[in]*/ double Account, /*[out,retval]*/ short *rowsAffected);
};

#endif //__QABANKACCOUNT_H_
