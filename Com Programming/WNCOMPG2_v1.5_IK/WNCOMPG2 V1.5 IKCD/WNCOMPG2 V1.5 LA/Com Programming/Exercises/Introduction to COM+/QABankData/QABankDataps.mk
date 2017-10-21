
QABankDataps.dll: dlldata.obj QABankData_p.obj QABankData_i.obj
	link /dll /out:QABankDataps.dll /def:QABankDataps.def /entry:DllMain dlldata.obj QABankData_p.obj QABankData_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del QABankDataps.dll
	@del QABankDataps.lib
	@del QABankDataps.exp
	@del dlldata.obj
	@del QABankData_p.obj
	@del QABankData_i.obj
