//---------------------------------------------------------------------------

#ifndef fLoginAdministradorH
#define fLoginAdministradorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TLoginAdministrador : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *lUsuario;
	TEdit *eUsuario;
	TLabel *lSenha;
	TEdit *eSenha;
	TButton *bEntrar;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Inicial1;
	void __fastcall Inicial1Click(TObject *Sender);
	void __fastcall bEntrarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginAdministrador(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginAdministrador *LoginAdministrador;
//---------------------------------------------------------------------------
#endif
