//---------------------------------------------------------------------------

#ifndef fLoginAdmH
#define fLoginAdmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TLoginAdm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *lUsuario;
	TEdit *cUsuario;
	TLabel *lSenha;
	TEdit *cSenha;
	TButton *bEntrar;
	TLabel *lAdm;
	void __fastcall bEntrarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginAdm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginAdm *LoginAdm;
//---------------------------------------------------------------------------
#endif
