////////////////////////////////////////////////////////////
//
//      Name.h
//
////////////////////////////////////////////////////////////

#include <string>
using namespace std;


// TODO 1 
// define a an interface called:	IUnknown
// with 3 method:
//		virtual void QueryInterface( const string& ifaceName, void** ppIface ) = 0;
//		virtual int AddRef() = 0;
//		virtual int Release() = 0;


// TODO 2
// define a an interface called:	IConvert
// which derives from	IUnknown
// with 2 methods:
//		virtual void ToUpper() = 0;
//		virtual void ToLower() = 0;

// TODO 3
// define a an interface called:	IGetSet
// which derives from	IUnknown
// with 3 methods:
//		virtual string Get() = 0;
//		virtual void Set(const string& str) = 0;
//		virtual void Print() = 0;

// TODO 4
// define a an interface called:	IEncodeDecode
// which derives from	IUnknown
// with 2 methods:
//		virtual void Encode() = 0;
//		virtual void Decode() = 0;


extern "C" __declspec(dllexport) void CreateInstance(void**);

