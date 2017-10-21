// Multi.cpp : Implementation of CMulti
#include "stdafx.h"
#include "ThreadServer.h"
#include "Multi.h"

/////////////////////////////////////////////////////////////////////////////
// CMulti


STDMETHODIMP CMulti::PrintString(BSTR b)
{
	int i = SysStringLen( b );
	OLECHAR *temp = b;

	// TODO: Add some concurrency protection here

	// Print individual characters from string SLOWLY
	for( int j = 0; j < i; ++j )
	{
		wprintf( L"%c", *temp );
		temp++;
		Sleep( 100 );
	}

	wprintf( L"\r\n" );

	// TODO: But don't forget to release any locks here!

	return S_OK;
}
