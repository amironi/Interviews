// Transfer.cpp : Implementation of CTransfer
#include "stdafx.h"
#include "comsvcs.h"
#include "QABankTransfer.h"
#include "Transfer.h"


/////////////////////////////////////////////////////////////////////////////
// CTransfer
#import "..\QABankData\QABankData.tlb"

STDMETHODIMP CTransfer::Transfer(double amount, BSTR fromAccount, BSTR toAccount)
{

	// TODO1:
	// Use the QABankAccount object from the QABankData server to
	// debit one account and credit another
	//


	// TODO2:
	//
	// After configuring this component, add support for transactions by
	// using CoGetObjectContext() to get an IObjectContext reference, and
	// then use SetAbort() on failure
	//

	return S_OK;
}
