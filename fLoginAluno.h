//---------------------------------------------------------------------------

#ifndef fLoginAlunoH
#define fLoginAlunoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TLoginAluno : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *lUsuario;
	TEdit *eUsuario;
	TLabel *lSenha;
	TEdit *eSenha;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Inicial1;
	TButton *bEntrar;
	void __fastcall Inicial1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginAluno(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginAluno *LoginAluno;
//---------------------------------------------------------------------------
#endif
