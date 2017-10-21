VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "ATL COM Wizard"
   ClientHeight    =   4965
   ClientLeft      =   2880
   ClientTop       =   1545
   ClientWidth     =   5355
   LinkTopic       =   "Form1"
   ScaleHeight     =   4965
   ScaleWidth      =   5355
   Begin VB.TextBox SR1 
      Height          =   495
      Left            =   2160
      TabIndex        =   10
      Text            =   "50.0"
      Top             =   3600
      Width           =   735
   End
   Begin VB.TextBox S1 
      Height          =   495
      Left            =   2160
      TabIndex        =   9
      Text            =   "50.0"
      Top             =   2880
      Width           =   735
   End
   Begin VB.TextBox A2 
      Height          =   495
      Left            =   3000
      TabIndex        =   8
      Text            =   "40.0"
      Top             =   2160
      Width           =   735
   End
   Begin VB.TextBox A1 
      Height          =   495
      Left            =   2160
      TabIndex        =   7
      Text            =   "35.0"
      Top             =   2160
      Width           =   735
   End
   Begin VB.TextBox M2 
      Height          =   495
      Left            =   3000
      TabIndex        =   6
      Text            =   "12.5"
      Top             =   1440
      Width           =   735
   End
   Begin VB.TextBox M1 
      Height          =   495
      Left            =   2160
      TabIndex        =   5
      Text            =   "15.5"
      Top             =   1440
      Width           =   735
   End
   Begin VB.CommandButton CommandSquareRoot 
      Caption         =   "SquareRoot"
      Height          =   495
      Left            =   360
      TabIndex        =   4
      Top             =   3600
      Width           =   1575
   End
   Begin VB.CommandButton CommandSquare 
      Caption         =   "Square"
      Height          =   495
      Left            =   360
      TabIndex        =   3
      Top             =   2880
      Width           =   1575
   End
   Begin VB.CommandButton CommandAverage 
      Caption         =   "Average"
      Height          =   495
      Left            =   360
      TabIndex        =   2
      Top             =   2160
      Width           =   1575
   End
   Begin VB.CommandButton CommandMultiply 
      Caption         =   "Multiply"
      Height          =   495
      Left            =   360
      TabIndex        =   1
      Top             =   1440
      Width           =   1575
   End
   Begin VB.CommandButton CommandCreate 
      Caption         =   "Create Object"
      Height          =   495
      Left            =   360
      TabIndex        =   0
      Top             =   600
      Width           =   1575
   End
   Begin VB.Label SR0 
      BorderStyle     =   1  'Fixed Single
      Height          =   495
      Left            =   3960
      TabIndex        =   14
      Top             =   3600
      Width           =   1200
   End
   Begin VB.Label S0 
      BorderStyle     =   1  'Fixed Single
      Height          =   495
      Left            =   3960
      TabIndex        =   13
      Top             =   2880
      Width           =   1200
   End
   Begin VB.Label A0 
      BorderStyle     =   1  'Fixed Single
      Height          =   495
      Left            =   3960
      TabIndex        =   12
      Top             =   2160
      Width           =   1200
   End
   Begin VB.Label M0 
      BorderStyle     =   1  'Fixed Single
      Height          =   495
      Left            =   3960
      TabIndex        =   11
      Top             =   1440
      Width           =   1200
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Public ptr As Object

Private Sub CommandCreate_Click()
    Set ptr = CreateObject("Wizard.Simple.1")
End Sub

Private Sub CommandAverage_Click()
    A0 = ptr.Average(A1, A2)
End Sub

Private Sub CommandMultiply_Click()
    M0 = ptr.Multiply(M1, M2)
End Sub

Private Sub CommandSquare_Click()
    S0 = ptr.Square(S1)
End Sub

Private Sub CommandSquareRoot_Click()
    SR0 = ptr.SquareRoot(SR1)
End Sub
