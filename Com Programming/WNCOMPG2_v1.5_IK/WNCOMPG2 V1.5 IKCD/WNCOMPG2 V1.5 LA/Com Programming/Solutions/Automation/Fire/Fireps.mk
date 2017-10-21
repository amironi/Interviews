
Fireps.dll: dlldata.obj Fire_p.obj Fire_i.obj
	link /dll /out:Fireps.dll /def:Fireps.def /entry:DllMain dlldata.obj Fire_p.obj Fire_i.obj kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL $<

clean:
	@del Fireps.dll
	@del Fireps.lib
	@del Fireps.exp
	@del dlldata.obj
	@del Fire_p.obj
	@del Fire_i.obj
