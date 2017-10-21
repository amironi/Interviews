// QABankCreator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ole2.h"
#include "stdio.h"

#import "C:\Program Files\Common Files\System\ado\msado26.tlb" rename( "EOF", "ADOEOF" )

#define NO_OF_ACCOUNTS 5

char *arNames[NO_OF_ACCOUNTS] = { "John Smith", "Jane Doe", "Janet Brown", "Walter Jones", "Lucy Edwards" }; 
char *arBalances[NO_OF_ACCOUNTS] = { "10000",   "20000",    "40000",       "15000",        "9000" };

int main(int argc, char* argv[])
{
	CoInitialize( 0 );

	ADODB::_ConnectionPtr sp;

	char szCmd[128];

	try
	{

		sp.CreateInstance( __uuidof( ADODB::Connection ) );
		sp->Open( "Provider=SQLOLEDB;SERVER=(local);Trusted_Connection=yes", (BSTR) 0, (BSTR) 0, -1 );

		try
		{
			sp->Execute( "DROP DATABASE QABANK", 0, -1 );
		}
		catch( ... )
		{
		}

		sp->Execute( "CREATE DATABASE QABANK", 0, -1 );

		sp->Execute( "USE QABANK", 0, -1 );

		sp->Execute( "CREATE TABLE Accounts (AccountName VARCHAR(20) PRIMARY KEY, Balance DECIMAL NOT NULL )", 0, -1 );

		for( int i = 0; i < NO_OF_ACCOUNTS; i++ )
		{
			sprintf( szCmd, "INSERT Accounts VALUES( '%s', '%s')", arNames[i], arBalances[i], 0, -1 );
			sp->Execute( szCmd, 0, -1 );
		}

		sp->Close();
	}
	catch( _com_error ce )
	{
		printf( "*** Error occurred ***\n" );
		printf( "    %s\n", (char *) ce.Description() );
		printf( "*** Error occurred ***\n" );
	}

	CoUninitialize();

	return 0;
}
