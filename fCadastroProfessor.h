//---------------------------------------------------------------------------

#ifndef fCadastroProfessorH
#define fCadastroProfessorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCadastroProf : public TForm
{
__published:	// IDE-managed Components
	TLabel *lNome;
	TEdit *cNome;
	TLabel *lCpf;
	TEdit *cCpf;
	TLabel *lIdade;
	TEdit *cIdade;
	TLabel *lEndereço;
	TEdit *cEnder;
	TButton *bConsultar;
	TButton *bSalvar;
	TRadioGroup *Sexo;
	TLabel *lSenha;
	TEdit *cSenha;
	TLabel *lGrad;
	TEdit *cGrad;
	void __fastcall cCpfExit(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall bSalvarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCadastroProf(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCadastroProf *CadastroProf;
//---------------------------------------------------------------------------
#endif
