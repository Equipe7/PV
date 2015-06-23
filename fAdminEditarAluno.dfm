object AdminEditarAluno: TAdminEditarAluno
  Left = 0
  Top = 0
  Caption = 'Editar'
  ClientHeight = 421
  ClientWidth = 485
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lTurma: TLabel
    Left = 58
    Top = 318
    Width = 38
    Height = 16
    Caption = 'Turma'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lSenha: TLabel
    Left = 58
    Top = 288
    Width = 36
    Height = 16
    Caption = 'Senha'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lNome: TLabel
    Left = 58
    Top = 57
    Width = 33
    Height = 16
    Caption = 'Nome'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lEnder: TLabel
    Left = 58
    Top = 228
    Width = 53
    Height = 16
    Caption = 'Endere'#231'o'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lDn: TLabel
    Left = 58
    Top = 258
    Width = 114
    Height = 16
    Caption = 'Data de Nascimento'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lCpf: TLabel
    Left = 58
    Top = 23
    Width = 22
    Height = 16
    Caption = 'CPF'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lMae: TLabel
    Left = 58
    Top = 87
    Width = 24
    Height = 16
    Caption = 'M'#227'e'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lPai: TLabel
    Left = 58
    Top = 117
    Width = 17
    Height = 16
    Caption = 'Pai'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object rgSexo: TRadioGroup
    Left = 205
    Top = 144
    Width = 120
    Height = 75
    Caption = 'Sexo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      'Masculino'
      'Feminino')
    ParentFont = False
    TabOrder = 0
  end
  object eSenha: TEdit
    Left = 205
    Top = 285
    Width = 89
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object eNome: TEdit
    Left = 205
    Top = 54
    Width = 168
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object eEnder: TEdit
    Left = 205
    Top = 225
    Width = 160
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object eDn: TMaskEdit
    Left = 205
    Top = 255
    Width = 72
    Height = 24
    EditMask = '!99/99/00;1;_'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    MaxLength = 8
    ParentFont = False
    TabOrder = 4
    Text = '  /  /  '
  end
  object eCpf: TEdit
    Left = 204
    Top = 24
    Width = 90
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object cbTurma: TComboBox
    Left = 205
    Top = 315
    Width = 80
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    Items.Strings = (
      '171-I'
      '271-I'
      '371-I'
      '181-I'
      '281-I'
      '381-I'
      '111-I'
      '211-I'
      '311-I'
      '171-C'
      '271-C'
      '371-C')
  end
  object bSalvar: TButton
    Left = 205
    Top = 345
    Width = 74
    Height = 25
    Caption = 'Salvar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = bSalvarClick
  end
  object eMae: TEdit
    Left = 205
    Top = 84
    Width = 121
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object ePai: TEdit
    Left = 205
    Top = 114
    Width = 121
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object UniConnection1: TUniConnection
    ProviderName = 'MySQL'
    Port = 3306
    Database = '371i'
    Username = 'root'
    Server = 'localhost'
    Connected = True
    Left = 432
    Top = 48
  end
  object UniQuery1: TUniQuery
    Connection = UniConnection1
    Left = 432
    Top = 104
  end
  object MySQLUniProvider1: TMySQLUniProvider
    Left = 432
    Top = 168
  end
end
