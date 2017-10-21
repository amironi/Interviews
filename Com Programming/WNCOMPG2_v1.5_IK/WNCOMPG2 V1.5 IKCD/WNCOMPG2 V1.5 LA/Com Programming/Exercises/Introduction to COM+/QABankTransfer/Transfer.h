// Transfer.h : Declaration of the CTransfer

#ifndef __TRANSFER_H_
#define __TRANSFER_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTransfer
class ATL_NO_VTABLE CTransfer : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTransfer, &CLSID_Transfer>,
	public IDispatchImpl<ITransfer, &IID_ITransfer, &LIBID_QABANKTRANSFERLib>
{
public:
	CTransfer()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TRANSFER)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CTransfer)
	COM_INTERFACE_ENTRY(ITransfer)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// ITransfer
public:
	STDMETHOD(Transfer)(/*[in]*/ double amount, /*[in]*/ BSTR fromAccout, /*[in]*/ BSTR toAccount);
};

#endif //__TRANSFER_H_
