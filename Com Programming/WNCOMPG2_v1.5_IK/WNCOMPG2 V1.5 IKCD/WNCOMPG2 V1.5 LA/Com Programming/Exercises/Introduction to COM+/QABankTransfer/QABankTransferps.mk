
QABankTransferps.dll: dlldata.obj QABankTransfer_p.obj QABankTransfer_i.obj
	link /dll /out:QABankTransferps.dll /def:QABankTransferps.def /entry:DllMain dlldata.obj QABankTransfer_p.obj QABankTransfer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del QABankTransferps.dll
	@del QABankTransferps.lib
	@del QABankTransferps.exp
	@del dlldata.obj
	@del QABankTransfer_p.obj
	@del QABankTransfer_i.obj
