// Single.cpp : Implementation of CSingle
#include "stdafx.h"
#include "ThreadServer.h"
#include "Single.h"

/////////////////////////////////////////////////////////////////////////////
// CSingle


STDMETHODIMP CSingle::PrintString(BSTR b)
{
	int i = SysStringLen( b );
	OLECHAR *temp = b;

	// Print individual characters from string SLOWLY
	

	for( int j = 0; j < i; ++j )
	{
		wprintf( L"%c", *temp );
		temp++;
		Sleep( 100 );
	}

	wprintf( L"\r\n" );

	return S_OK;
}
