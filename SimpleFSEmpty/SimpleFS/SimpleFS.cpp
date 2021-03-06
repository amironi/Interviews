// SimpleFS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>


using namespace std;



class Node
{

	
	bool isFile;
	char name[256];
	Node* next;
};

Node* root = new Node;

class filelist
{

}

void displayPath(char* aName)
{
	//disply path in the format: rootfolder\subfolder1\..\name
	cout << "displayPath" << endl;
}

void move(char* aName, char* aNewFolder)
{
	//move item(file or folder) to other folder
	cout << "move" << endl;
}

void createFile(char* aName, char* aFolder)
{
	//create file in folder
	cout << "createFile" << endl;
}

void createFolder(char* aName, char* aFolder)
{
	//create folder in folder
	cout << "createFolder" << endl;
}

void remove(char* aName, bool aRecurcive)
{
	//delete item. if aRecurcive, remove all its subfolders.
	//if not aRecurcive, move all sub foldes and files to its parent befor delete
	cout << "remove" << endl;
}

void printFS()
{
	//print all FS in format:
	//rootFolder1
	//	subFolder1
	//	subFolder2
	//		subSubFolder1
	//			subSubSubFile
	//		subSubFile
	//	subFolder3
	//		subSubFolder3
	//rootFolder2
	//		bSubFolder1

	cout << "printFS" << endl;
}

int main()
{
	char c;
	bool cont = true;
	while (cont)
	{
		cout << "1. diaply full path" << endl;
		cout << "2. move" << endl;
		cout << "3. create file" << endl;
		cout << "4. create folder" << endl;
		cout << "5. delete" << endl;
		cout << "6. print FS" << endl;
		cout << "Enter your choise: (x for exit)";

		c = _getch();
		
		cout << endl;

		if (c == EOF)
		{
			cont = false;
		}

		char ch1[500];
		char ch2[500];

		switch (c)
		{
		case '1':
			cout << "name: " << endl;
			cin >> ch1;
			displayPath(ch1);
			break;
		case '2':
			cout << "name: " ;
			cin >> ch1;
			cout << endl << "new folder: " ;
			cout << endl;
			cin >> ch2;
			move(ch1, ch2);
			break;
		case '3':
			cout << "name: ";
			cin >> ch1;
			cout << endl << "folder: ";
			cin >> ch2;
			cout << endl;
			createFile(ch1, ch2);
			break;
		case '4':
			cout << "name: ";
			cin >> ch1;
			cout << endl << "folder: ";
			cin >> ch2;
			cout << endl;
			createFolder(ch1, ch2);
			break;
		case '5':
			cout << "name: ";
			cin >> ch1;
			cout << endl << "recurcive? [y/n]:";
			cin >> ch2;
			cout << endl;
			remove(ch1, ch2[0] == 'y' );
			break;
		case '6':
			printFS();
			break;
		case 'x':
			cont = false;
			break;
		};
	}
    return 0;
}

