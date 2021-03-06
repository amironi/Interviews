#include "stdafx.h"

#include "Common.h"
#include <iostream>


int reciveString(SOCKET aConnectSocket, string& aBuff)
{
	int ret = 0;
	
	char recvbuf[DEFAULT_BUFLEN];
	int recvbuflen = DEFAULT_BUFLEN;

	string strbuf;
	int iResult;

	do {

		iResult = recv(aConnectSocket, recvbuf, recvbuflen, 0);
		
		if (iResult > 0)
		{
			string temp(recvbuf, recvbuf + iResult);
			temp.resize(iResult + 1, NULL);
			strbuf += temp;
			break;

		}						
		else if (iResult == 0)
		{
			cout<<"Connection closed"<<endl;
			ret = 1;
			break;
		}
		else if( ( iResult == SOCKET_ERROR ) && ( WSAGetLastError() == WSAEMSGSIZE ) )
		{
			string temp(recvbuf, recvbuf + recvbuflen );
			temp.resize(recvbuflen + 1, NULL);
			strbuf += temp;
		}
		else
		{
			cout << "recv failed with error: " << WSAGetLastError() << endl;
			ret = -2;
			break;
		}

	} while (iResult > 0);

	if (ret == 0)
	{
		aBuff = strbuf;
	}
	
	return ret;
}


