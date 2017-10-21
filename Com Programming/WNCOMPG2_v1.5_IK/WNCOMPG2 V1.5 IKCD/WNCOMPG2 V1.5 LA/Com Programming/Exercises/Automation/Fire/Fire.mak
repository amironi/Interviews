# Microsoft Developer Studio Generated NMAKE File, Based on Fire.dsp
!IF "$(CFG)" == ""
CFG=Fire - Win32 Debug
!MESSAGE No configuration specified. Defaulting to Fire - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "Fire - Win32 Debug" && "$(CFG)" !=\
 "Fire - Win32 Unicode Debug" && "$(CFG)" != "Fire - Win32 Release MinSize" &&\
 "$(CFG)" != "Fire - Win32 Release MinDependency" && "$(CFG)" !=\
 "Fire - Win32 Unicode Release MinSize" && "$(CFG)" !=\
 "Fire - Win32 Unicode Release MinDependency"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Fire.mak" CFG="Fire - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Fire - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "Fire - Win32 Unicode Debug" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "Fire - Win32 Release MinSize" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "Fire - Win32 Release MinDependency" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "Fire - Win32 Unicode Release MinSize" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "Fire - Win32 Unicode Release MinDependency" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "Fire - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.ilk"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OUTDIR)\Fire.pdb"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /Fp"$(INTDIR)\Fire.pch" /Yu"stdafx.h"\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:yes\
 /pdb:"$(OUTDIR)\Fire.pdb" /debug /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" /pdbtype:sept 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\Debug
TargetPath=.\Debug\Fire.dll
InputPath=.\Debug\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

OUTDIR=.\DebugU
INTDIR=.\DebugU
# Begin Custom Macros
OutDir=.\DebugU
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.ilk"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OUTDIR)\Fire.pdb"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE" /Fp"$(INTDIR)\Fire.pch"\
 /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\DebugU/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:yes\
 /pdb:"$(OUTDIR)\Fire.pdb" /debug /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" /pdbtype:sept 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\DebugU
TargetPath=.\DebugU\Fire.dll
InputPath=.\DebugU\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

OUTDIR=.\ReleaseMinSize
INTDIR=.\ReleaseMinSize
# Begin Custom Macros
OutDir=.\ReleaseMinSize
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_ATL_DLL" /Fp"$(INTDIR)\Fire.pch"\
 /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\ReleaseMinSize/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:no\
 /pdb:"$(OUTDIR)\Fire.pdb" /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\ReleaseMinSize
TargetPath=.\ReleaseMinSize\Fire.dll
InputPath=.\ReleaseMinSize\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

OUTDIR=.\ReleaseMinDependency
INTDIR=.\ReleaseMinDependency
# Begin Custom Macros
OutDir=.\ReleaseMinDependency
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY"\
 /Fp"$(INTDIR)\Fire.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\ReleaseMinDependency/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:no\
 /pdb:"$(OUTDIR)\Fire.pdb" /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\ReleaseMinDependency
TargetPath=.\ReleaseMinDependency\Fire.dll
InputPath=.\ReleaseMinDependency\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

OUTDIR=.\ReleaseUMinSize
INTDIR=.\ReleaseUMinSize
# Begin Custom Macros
OutDir=.\ReleaseUMinSize
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL"\
 /Fp"$(INTDIR)\Fire.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\ReleaseUMinSize/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:no\
 /pdb:"$(OUTDIR)\Fire.pdb" /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\ReleaseUMinSize
TargetPath=.\ReleaseUMinSize\Fire.dll
InputPath=.\ReleaseUMinSize\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

OUTDIR=.\ReleaseUMinDependency
INTDIR=.\ReleaseUMinDependency
# Begin Custom Macros
OutDir=.\ReleaseUMinDependency
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ELSE 

