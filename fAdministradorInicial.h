//---------------------------------------------------------------------------

#ifndef fAdministradorInicialH
#define fAdministradorInicialH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TAdminInicial : public TForm
{
__published:	// IDE-managed Components
	TButton *bAlunos;
	TButton *bProf;
	TButton *bAdmin;
	TLabel *Label1;
	TImage *Image1;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Sair1;
	void __fastcall bAlunosClick(TObject *Sender);
	void __fastcall Sair1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminInicial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminInicial *AdminInicial;
//---------------------------------------------------------------------------
#endif
