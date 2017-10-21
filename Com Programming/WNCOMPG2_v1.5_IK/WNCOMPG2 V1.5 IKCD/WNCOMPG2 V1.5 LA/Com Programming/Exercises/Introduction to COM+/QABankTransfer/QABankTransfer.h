
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Fri Feb 01 22:12:34 2002
 */
/* Compiler settings for C:\Documents and Settings\dwheeler\My Documents\QA Courses\WNCOMPG2\01-MasterFiles\04-DelegateLabs\Com Programming\Solutions\Introduction to COM+\QABankTransfer\QABankTransfer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
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

#ifndef __QABankTransfer_h__
#define __QABankTransfer_h__

/* Forward Declarations */ 

#ifndef __ITransfer_FWD_DEFINED__
#define __ITransfer_FWD_DEFINED__
typedef interface ITransfer ITransfer;
#endif 	/* __ITransfer_FWD_DEFINED__ */


#ifndef __Transfer_FWD_DEFINED__
#define __Transfer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Transfer Transfer;
#else
typedef struct Transfer Transfer;
#endif /* __cplusplus */

#endif 	/* __Transfer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ITransfer_INTERFACE_DEFINED__
#define __ITransfer_INTERFACE_DEFINED__

/* interface ITransfer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITransfer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C565DA99-DF4B-45AE-9157-35C7F4A99CF4")
    ITransfer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Transfer( 
            /* [in] */ double amount,
            /* [in] */ BSTR fromAccount,
            /* [in] */ BSTR toAccount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITransfer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITransfer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITransfer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITransfer __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITransfer __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITransfer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITransfer __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Transfer )( 
            ITransfer __RPC_FAR * This,
            /* [in] */ double amount,
            /* [in] */ BSTR fromAccount,
            /* [in] */ BSTR toAccount);
        
        END_INTERFACE
    } ITransferVtbl;

    interface ITransfer
    {
        CONST_VTBL struct ITransferVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransfer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITransfer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITransfer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITransfer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITransfer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITransfer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITransfer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITransfer_Transfer(This,amount,fromAccount,toAccount)	\
    (This)->lpVtbl -> Transfer(This,amount,fromAccount,toAccount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITransfer_Transfer_Proxy( 
    ITransfer __RPC_FAR * This,
    /* [in] */ double amount,
    /* [in] */ BSTR fromAccount,
    /* [in] */ BSTR toAccount);


void __RPC_STUB ITransfer_Transfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITransfer_INTERFACE_DEFINED__ */



#ifndef __QABANKTRANSFERLib_LIBRARY_DEFINED__
#define __QABANKTRANSFERLib_LIBRARY_DEFINED__

/* library QABANKTRANSFERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_QABANKTRANSFERLib;

EXTERN_C const CLSID CLSID_Transfer;

#ifdef __cplusplus

class DECLSPEC_UUID("ADC27ED6-D653-4913-A338-8B07E02F6AD3")
Transfer;
#endif
#endif /* __QABANKTRANSFERLib_LIBRARY_DEFINED__ */

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


