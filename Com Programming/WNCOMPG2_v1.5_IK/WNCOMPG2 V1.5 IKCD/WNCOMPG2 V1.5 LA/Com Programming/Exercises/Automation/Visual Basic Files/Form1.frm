VERSION 5.00
Object = "{23D68035-96C9-11D0-A5E4-00609740F258}#1.0#0"; "Fire.dll"
Begin VB.Form Form1 
   Caption         =   "Fire Control"
   ClientHeight    =   5280
   ClientLeft      =   2160
   ClientTop       =   1980
   ClientWidth     =   5430
   BeginProperty Font 
      Name            =   "MS Sans Serif"
      Size            =   18
      Charset         =   0
      Weight          =   700
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   LinkTopic       =   "Form1"
   ScaleHeight     =   5280
   ScaleWidth      =   5430
   Begin VB.Timer Timer1 
      Interval        =   100
      Left            =   120
      Top             =   120
   End
   Begin VB.CommandButton CommandDown 
      Caption         =   "Down"
      Enabled         =   0   'False
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3960
      TabIndex        =   3
      Top             =   2520
      Width           =   1215
   End
   Begin VB.CommandButton CommandUp 
      Caption         =   "Up"
      Enabled         =   0   'False
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3960
      TabIndex        =   2
      Top             =   1680
      Width           =   1215
   End
   Begin VB.CommandButton CommandCreateFire 
      Caption         =   "Create Fire"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3960
      TabIndex        =   1
      Top             =   840
      Width           =   1215
   End
   Begin FIRELibCtl.FireCtrl FireCtrl1 
      Height          =   3015
      Left            =   480
      OleObjectBlob   =   "Form1.frx":0000
      TabIndex        =   0
      Top             =   600
      Width           =   3255
   End
   Begin VB.Label CurrentTempature 
      Alignment       =   2  'Center
      AutoSize        =   -1  'True
      Height          =   435
      Left            =   2400
      TabIndex        =   5
      Top             =   3720
      Width           =   135
   End
   Begin VB.Label Label1 
      AutoSize        =   -1  'True
      Caption         =   "Temperature"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   195
      Left            =   1200
      TabIndex        =   4
      Top             =   3840
      Width           =   900
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub CommandCreateFire_Click()
    FireCtrl1.CreateFire
    CommandUp.Enabled = True
    CommandDown.Enabled = True
    CommandCreateFire.Enabled = False
End Sub

Private Sub CommandUp_Click()
    FireCtrl1.Up
End Sub

Private Sub CommandDown_Click()
    FireCtrl1.Down
End Sub

Private Sub Timer1_Timer()
    CurrentTempature = FireCtrl1.Temperature
End Sub
