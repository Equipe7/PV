//---------------------------------------------------------------------------

#ifndef fLoginAlunoH
#define fLoginAlunoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.DBXMySql.hpp>
#include <Data.SqlExpr.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TLoginAluno : public TForm
{
__published:	// IDE-managed Components
	TEdit *cUsuario;
	TEdit *cSenha;
	TButton *bEntrar;
	TImage *Image1;
	TLabel *lSenha;
	TLabel *lUsuario;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TLabel *lAlu;
	TMenuItem *Inicil1;
	TMenuItem *Sair1;
	TMenuItem *Sobre1;
	TMenuItem *Sobre2;
	void __fastcall Inicil1Click(TObject *Sender);
	void __fastcall Sobre2Click(TObject *Sender);
	void __fastcall Sair1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginAluno(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginAluno *LoginAluno;
//---------------------------------------------------------------------------
#endif
