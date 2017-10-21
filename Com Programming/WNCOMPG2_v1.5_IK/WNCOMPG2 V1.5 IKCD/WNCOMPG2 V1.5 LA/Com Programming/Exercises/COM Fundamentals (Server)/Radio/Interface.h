////////////////////////////////////////////////////////////
//
//          Interface.h
//
////////////////////////////////////////////////////////////

#pragma once
#include <windows.h>

// spot (and correct!) the deliberate mistake on the line below
class ITrafficInfo
{
public:
    virtual HRESULT __stdcall QueryInterface( const IID& riid, void** ppv ) = 0;
    virtual ULONG   __stdcall AddRef() = 0;
    virtual ULONG   __stdcall Release() = 0;
    virtual HRESULT __stdcall Alert( char* message ) = 0;
};


// Definitions of GUIDs

// IID_IClassFactory is defined by Microsoft
// IID_IUnknown is defined by Microsoft
// CLSID_Car is the class id of the COM object
// IID_ITrafficInfo is the interface id of ITrafficInfo


extern "C"
{


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// CREATE TWO NEW GUIDs USING GUIDGEN (Option 3)
// THE TWO NEW GUIDS SHOULD HAVE THE SYMBOLIC NAMES
// CLSID_Radio AND IID_ITrafficInfo, AS THESE NAMES ARE
// USED THROUGHOUT THE TEST CLIENT
// 
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

 
  const GUID CLSID_Radio = { 0 };
  
  const GUID IID_ITrafficInfo = { 0 };


}

