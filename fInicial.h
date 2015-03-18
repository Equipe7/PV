//---------------------------------------------------------------------------

#ifndef fInicialH
#define fInicialH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TInicial : public TForm
{
__published:	// IDE-managed Components
	TPopupMenu *PopupMenu1;
	TButton *bAluno;
	TButton *bProfessor;
	TButton *bAdmin;
	TButton *bRespon;
	TImage *Image1;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Sair1;
	void __fastcall bAlunoClick(TObject *Sender);
	void __fastcall bAdminClick(TObject *Sender);
	void __fastcall Sair1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInicial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInicial *Inicial;
//---------------------------------------------------------------------------
#endif
