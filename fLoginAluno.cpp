//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fLoginAluno.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "fInicial.h"
#pragma resource "*.dfm"
TLoginAluno *LoginAluno;
//---------------------------------------------------------------------------
__fastcall TLoginAluno::TLoginAluno(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLoginAluno::Inicial1Click(TObject *Sender)
{
	TInicial *Inicial = new TInicial(this);
	Inicial->ShowModal();
	Inicial->Free();
}
//---------------------------------------------------------------------------

