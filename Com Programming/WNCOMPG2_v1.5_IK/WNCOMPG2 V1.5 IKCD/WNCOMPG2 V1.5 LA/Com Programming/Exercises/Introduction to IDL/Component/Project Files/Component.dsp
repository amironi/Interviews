# Microsoft Developer Studio Project File - Name="Component" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=Component - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Component.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Component.mak" CFG="Component - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Component - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe
# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../Output Files"
# PROP Intermediate_Dir "../Intermediate Files"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /o "NUL" /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /o "NUL" /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# Begin Target

# Name "Component - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;idl"
# Begin Source File

SOURCE="..\Source Files\ClassFactory.cpp"
# End Source File
# Begin Source File

SOURCE="..\Source Files\Component.cpp"
# End Source File
# Begin Source File

SOURCE="..\Source Files\Exports.cpp"
# End Source File
# Begin Source File

SOURCE="..\Source Files\Interface.idl"
# ADD MTL /tlb "../Output Files/Component.tlb" /h "../Source Files/Interface.h" /iid "../Source Files/Interface_i.c" /Oicf
# SUBTRACT MTL /nologo /D "_DEBUG" /mktyplib203
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp"
# Begin Source File

SOURCE="..\Source Files\ClassFactory.h"
# End Source File
# Begin Source File

SOURCE="..\Source Files\Component.h"
# End Source File
# End Group
# Begin Group "Registration"

# PROP Default_Filter ""
# Begin Source File

SOURCE="..\Source Files\Component.reg"
# Begin Custom Build
OutDir=.\../Output Files
TargetName=Component
InputPath="..\Source Files\Component.reg"

"$(OutDir)\regedit.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regedit /s "../Source Files/$(TargetName).reg" 
	echo regedit exec. time > "$(OutDir)\regedit.trg" 
	
# End Custom Build
# End Source File
# End Group
# Begin Group "MIDL Generated Source"

# PROP Default_Filter ""
# Begin Source File

SOURCE="..\Source Files\Interface_i.c"
# End Source File
# End Group
# Begin Source File

SOURCE="..\Source Files\Exports.def"
# End Source File
# End Target
# End Project
