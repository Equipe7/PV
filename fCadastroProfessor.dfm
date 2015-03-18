object CadastroProf: TCadastroProf
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Cadastrar Professor'
  ClientHeight = 421
  ClientWidth = 351
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lNome: TLabel
    Left = 34
    Top = 62
    Width = 27
    Height = 13
    Caption = 'Nome'
  end
  object lCpf: TLabel
    Left = 34
    Top = 35
    Width = 19
    Height = 13
    Caption = 'CPF'
  end
  object lIdade: TLabel
    Left = 34
    Top = 89
    Width = 28
    Height = 13
    Caption = 'Idade'
  end
  object lEndereço: TLabel
    Left = 34
    Top = 116
    Width = 45
    Height = 13
    Caption = 'Endere'#231'o'
  end
  object lSenha: TLabel
    Left = 34
    Top = 254
    Width = 30
    Height = 13
    Caption = 'Senha'
  end
  object lGrad: TLabel
    Left = 34
    Top = 224
    Width = 52
    Height = 13
    Caption = 'Gradua'#231#227'o'
  end
  object cNome: TEdit
    Left = 112
    Top = 59
    Width = 211
    Height = 21
    TabOrder = 0
  end
  object cCpf: TEdit
    Left = 112
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 1
    OnExit = cCpfExit
  end
  object cIdade: TEdit
    Left = 112
    Top = 86
    Width = 57
    Height = 21
    TabOrder = 2
  end
  object cEnder: TEdit
    Left = 112
    Top = 113
    Width = 211
    Height = 21
    TabOrder = 3
  end
  object bConsultar: TButton
    Left = 248
    Top = 30
    Width = 75
    Height = 25
    Caption = 'Consultar'
    TabOrder = 4
  end
  object bSalvar: TButton
    Left = 112
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Salvar'
    TabOrder = 5
    OnClick = bSalvarClick
  end
  object Sexo: TRadioGroup
    Left = 112
    Top = 140
    Width = 121
    Height = 73
    Caption = 'Sexo'
    Items.Strings = (
      'Masculino '
      'Feminino')
    TabOrder = 6
  end
  object cSenha: TEdit
    Left = 112
    Top = 251
    Width = 121
    Height = 21
    TabOrder = 7
  end
  object cGrad: TEdit
    Left = 112
    Top = 224
    Width = 121
    Height = 21
    TabOrder = 8
  end
end
