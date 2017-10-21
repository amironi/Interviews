
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Fri Feb 01 22:12:27 2002
 */
/* Compiler settings for C:\Documents and Settings\dwheeler\My Documents\QA Courses\WNCOMPG2\01-MasterFiles\04-DelegateLabs\Com Programming\Solutions\Introduction to COM+\QABankData\QABankData.idl:
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

#ifndef __QABankData_h__
#define __QABankData_h__

/* Forward Declarations */ 

#ifndef __IQABankAccount_FWD_DEFINED__
#define __IQABankAccount_FWD_DEFINED__
typedef interface IQABankAccount IQABankAccount;
#endif 	/* __IQABankAccount_FWD_DEFINED__ */


#ifndef __QABankAccount_FWD_DEFINED__
#define __QABankAccount_FWD_DEFINED__

#ifdef __cplusplus
typedef class QABankAccount QABankAccount;
#else
typedef struct QABankAccount QABankAccount;
#endif /* __cplusplus */

#endif 	/* __QABankAccount_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IQABankAccount_INTERFACE_DEFINED__
#define __IQABankAccount_INTERFACE_DEFINED__

/* interface IQABankAccount */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IQABankAccount;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D544FDD-86EA-4CFC-AA21-C44C1181AD4B")
    IQABankAccount : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateAccount( 
            /* [in] */ BSTR accountName,
            /* [in] */ double amount,
            /* [retval][out] */ short __RPC_FAR *rowsAffected) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQABankAccountVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IQABankAccount __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IQABankAccount __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IQABankAccount __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IQABankAccount __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IQABankAccount __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IQABankAccount __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IQABankAccount __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateAccount )( 
            IQABankAccount __RPC_FAR * This,
            /* [in] */ BSTR accountName,
            /* [in] */ double amount,
            /* [retval][out] */ short __RPC_FAR *rowsAffected);
        
        END_INTERFACE
    } IQABankAccountVtbl;

    interface IQABankAccount
    {
        CONST_VTBL struct IQABankAccountVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQABankAccount_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQABankAccount_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQABankAccount_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQABankAccount_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IQABankAccount_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IQABankAccount_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IQABankAccount_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IQABankAccount_UpdateAccount(This,accountName,amount,rowsAffected)	\
    (This)->lpVtbl -> UpdateAccount(This,accountName,amount,rowsAffected)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IQABankAccount_UpdateAccount_Proxy( 
    IQABankAccount __RPC_FAR * This,
    /* [in] */ BSTR accountName,
    /* [in] */ double amount,
    /* [retval][out] */ short __RPC_FAR *rowsAffected);


void __RPC_STUB IQABankAccount_UpdateAccount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQABankAccount_INTERFACE_DEFINED__ */



#ifndef __QABANKDATALib_LIBRARY_DEFINED__
#define __QABANKDATALib_LIBRARY_DEFINED__

/* library QABANKDATALib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_QABANKDATALib;

EXTERN_C const CLSID CLSID_QABankAccount;

#ifdef __cplusplus

class DECLSPEC_UUID("5DBDB96C-9089-459F-91D4-296EC12976FD")
QABankAccount;
#endif
#endif /* __QABANKDATALib_LIBRARY_DEFINED__ */

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


