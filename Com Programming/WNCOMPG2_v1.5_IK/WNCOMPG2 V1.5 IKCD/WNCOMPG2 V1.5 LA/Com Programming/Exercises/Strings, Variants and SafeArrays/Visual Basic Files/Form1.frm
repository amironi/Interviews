VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Data Types"
   ClientHeight    =   5400
   ClientLeft      =   2250
   ClientTop       =   2295
   ClientWidth     =   6240
   LinkTopic       =   "Form1"
   ScaleHeight     =   5400
   ScaleWidth      =   6240
   Begin VB.ListBox List1 
      BackColor       =   &H00FFFF00&
      Height          =   1035
      ItemData        =   "Form1.frx":0000
      Left            =   3240
      List            =   "Form1.frx":0002
      TabIndex        =   8
      Top             =   360
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H0000FFFF&
      Height          =   495
      Left            =   2280
      TabIndex        =   7
      Text            =   "aBcDeFgHiJkLmNoPqRsTuVwXyZ"
      Top             =   4200
      Width           =   3135
   End
   Begin VB.CommandButton Command6 
      Caption         =   "ToLower"
      Height          =   495
      Left            =   240
      TabIndex        =   6
      Top             =   4560
      Width           =   1600
   End
   Begin VB.CommandButton Command5 
      Caption         =   "ToUpper"
      Height          =   495
      Left            =   240
      TabIndex        =   5
      Top             =   3960
      Width           =   1600
   End
   Begin VB.PictureBox GreenBox 
      BackColor       =   &H0000FF00&
      Height          =   1215
      Left            =   3240
      ScaleHeight     =   1155
      ScaleWidth      =   1155
      TabIndex        =   4
      Top             =   2160
      Width           =   1215
   End
   Begin VB.CommandButton Command4 
      Caption         =   "ExpandRectangle"
      Height          =   495
      Left            =   240
      TabIndex        =   3
      Top             =   2520
      Width           =   1600
   End
   Begin VB.CommandButton Command3 
      Caption         =   "TotalArray"
      Enabled         =   0   'False
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   1320
      Width           =   1600
   End
   Begin VB.CommandButton Command2 
      Caption         =   "DoubleArray"
      Enabled         =   0   'False
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   720
      Width           =   1600
   End
   Begin VB.CommandButton Command1 
      Caption         =   "CreateArray"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   120
      Width           =   1600
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      Height          =   375
      Left            =   3240
      TabIndex        =   9
      Top             =   1440
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

'Declare interface pointers
Public px As DATATYPESLib.ISafeArray
Public py As DATATYPESLib.IVariant
Public pz As DATATYPESLib.IBSTR

Private Type Rectangle
    left As Long
    top As Long
    height As Long
    width As Long
End Type

Dim theArray() As Long

'Create object and QI for interface pointers
Private Sub Form_Load()
    Set px = CreateObject("DataTypes.Parameters.1")
    Set py = px
    Set pz = px
End Sub

'Invoke methods
Private Sub PrintArray()
    Dim i As Long
    For i = 0 To 4
        List1.List(i) = theArray(i)
    Next
End Sub

Private Function PackVariant(r As Rectangle) As Variant
    Dim v(4) As Variant
    v(0) = r.left
    v(1) = r.top
    v(2) = r.width
    v(3) = r.height
    PackVariant = v
End Function

Private Function UnpackVariant(v As Variant) As Rectangle
    Dim r As Rectangle
    r.left = v(0)
    r.top = v(1)
    r.width = v(2)
    r.height = v(3)
    UnpackVariant = r
End Function

Private Sub Command1_Click()
    px.CreateArray theArray
    PrintArray
    Command1.Enabled = False
    Command2.Enabled = True
    Command3.Enabled = True
End Sub

Private Sub Command2_Click()
    px.DoubleArray theArray
    PrintArray
End Sub

Private Sub Command3_Click()
    Dim total As Long
    total = px.SumTheArray(theArray)
    Label1.Caption = "Total = " & total
End Sub

Private Sub Command4_Click()
    Dim theRectangle As Rectangle
    theRectangle.left = GreenBox.left
    theRectangle.top = GreenBox.top
    theRectangle.width = GreenBox.width
    theRectangle.height = GreenBox.height
    
    Dim v As Variant
    v = PackVariant(theRectangle)
    py.ExpandRectangle v
    theRectangle = UnpackVariant(v)

    GreenBox.left = theRectangle.left
    GreenBox.top = theRectangle.top
    GreenBox.width = theRectangle.width
    GreenBox.height = theRectangle.height
End Sub

Private Sub Command5_Click()
    Dim s As String
    s = Text1.Text
    pz.ToUpper s
    Text1.Text = s
End Sub

Private Sub Command6_Click()
    Dim s As String
    s = Text1.Text
    pz.ToLower s
    Text1.Text = s
End Sub


