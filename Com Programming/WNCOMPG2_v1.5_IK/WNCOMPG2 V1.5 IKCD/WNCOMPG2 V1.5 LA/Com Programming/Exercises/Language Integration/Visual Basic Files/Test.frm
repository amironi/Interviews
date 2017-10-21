VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Error Handling in COM"
   ClientHeight    =   4605
   ClientLeft      =   3210
   ClientTop       =   2655
   ClientWidth     =   5025
   LinkTopic       =   "Form1"
   ScaleHeight     =   4605
   ScaleWidth      =   5025
   Begin VB.TextBox TextIn 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   500
      Left            =   120
      TabIndex        =   2
      Text            =   "50.0"
      Top             =   2880
      Width           =   2295
   End
   Begin VB.CommandButton CommandSqrt 
      Caption         =   "Calculate SquareRoot"
      Height          =   735
      Left            =   960
      TabIndex        =   1
      Top             =   1560
      Width           =   2775
   End
   Begin VB.CommandButton CommandCreate 
      Caption         =   "Create Object"
      Height          =   735
      Left            =   960
      TabIndex        =   0
      Top             =   480
      Width           =   2775
   End
   Begin VB.Label Label3 
      Alignment       =   2  'Center
      AutoSize        =   -1  'True
      Caption         =   "Square root"
      Height          =   195
      Left            =   2865
      TabIndex        =   5
      Top             =   2520
      Width           =   855
   End
   Begin VB.Label Label2 
      Alignment       =   2  'Center
      AutoSize        =   -1  'True
      Caption         =   "Number"
      Height          =   195
      Left            =   1155
      TabIndex        =   4
      Top             =   2520
      Width           =   585
   End
   Begin VB.Label LabelOut 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2520
      TabIndex        =   3
      Top             =   2880
      Width           =   2415
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public ptr As ERRORSLib.Server

Private Sub CommandCreate_Click()
    Set ptr = New ERRORSLib.Server
End Sub

Private Sub CommandSqrt_Click()
    Dim number As Double
    Dim result As Double
    
    On Error GoTo Problems
    number = TextIn
    result = ptr.SquareRoot(number)
    LabelOut = result
    Exit Sub
Problems:
    MsgBox "Description: " & Err.Description & vbCrLf & _
           "Error:       " & Err.LastDllError & vbCrLf & _
           "Number:      " & Err.number
End Sub

