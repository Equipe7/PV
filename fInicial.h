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
//---------------------------------------------------------------------------
class TInicial : public TForm
{
__published:	// IDE-managed Components
	TButton *bAluno;
	TButton *bResponsavel;
	TButton *bProfessor;
	TButton *bAdmin;
	TImage *Image1;
	void __fastcall bAdminClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInicial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInicial *Inicial;
//---------------------------------------------------------------------------
#endif
