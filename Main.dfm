object MainForm: TMainForm
  Left = 769
  Top = 544
  BorderStyle = bsDialog
  Caption = 'Select Video Resolution'
  ClientHeight = 241
  ClientWidth = 313
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 246
    Height = 13
    Caption = 'Select video resolution you want to use in the game.'
  end
  object ListBoxResolutions: TListBox
    Left = 16
    Top = 40
    Width = 281
    Height = 145
    ItemHeight = 13
    TabOrder = 0
  end
  object ButtonOK: TButton
    Left = 120
    Top = 200
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    TabOrder = 1
    OnClick = ButtonOKClick
  end
end
