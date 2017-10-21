// QABankAccount.cpp : Implementation of CQABankAccount
#include "stdafx.h"
#include "QABankData.h"
#include "QABankAccount.h"

/////////////////////////////////////////////////////////////////////////////
// CQABankAccount

HRESULT CQABankAccount::Activate()
{
	HRESULT hr = CoGetObjectContext( IID_IObjectContext, (void **) &m_spObjectContext);
	if (SUCCEEDED(hr))
		return S_OK;

	return hr;
} 

BOOL CQABankAccount::CanBePooled()
{
	return FALSE;
} 

void CQABankAccount::Deactivate()
{
	m_spObjectContext.Release();
} 

STDMETHODIMP CQABankAccount::Construct( IDispatch *pDisp )
{
	HRESULT hr = S_OK;

	// TODO
	// Add support for a constructor string here

	return hr;
}

STDMETHODIMP CQABankAccount::UpdateAccount(BSTR accountName, double amount, short *rowsAffected)
{
	ADODB::_ConnectionPtr dbCon;
	VARIANT var;
	VariantInit( &var );

	*rowsAffected = 0;

	OLECHAR cmdString[1024];

	try
	{

		dbCon.CreateInstance( __uuidof( ADODB::Connection ) );

		dbCon->Open( m_connectString, (BSTR) 0, (BSTR) 0, -1 );

		swprintf( cmdString, L"UPDATE Accounts SET Balance = Balance + %.02f WHERE AccountName = '%s'", amount, accountName );

		dbCon->Execute( cmdString, &var, -1 );

		*rowsAffected = (short) var.lVal;

		dbCon->Close();
	}
	catch( _com_error ce )
	{
		*rowsAffected = 0;
	}

	return S_OK;
}
