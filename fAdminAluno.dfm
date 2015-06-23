object AdminAluno: TAdminAluno
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Cadastrar'
  ClientHeight = 462
  ClientWidth = 765
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 765
    Height = 462
    ActivePage = Matricular
    Align = alClient
    TabOrder = 0
    OnChange = PageControl1Change
    ExplicitWidth = 659
    object Matricular: TTabSheet
      Caption = 'Matricular'
      ExplicitWidth = 651
      object lTurma: TLabel
        Left = 154
        Top = 310
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
        Left = 154
        Top = 280
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
        Left = 154
        Top = 49
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
        Left = 154
        Top = 220
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
        Left = 154
        Top = 250
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
        Left = 154
        Top = 15
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
        Left = 154
        Top = 79
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
        Left = 154
        Top = 109
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
        Left = 309
        Top = 136
        Width = 121
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
        Left = 309
        Top = 277
        Width = 90
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
        Left = 309
        Top = 46
        Width = 169
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
        Left = 309
        Top = 217
        Width = 161
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
        Left = 309
        Top = 247
        Width = 56
        Height = 24
        EditMask = '!90/90/00;1;_'
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
        Left = 309
        Top = 16
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
        Left = 309
        Top = 307
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
        Left = 309
        Top = 343
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
      object bConsultar: TButton
        Left = 412
        Top = 15
        Width = 66
        Height = 25
        Caption = 'Consultar'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 8
        OnClick = bConsultarClick
      end
      object eMae: TEdit
        Left = 309
        Top = 76
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
      object ePai: TEdit
        Left = 309
        Top = 106
        Width = 121
        Height = 24
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 10
      end
    end
    object Matriculados: TTabSheet
      Caption = 'Matriculados'
      ImageIndex = 1
      ExplicitWidth = 651
      object DBGrid1: TDBGrid
        Left = 4
        Top = 65
        Width = 750
        Height = 361
        DataSource = DataSource1
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'cpf'
            Title.Caption = 'CPF'
            Width = 85
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'nome'
            Title.Caption = 'Nome'
            Width = 132
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'mae'
            Title.Caption = 'M'#227'e'
            Width = 103
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'pai'
            Title.Caption = 'Pai'
            Width = 93
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ender'
            Title.Caption = 'Endere'#231'o'
            Width = 88
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'turma'
            Title.Caption = 'Turma'
            Width = 36
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'senha'
            Title.Caption = 'Senha'
            Width = 49
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'sexo'
            Title.Caption = 'Sexo'
            Width = 28
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'data_nasc'
            Title.Caption = 'Data de Nascimento'
            Width = 110
            Visible = True
          end>
      end
      object bEditar: TButton
        Left = 3
        Top = 19
        Width = 75
        Height = 25
        Caption = 'Editar'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnClick = bEditarClick
      end
      object bRemover: TButton
        Left = 97
        Top = 19
        Width = 75
        Height = 25
        Caption = 'Remover'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 2
        OnClick = bRemoverClick
      end
    end
  end
  object UniConnection1: TUniConnection
    ProviderName = 'MySQL'
    Port = 3306
    Database = '371i'
    Username = 'root'
    Server = 'localhost'
    Connected = True
    Left = 40
    Top = 192
  end
  object UniQuery1: TUniQuery
    Connection = UniConnection1
    Left = 40
    Top = 256
  end
  object MySQLUniProvider1: TMySQLUniProvider
    Left = 40
    Top = 128
  end
  object MainMenu1: TMainMenu
    Left = 600
    Top = 32
    object Arquivo1: TMenuItem
      Caption = 'Arquivo'
      object Sair1: TMenuItem
        Caption = 'Sair'
        OnClick = Sair1Click
      end
    end
  end
  object UniQuery2: TUniQuery
    Connection = UniConnection1
    SQL.Strings = (
      'select *from aluno order by nome')
    Left = 44
    Top = 320
  end
  object DataSource1: TDataSource
    DataSet = UniQuery2
    Left = 44
    Top = 384
  end
end
