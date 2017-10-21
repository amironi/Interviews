////////////////////////////////////////////////////////////
//
//          Test.cpp
//
////////////////////////////////////////////////////////////

#include "..\Radio\Interface.h"
#include <assert.h>

void main()
{
  HRESULT hr;
  ITrafficInfo* pITInfo = 0;

  IClassFactory* pClassFactory;

	// 1. Initialise COM
  hr = CoInitialize(0);
  assert(SUCCEEDED(hr));

	// 2. Create Class Factory
  hr = CoGetClassObject(CLSID_Radio, 
                        CLSCTX_INPROC, 
                        0,
                        IID_IClassFactory, 
                        (void**)&pClassFactory);

  assert(SUCCEEDED(hr));

	// 3. Create Object
  hr = pClassFactory->CreateInstance(0, 
                                     IID_ITrafficInfo, 
                                     (void**)&pITInfo);

  assert(SUCCEEDED(hr));
  pClassFactory->Release();

	// 4. Call methods
  pITInfo->Alert("M4: Congestion at J2\nM11: Accident at J12\nM6: Roadworks J15 - J17 North");
  pITInfo->Release();

	// 5. Unload COM
  CoUninitialize();
}
