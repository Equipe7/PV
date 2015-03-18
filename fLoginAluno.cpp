//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fLoginAluno.h"
#include "fInicial.h"
#include "fSobre.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLoginAluno *LoginAluno;
//---------------------------------------------------------------------------
__fastcall TLoginAluno::TLoginAluno(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TLoginAluno::Inicil1Click(TObject *Sender)
{
	TInicial *Inicial = new TInicial(this);
	Inicial->ShowModal();
	Inicial->Free();

}
//---------------------------------------------------------------------------

void __fastcall TLoginAluno::Sobre2Click(TObject *Sender)
{
	TSobre *Sobre = new TSobre(this);
	Sobre->ShowModal();
	Sobre->Free();
}
//---------------------------------------------------------------------------


void __fastcall TLoginAluno::Sair1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

