// SMExServer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "SMServer.h"
//1618
using namespace std;

#pragma comment (lib, "Common.lib")




/*bool handleClient(SOCKET aClientSocket)
{
	cout << "Connection started" << endl;
	int ret = 0;
	do
	{
		string strbuf;
		ret = reciveString(aClientSocket, strbuf);
		if (ret == 0)
		{
			cout << "Ret val: " << strbuf << endl;
			int iSendResult = send(aClientSocket, strbuf.c_str(), strbuf.length(), 0);

			if (iSendResult == SOCKET_ERROR) {
				cout << "send failed with error" << WSAGetLastError() << endl;

				break;
			}
			
		}		
	} while (ret == 0);
	
	return true;
}*/

int main()
{
	SMServer server;
	server.startConnect(DEFAULT_PORT);
	/*WSADATA wsaData;
	int iResult;

	SOCKET ListenSocket = INVALID_SOCKET;
	SOCKET ClientSocket = INVALID_SOCKET;

	struct addrinfo *result = NULL;
	struct addrinfo hints;

	
	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed with error: %d\n", iResult);
		return 1;
	}

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);
	if (iResult != 0) {
		printf("getaddrinfo failed with error: %d\n", iResult);
		WSACleanup();
		return 1;
	}

	// Create a SOCKET for connecting to server
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET) {
		printf("socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		return 1;
	}

	// Setup the TCP listening socket
	iResult = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	freeaddrinfo(result);

	
	while (true)
	{
		iResult = listen(ListenSocket, SOMAXCONN);
		if (iResult == SOCKET_ERROR) {
			printf("listen failed with error: %d\n", WSAGetLastError());
			break;
		}

		// Accept a client socket
		ClientSocket = accept(ListenSocket, NULL, NULL);
		if (ClientSocket == INVALID_SOCKET) {
			printf("accept failed with error: %d\n", WSAGetLastError());
			//closesocket(ListenSocket);
			//WSACleanup();
			//return 1;
			break;
		}

		if (false == handleClient(ClientSocket))
		{
			break;
		}
	}
	
	// No longer need server socket
	closesocket(ListenSocket);

	// shutdown the connection since we're done
	iResult = shutdown(ClientSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(ClientSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(ClientSocket);
	WSACleanup();

	cin.get();*/
    return 0;
}

