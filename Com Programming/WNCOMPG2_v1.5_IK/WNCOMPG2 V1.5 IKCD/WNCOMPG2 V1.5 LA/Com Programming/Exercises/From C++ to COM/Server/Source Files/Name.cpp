////////////////////////////////////////////////////////////
//
//      Name.cpp
//
////////////////////////////////////////////////////////////

#include <iostream>
#include "Name.h"
using namespace std;

// TODO 1
// define a class called Name that inherits from
// IConvert, IGetSet and IEncodeDecode

// TODO 2
// provide prototypes of the methods in the above interfaces
// QueryInterface
// AddRef
// Release
// ToUpper
// ToLower
// Get
// Set
// Print
// Encode
// Decode

// TODO 3
// add a private member of type string called name
// add a private member to maintain the reference count


// this is the only export from the server
extern "C"
{
	__declspec(dllexport) void CreateInstance(void** ppObject)
	{
		Name* p = new Name;
		p->AddRef();
		*ppObject = reinterpret_cast<void*>(p);
		cout << "Object created" << endl;
	}
}

// TODO 4
// implement QueryInterface()
// use static casts to return interface pointers
// input parameter will be one of:
//		"IUnknown"
//		"IGetSet"
//		"IConvert"    
//		"IEncodeDecode"
//	Don't forget to AddRef() on success.

// TODO 5
// implement AddRef()

// TODO 6
// implement Release()
// Commit suicide when the reference count drops to zero

// TODO 7
// implement ToUpper()
// return an upper case version of the private data member

// TODO 8
// implement ToLower()
// return an lower case version of the private data member

// TODO 9
// implement Get()
// return a copy of the private data member

// TODO 10
// implement Set()
// update the private data member with the input parameter

// TODO 11
// implement Print()
// print the private data member

// TODO 12
// implement Encode()
// provide a simple encoding algorithm:
//	A->B, B->C, C->D, D->E, ..., Z->A 

// TODO 13
// implement Decode()
// provide a simple decoding algorithm:
//	B->A, C->B, D->C, E->D, ..., A->Z
