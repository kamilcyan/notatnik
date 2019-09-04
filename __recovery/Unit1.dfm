object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 556
  ClientWidth = 1065
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel4: TPanel
    Left = 0
    Top = 0
    Width = 1065
    Height = 556
    Align = alClient
    Caption = 'Panel4'
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 1
      Top = 1
      Width = 1063
      Height = 554
      Align = alClient
      TabOrder = 0
    end
  end
  object ActionList1: TActionList
    Left = 968
    Top = 144
    object Action1: TAction
      Caption = 'Otworz'
      OnExecute = Action1Execute
    end
    object Action2: TAction
      Caption = 'Nowy'
      OnExecute = Action2Execute
    end
    object Action3: TAction
      Caption = 'Zapisz'
      OnExecute = Action3Execute
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 968
    Top = 88
  end
  object MainMenu1: TMainMenu
    Left = 968
    Top = 200
    object Plik1: TMenuItem
      Caption = 'Plik'
      object Otworz1: TMenuItem
        Caption = 'Otworz'
        OnClick = Action1Execute
      end
      object Nowy1: TMenuItem
        Action = Action2
      end
      object Zamknij1: TMenuItem
        Caption = 'Zamknij'
      end
      object Zapisz1: TMenuItem
        Action = Action3
      end
    end
  end
  object SaveDialog1: TSaveDialog
    FileName = 'C:\Users\Kamkam\Desktop\ouihhu'
    Left = 968
    Top = 256
  end
end
