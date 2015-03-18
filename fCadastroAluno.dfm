object CadastroAluno: TCadastroAluno
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Cadastrar Aluno'
  ClientHeight = 403
  ClientWidth = 368
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Icon.Data = {
    0000010001001010000000002000680400001600000028000000100000002000
    000001002000000000000004000000000000000000000000000000000000FFFF
    FF00FEFEFE00FFFFFF00FEFEFE00FFFFFF00FCFCFC00F7F7F700F8F8F800FAFA
    FA82FCFCFC00FEFEFE00FEFEFE00FFFFFF00FEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FEFEFE00FEFEFE00FAFAFA00FCFCFC00FCFCFCF0FCFC
    FCF8FEFEFEFCFBFBFB00FEFEFE00FFFFFF00FEFEFE00FFFFFF00FEFEFE00FEFE
    FE00FEFEFE00FEFEFE00FEFEFE00FDFDFD00FDFDFD00FCFCFCFEFEFEFEFEFEFE
    FEFFFBFBFBFBFBFBFB81FEFEFE00FEFEFE00FEFEFE00FEFEFE00FEFEFE00FEFE
    FE00FEFEFEFFFFFFFFFFFEFEFEFFE7E7E7FFD5D5D5D8D9D9D9D8E0E0E0D9F1F1
    F1FFE6E6E6DADFDFDFDBDCDCDCD8F2F2F2FFFEFEFEFFFEFEFEFFFEFEFEF8FEFE
    FE00FEFEFE00FFFFFFFFFEFEFEFFC9C9C9FFACACACFFA3A3A3FFAFAFAFFFD2D2
    D2FFB3B3B3FFB3B3B3FFA4A4A4FFF4F4F4FFFEFEFEFFFEFEFEFFFEFEFE00FEFE
    FE00FEFEFEFFFEFEFEFFFEFEFEFFEEEEEEFFF8F8F8FFF3F3F3FFFEFEFEFFF7F7
    F7FFF4F4F4FFFFFFFFFFEEEEEEFFFEFEFEFFFEFEFEFFFEFEFEFFFEFEFEF8FFFF
    FF00FEFEFE00FFFFFF00FCFCFC00FBFBFBFFF9F9F9FFFDFDFDFFFEFEFEFFFEFE
    FEFFFBFBFBFFFAFAFAFFF9F9F9FFF7F7F7FFFEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FEFEFE00FEFEFEEBFEFEFEFFFDFDFDF9FDFDFD00FDFD
    FD00FEFEFE00FEFEFEFFFDFDFDFAF3F3F34FFEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FDFDFD00FDFDFDB2FEFEFEFFFEFEFEFFFDFDFDFFFEFE
    FEFFFEFEFEFFFFFFFFFFFEFEFEFFF7F7F745FEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FEFEFE00FDFDFDFFFEFEFEFFFEFEFEFFFDFDFDF8FDFD
    FDF8FEFEFEF8FFFFFFFFFEFEFEFFF7F7F7F5FEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FDFDFD00FEFEFEFAFEFEFEFFFAFAFAFFFEFEFE00FEFE
    FE00FEFEFE00FEFEFEFFFEFEFEFFF7F7F7FBFEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00F5F5F500FEFEFEF2FEFEFEFFFBFBFBFFF6F6F600FEFE
    FEFFFDFDFD00FEFEFEFFFEFEFEFFF7F7F7FEFEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FAFAFA00FDFDFDFFFEFEFEFCFCFCFC00FDFDFD02FEFE
    FEFFFEFEFE00FCFCFC00FDFDFDFFF5F5F5E5FEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00F9F9F900FBFBFB58FEFEFE00FEFEFE00FDFDFDFFFCFC
    FCFFFEFEFE00FEFEFE00FDFDFD8DF7F7F7FDFEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FEFEFE00FCFCFC08FEFEFE00FCFCFC00FDFDFD00FDFD
    FDB6FEFEFE00FEFEFE00FCFCFC1DF8F8F800FEFEFE00FFFFFF00FEFEFE00FFFF
    FF00FEFEFE00FFFFFF00FCFCFC00F8F8F800FAFAFA04FAFAFA00F8F8F86EFBFB
    FBEDFDFDFD00FDFDFD00FDFDFDB7FAFAFA00FEFEFE00FFFFFF00FEFEFE00FF7F
    0000FE3F0000FC1F000080000000C001000080000000F0070000F1C70000F007
    0000F0070000F1C70000F1470000F2670000F6670000F76F0000FA6F0000}
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lNome: TLabel
    Left = 20
    Top = 53
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
  object lIdade: TLabel
    Left = 21
    Top = 80
    Width = 32
    Height = 16
    Caption = 'Idade'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lTurma: TLabel
    Left = 21
    Top = 213
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
  object lCpf: TLabel
    Left = 21
    Top = 26
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
  object lSenha: TLabel
    Left = 20
    Top = 247
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
  object lEnder: TLabel
    Left = 20
    Top = 109
    Width = 45
    Height = 13
    Caption = 'Endere'#231'o'
  end
  object cNome: TEdit
    Left = 100
    Top = 52
    Width = 197
    Height = 21
    TabOrder = 0
  end
  object cIdade: TEdit
    Left = 100
    Top = 79
    Width = 53
    Height = 21
    TabOrder = 1
  end
  object Sexo: TRadioGroup
    Left = 100
    Top = 133
    Width = 121
    Height = 73
    Caption = 'Sexo'
    Items.Strings = (
      'Masculino'
      'Feminino')
    TabOrder = 2
  end
  object bSalvar: TButton
    Left = 100
    Top = 289
    Width = 75
    Height = 25
    Caption = 'Salvar'
    TabOrder = 3
    OnClick = bSalvarClick
  end
  object cbTurma: TComboBox
    Left = 100
    Top = 212
    Width = 85
    Height = 21
    TabOrder = 4
    Items.Strings = (
      '171-I'
      '271-I'
      '371-I'
      '181-I'
      '281-I'
      '381-I'
      '111-I'
      '211-I'
      '311-I')
  end
  object cCpf: TEdit
    Left = 100
    Top = 25
    Width = 121
    Height = 21
    TabOrder = 5
    OnExit = cCpfExit
  end
  object cSenha: TEdit
    Left = 100
    Top = 246
    Width = 133
    Height = 21
    TabOrder = 6
  end
  object cEnder: TEdit
    Left = 100
    Top = 106
    Width = 197
    Height = 21
    TabOrder = 7
  end
  object bConsultar: TButton
    Left = 234
    Top = 21
    Width = 63
    Height = 25
    Caption = 'Consultar'
    TabOrder = 8
  end
  object MainMenu1: TMainMenu
    Left = 312
    Top = 16
    object fe1: TMenuItem
      Caption = 'Arquivo'
      object Salvar1: TMenuItem
        Caption = 'Salvar'
      end
      object Sair1: TMenuItem
        Caption = 'Sair'
      end
    end
    object efe1: TMenuItem
      Caption = 'Ajuda'
      object Sobre1: TMenuItem
        Caption = 'Sobre'
        OnClick = Sobre1Click
      end
    end
  end
end
