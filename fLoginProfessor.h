//---------------------------------------------------------------------------

#ifndef fLoginProfessorH
#define fLoginProfessorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TLoginProfessor : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *lUsuario;
	TEdit *eUsuario;
	TLabel *lSenha;
	TEdit *eSenha;
	TButton *bEntrar;
private:	// User declarations
public:		// User declarations
	__fastcall TLoginProfessor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginProfessor *LoginProfessor;
//---------------------------------------------------------------------------
#endif
