// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SMClient.h"

using namespace std;

#pragma comment (lib, "Common.lib")






// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

using namespace std;

/*int handleComunication(SOCKET aConnectSocket)
{
	int ret = 0;
	//int com;
	string com;
	while (ret == 0)
	{
		cout<<"Enter Text: (x for exit)"<<endl;
		getline(cin, com);
		
		if (com == "x" || com == "X")
		{
			ret = 1;
		}
		else
		{
			int iResult = send(aConnectSocket, com.c_str(), (int)(com.length() + 1), 0);
			if (iResult == SOCKET_ERROR)
			{
				cout << "send failed with error: " << WSAGetLastError() << endl;
				ret = -1;		
			}
			else
			{
				string strbuf;
				//ret = reciveString(aConnectSocket, strbuf);
				if (ret == 0)
				{
					cout << "Ret val: " << strbuf << endl;
				}
				
			}
		}
	}
	
	return ret;
}*/

int __cdecl main(int argc, char **argv)
{
	SMClient client;
	client.startConnect(DEFAULT_PORT, "localhost");
	/*WSADATA wsaData;
	SOCKET ConnectSocket = INVALID_SOCKET;
	struct addrinfo *result = NULL,
		*ptr = NULL,
		hints;
	char *sendbuf = "this is a test";
	int iResult;
	int recvbuflen = DEFAULT_BUFLEN;

	// Validate the parameters
	if (argc != 2) {
		printf("usage: %s server-name\n", argv[0]);
		return 1;
	}

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed with error: %d\n", iResult);
		return 1;
	}

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	// Resolve the server address and port
	iResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
	if (iResult != 0) {
		printf("getaddrinfo failed with error: %d\n", iResult);
		WSACleanup();
		return 1;
	}

	// Attempt to connect to an address until one succeeds
	for (ptr = result; ptr != NULL; ptr = ptr->ai_next) {

		// Create a SOCKET for connecting to server
		ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype,
			ptr->ai_protocol);
		if (ConnectSocket == INVALID_SOCKET) {
			printf("socket failed with error: %ld\n", WSAGetLastError());
			WSACleanup();
			return 1;
		}

		// Connect to server.
		iResult = connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
		if (iResult == SOCKET_ERROR) {
			closesocket(ConnectSocket);
			ConnectSocket = INVALID_SOCKET;
			continue;
		}
		break;
	}

	freeaddrinfo(result);

	if (ConnectSocket == INVALID_SOCKET) {
		printf("Unable to connect to server!\n");
		WSACleanup();
		return 1;
	}

	int ret = handleComunication(ConnectSocket);
	
	if (ret != 1)
	{
		cout << "Error: " << ret << endl;
	}

	//printf("Bytes Sent: %ld\n", iResult);

	
	// shutdown the connection since no more data will be sent
	iResult = shutdown(ConnectSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(ConnectSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(ConnectSocket);
	WSACleanup();*/

	return 0;
}
