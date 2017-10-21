
Componentps.dll: dlldata.obj Component_p.obj Component_i.obj
	link /dll /out:Componentps.dll /def:Componentps.def /entry:DllMain dlldata.obj Component_p.obj Component_i.obj kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL $<

clean:
	@del Componentps.dll
	@del Componentps.lib
	@del Componentps.exp
	@del dlldata.obj
	@del Component_p.obj
	@del Component_i.obj
