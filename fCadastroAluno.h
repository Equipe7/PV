//---------------------------------------------------------------------------

#ifndef fCadastroAlunoH
#define fCadastroAlunoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TCadastroAluno : public TForm
{
__published:	// IDE-managed Components
	TLabel *lNome;
	TEdit *cNome;
	TLabel *lIdade;
	TEdit *cIdade;
	TRadioGroup *Sexo;
	TButton *bSalvar;
	TLabel *lTurma;
	TComboBox *cbTurma;
	TLabel *lCpf;
	TEdit *cCpf;
	TMainMenu *MainMenu1;
	TMenuItem *fe1;
	TMenuItem *Salvar1;
	TMenuItem *Sair1;
	TMenuItem *efe1;
	TMenuItem *Sobre1;
	TLabel *lSenha;
	TEdit *cSenha;
	TLabel *lEnder;
	TEdit *cEnder;
	TButton *bConsultar;
	void __fastcall Sobre1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall cCpfExit(TObject *Sender);
	void __fastcall bSalvarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCadastroAluno(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCadastroAluno *CadastroAluno;
//---------------------------------------------------------------------------
#endif
