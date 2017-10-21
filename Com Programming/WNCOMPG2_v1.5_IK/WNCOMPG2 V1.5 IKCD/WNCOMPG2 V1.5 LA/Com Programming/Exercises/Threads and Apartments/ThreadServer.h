/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Jan 31 15:25:46 2002
 */
/* Compiler settings for C:\DOCUMENTS AND SETTINGS\DWHEELER\MY DOCUMENTS\QA COURSES\WNCOMPG2\01-MASTERFILES\04-DELEGATELABS\COM PROGRAMMING\SOLUTIONS\THREADS AND APARTMENTS\ThreadServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ThreadServer_h__
#define __ThreadServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IQAPrint_FWD_DEFINED__
#define __IQAPrint_FWD_DEFINED__
typedef interface IQAPrint IQAPrint;
#endif 	/* __IQAPrint_FWD_DEFINED__ */


#ifndef __Multi_FWD_DEFINED__
#define __Multi_FWD_DEFINED__

#ifdef __cplusplus
typedef class Multi Multi;
#else
typedef struct Multi Multi;
#endif /* __cplusplus */

#endif 	/* __Multi_FWD_DEFINED__ */


#ifndef __Single_FWD_DEFINED__
#define __Single_FWD_DEFINED__

#ifdef __cplusplus
typedef class Single Single;
#else
typedef struct Single Single;
#endif /* __cplusplus */

#endif 	/* __Single_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IQAPrint_INTERFACE_DEFINED__
#define __IQAPrint_INTERFACE_DEFINED__

/* interface IQAPrint */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQAPrint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A92816B-C685-4440-9D06-C7F93DB7DA2D")
    IQAPrint : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PrintString( 
            /* [in] */ BSTR b) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQAPrintVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IQAPrint __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IQAPrint __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IQAPrint __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PrintString )( 
            IQAPrint __RPC_FAR * This,
            /* [in] */ BSTR b);
        
        END_INTERFACE
    } IQAPrintVtbl;

    interface IQAPrint
    {
        CONST_VTBL struct IQAPrintVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQAPrint_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQAPrint_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQAPrint_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQAPrint_PrintString(This,b)	\
    (This)->lpVtbl -> PrintString(This,b)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IQAPrint_PrintString_Proxy( 
    IQAPrint __RPC_FAR * This,
    /* [in] */ BSTR b);


void __RPC_STUB IQAPrint_PrintString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQAPrint_INTERFACE_DEFINED__ */



#ifndef __THREADSERVERLib_LIBRARY_DEFINED__
#define __THREADSERVERLib_LIBRARY_DEFINED__

/* library THREADSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_THREADSERVERLib;

EXTERN_C const CLSID CLSID_Multi;

#ifdef __cplusplus

class DECLSPEC_UUID("294FDE0C-606D-493F-AF33-0FA8C7239419")
Multi;
#endif

EXTERN_C const CLSID CLSID_Single;

#ifdef __cplusplus

class DECLSPEC_UUID("0065C9BF-D594-44C2-A6EB-312590A11315")
Single;
#endif
#endif /* __THREADSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
