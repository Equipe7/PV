//---------------------------------------------------------------------------

#ifndef fSobreH
#define fSobreH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TSobre : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TSobre(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSobre *Sobre;
//---------------------------------------------------------------------------
#endif
