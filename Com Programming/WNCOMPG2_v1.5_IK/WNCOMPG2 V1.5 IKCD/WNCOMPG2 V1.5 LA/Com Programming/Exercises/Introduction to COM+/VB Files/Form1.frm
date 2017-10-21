VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "QA Bank Test Application"
   ClientHeight    =   1575
   ClientLeft      =   60
   ClientTop       =   300
   ClientWidth     =   5520
   LinkTopic       =   "Form1"
   ScaleHeight     =   1575
   ScaleWidth      =   5520
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtAmount 
      Height          =   345
      Left            =   975
      TabIndex        =   5
      Top             =   1125
      Width           =   2775
   End
   Begin VB.TextBox txtFrom 
      Height          =   345
      Left            =   975
      TabIndex        =   1
      Top             =   150
      Width           =   2775
   End
   Begin VB.TextBox txtTo 
      Height          =   345
      Left            =   975
      TabIndex        =   3
      Top             =   637
      Width           =   2775
   End
   Begin VB.CommandButton btnTransfer 
      Caption         =   "Transfer"
      Default         =   -1  'True
      Height          =   495
      Left            =   4080
      TabIndex        =   6
      Top             =   180
      Width           =   1155
   End
   Begin VB.Label Label4 
      AutoSize        =   -1  'True
      Caption         =   "&Amount:"
      Height          =   195
      Left            =   180
      TabIndex        =   4
      Top             =   1185
      Width           =   585
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      Caption         =   "&From:"
      Height          =   195
      Left            =   180
      TabIndex        =   0
      Top             =   180
      Width           =   390
   End
   Begin VB.Label Label2 
      AutoSize        =   -1  'True
      Caption         =   "&To:"
      Height          =   195
      Left            =   180
      TabIndex        =   2
      Top             =   690
      Width           =   240
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub btnTransfer_Click()
    On Error GoTo ErrHandler
    
    Dim tfr As QABANKTRANSFERLib.Transfer
    Set tfr = New QABANKTRANSFERLib.Transfer
    
    tfr.Transfer CDbl(txtAmount.Text), txtFrom.Text, txtTo.Text
    
    Set tfr = Nothing
    
    Exit Sub
    
ErrHandler:

    MsgBox "Error was " & Err.Number
    
End Sub