ALL : "$(OUTDIR)\Fire.dll" "$(OutDir)\regsvr32.trg"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\Fire.obj"
	-@erase "$(INTDIR)\Fire.pch"
	-@erase "$(INTDIR)\Fire.res"
	-@erase "$(INTDIR)\FireCtrl.obj"
	-@erase "$(INTDIR)\FIREWNDATL.OBJ"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\Fire.dll"
	-@erase "$(OUTDIR)\Fire.exp"
	-@erase "$(OUTDIR)\Fire.lib"
	-@erase "$(OutDir)\regsvr32.trg"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE" /D "_ATL_STATIC_REGISTRY"\
 /Fp"$(INTDIR)\Fire.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\ReleaseUMinDependency/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x809 /fo"$(INTDIR)\Fire.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\Fire.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /dll /incremental:no\
 /pdb:"$(OUTDIR)\Fire.pdb" /machine:I386 /def:".\Fire.def"\
 /out:"$(OUTDIR)\Fire.dll" /implib:"$(OUTDIR)\Fire.lib" 
DEF_FILE= \
	".\Fire.def"
LINK32_OBJS= \
	"$(INTDIR)\Fire.obj" \
	"$(INTDIR)\Fire.res" \
	"$(INTDIR)\FireCtrl.obj" \
	"$(INTDIR)\FIREWNDATL.OBJ" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\Fire.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

OutDir=.\ReleaseUMinDependency
TargetPath=.\ReleaseUMinDependency\Fire.dll
InputPath=.\ReleaseUMinDependency\Fire.dll
SOURCE=$(InputPath)

"$(OutDir)\regsvr32.trg"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	

!ENDIF 


!IF "$(CFG)" == "Fire - Win32 Debug" || "$(CFG)" ==\
 "Fire - Win32 Unicode Debug" || "$(CFG)" == "Fire - Win32 Release MinSize" ||\
 "$(CFG)" == "Fire - Win32 Release MinDependency" || "$(CFG)" ==\
 "Fire - Win32 Unicode Release MinSize" || "$(CFG)" ==\
 "Fire - Win32 Unicode Release MinDependency"
SOURCE=.\Fire.cpp

!IF  "$(CFG)" == "Fire - Win32 Debug"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

DEP_CPP_FIRE_=\
	".\Fire.h"\
	".\Fire_i.c"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Fire.obj" : $(SOURCE) $(DEP_CPP_FIRE_) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h" ".\Fire_i.c"


!ENDIF 

SOURCE=.\Fire.idl

!IF  "$(CFG)" == "Fire - Win32 Debug"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

InputPath=.\Fire.idl

".\Fire.tlb"	".\Fire.h"	".\Fire_i.c"	 : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	midl /Oicf /h "Fire.h" /iid "Fire_i.c" "Fire.idl"

!ENDIF 

SOURCE=.\Fire.rc
DEP_RSC_FIRE_R=\
	".\Fire.tlb"\
	".\FireCtrl.rgs"\
	

"$(INTDIR)\Fire.res" : $(SOURCE) $(DEP_RSC_FIRE_R) "$(INTDIR)" ".\Fire.tlb"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\FireCtrl.cpp

!IF  "$(CFG)" == "Fire - Win32 Debug"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

DEP_CPP_FIREC=\
	".\Fire.h"\
	".\FireCtrl.h"\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FireCtrl.obj" : $(SOURCE) $(DEP_CPP_FIREC) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch" ".\Fire.h"


!ENDIF 

SOURCE=.\FIREWNDATL.CPP

!IF  "$(CFG)" == "Fire - Win32 Debug"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

DEP_CPP_FIREW=\
	".\firewndatl.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\FIREWNDATL.OBJ" : $(SOURCE) $(DEP_CPP_FIREW) "$(INTDIR)"\
 "$(INTDIR)\Fire.pch"


!ENDIF 

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "Fire - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /Fp"$(INTDIR)\Fire.pch"\
 /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE"\
 /Fp"$(INTDIR)\Fire.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinSize"

CPP_SWITCHES=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_ATL_DLL" /Fp"$(INTDIR)\Fire.pch"\
 /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "Fire - Win32 Release MinDependency"

CPP_SWITCHES=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY"\
 /Fp"$(INTDIR)\Fire.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinSize"

CPP_SWITCHES=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL"\
 /Fp"$(INTDIR)\Fire.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "Fire - Win32 Unicode Release MinDependency"

CPP_SWITCHES=/nologo /MD /W3 /GX /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_WINDLL" /D "_AFXDLL" /D "_USRDLL" /D "_UNICODE" /D "_ATL_STATIC_REGISTRY"\
 /Fp"$(INTDIR)\Fire.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\Fire.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

