//---------------------------------------------------------------------------

#ifndef fAdmInicalH
#define fAdmInicalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TAdmInicial : public TForm
{
__published:	// IDE-managed Components
	TButton *bAlunoMat;
	TButton *bProfMat;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Matricular1;
	TMenuItem *Sair1;
	TMenuItem *Ajuda1;
	TMenuItem *Sobre1;
	TMenuItem *Aluno1;
	TMenuItem *Professor1;
	TMenuItem *Responsvel1;
	TMenuItem *Administrador1;
	void __fastcall Sobre1Click(TObject *Sender);
	void __fastcall Sair1Click(TObject *Sender);
	void __fastcall Aluno1Click(TObject *Sender);
	void __fastcall Professor1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdmInicial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdmInicial *AdmInicial;
//---------------------------------------------------------------------------
#endif
