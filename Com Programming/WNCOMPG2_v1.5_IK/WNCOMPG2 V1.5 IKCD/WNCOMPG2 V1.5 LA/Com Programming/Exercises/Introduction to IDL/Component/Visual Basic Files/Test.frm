VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Testing Custom Interfaces"
   ClientHeight    =   4860
   ClientLeft      =   2115
   ClientTop       =   1980
   ClientWidth     =   5265
   LinkTopic       =   "Form1"
   ScaleHeight     =   4860
   ScaleWidth      =   5265
   Begin VB.CommandButton Command2 
      Caption         =   "Call Methods"
      Height          =   735
      Left            =   1320
      TabIndex        =   1
      Top             =   2160
      Width           =   2055
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Create Object"
      Height          =   735
      Left            =   1320
      TabIndex        =   0
      Top             =   1080
      Width           =   2055
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Public ptr As CustomInterfacesLib.IBBB

Private Sub Command1_Click()
    Set ptr = CreateObject("CustomInterfaces")
    'Set ptr = New CustomInterfacesLib.Component
End Sub

Private Sub Command2_Click()
    ptr.B2
End Sub
