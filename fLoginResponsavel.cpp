//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fLoginResponsavel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "fInicial.h"
#pragma resource "*.dfm"
TLoginResponsavel *LoginResponsavel;
//---------------------------------------------------------------------------
__fastcall TLoginResponsavel::TLoginResponsavel(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLoginResponsavel::Inicial1Click(TObject *Sender)
{
	TInicial *Inicial = new TInicial(this);
	Inicial->ShowModal();
	Inicial->Free();
}
//---------------------------------------------------------------------------

