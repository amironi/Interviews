/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jan 07 19:12:21 2002
 */
/* Compiler settings for C:\Documents and Settings\dwheeler\My Documents\QA Courses\WNCOMPG2\01-MasterFiles\04-DelegateLabs\Com Programming V2\Exercises\EXERCISE 05\Component\Source Files\Interface.idl:
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

#ifndef __Interface_h__
#define __Interface_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IAAA_FWD_DEFINED__
#define __IAAA_FWD_DEFINED__
typedef interface IAAA IAAA;
#endif 	/* __IAAA_FWD_DEFINED__ */


#ifndef __IBBB_FWD_DEFINED__
#define __IBBB_FWD_DEFINED__
typedef interface IBBB IBBB;
#endif 	/* __IBBB_FWD_DEFINED__ */


#ifndef __ICCC_FWD_DEFINED__
#define __ICCC_FWD_DEFINED__
typedef interface ICCC ICCC;
#endif 	/* __ICCC_FWD_DEFINED__ */


#ifndef __Component_FWD_DEFINED__
#define __Component_FWD_DEFINED__

#ifdef __cplusplus
typedef class Component Component;
#else
typedef struct Component Component;
#endif /* __cplusplus */

#endif 	/* __Component_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_Interface_0000 */
/* [local] */ 

struct  date
    {
    long day;
    long month;
    long year;
    };


extern RPC_IF_HANDLE __MIDL_itf_Interface_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Interface_0000_v0_0_s_ifspec;

#ifndef __IAAA_INTERFACE_DEFINED__
#define __IAAA_INTERFACE_DEFINED__

/* interface IAAA */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAAA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("306BFB71-ACA3-11d3-9E71-006097FAD0B8")
    IAAA : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IAAAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAAA __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAAA __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAAA __RPC_FAR * This);
        
        END_INTERFACE
    } IAAAVtbl;

    interface IAAA
    {
        CONST_VTBL struct IAAAVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAAA_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAAA_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAAA_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAAA_INTERFACE_DEFINED__ */


#ifndef __IBBB_INTERFACE_DEFINED__
#define __IBBB_INTERFACE_DEFINED__

/* interface IBBB */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBBB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("306BFB72-ACA3-11d3-9E71-006097FAD0B8")
    IBBB : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IBBBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBBB __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBBB __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBBB __RPC_FAR * This);
        
        END_INTERFACE
    } IBBBVtbl;

    interface IBBB
    {
        CONST_VTBL struct IBBBVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBBB_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBBB_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBBB_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBBB_INTERFACE_DEFINED__ */


#ifndef __ICCC_INTERFACE_DEFINED__
#define __ICCC_INTERFACE_DEFINED__

/* interface ICCC */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICCC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("306BFB73-ACA3-11d3-9E71-006097FAD0B8")
    ICCC : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICCCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICCC __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICCC __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICCC __RPC_FAR * This);
        
        END_INTERFACE
    } ICCCVtbl;

    interface ICCC
    {
        CONST_VTBL struct ICCCVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICCC_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICCC_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICCC_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICCC_INTERFACE_DEFINED__ */



#ifndef __CustomInterfacesLib_LIBRARY_DEFINED__
#define __CustomInterfacesLib_LIBRARY_DEFINED__

/* library CustomInterfacesLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CustomInterfacesLib;

EXTERN_C const CLSID CLSID_Component;

#ifdef __cplusplus

class DECLSPEC_UUID("306BFB75-ACA3-11d3-9E71-006097FAD0B8")
Component;
#endif
#endif /* __CustomInterfacesLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
