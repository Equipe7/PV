object AdmInicial: TAdmInicial
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Administrador'
  ClientHeight = 399
  ClientWidth = 315
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
  object bAlunoMat: TButton
    Left = 80
    Top = 49
    Width = 137
    Height = 25
    Caption = 'Alunos matriculados'
    TabOrder = 0
  end
  object bProfMat: TButton
    Left = 80
    Top = 80
    Width = 137
    Height = 25
    Caption = ' Professores Matriculados'
    TabOrder = 1
  end
  object MainMenu1: TMainMenu
    Left = 232
    object Arquivo1: TMenuItem
      Caption = 'Arquivo'
      object Matricular1: TMenuItem
        Caption = 'Matricular'
        object Aluno1: TMenuItem
          Caption = 'Aluno'
          OnClick = Aluno1Click
        end
        object Professor1: TMenuItem
          Caption = 'Professor'
          OnClick = Professor1Click
        end
        object Responsvel1: TMenuItem
          Caption = 'Respons'#225'vel'
        end
        object Administrador1: TMenuItem
          Caption = 'Administrador'
        end
      end
      object Sair1: TMenuItem
        Caption = 'Sair'
        OnClick = Sair1Click
      end
    end
    object Ajuda1: TMenuItem
      Caption = 'Ajuda'
      object Sobre1: TMenuItem
        Caption = 'Sobre'
        OnClick = Sobre1Click
      end
    end
  end
end
