//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fInicial.h"
#include "fLoginAluno.h"
#include "fLoginAdm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TInicial *Inicial;
//---------------------------------------------------------------------------
__fastcall TInicial::TInicial(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TInicial::bAlunoClick(TObject *Sender)
{
	TLoginAluno *LoginAluno = new  TLoginAluno(this);
	LoginAluno->ShowModal();
	LoginAluno->Free();

}
//---------------------------------------------------------------------------



void __fastcall TInicial::bAdminClick(TObject *Sender)
{
	TLoginAdm *LoginAdm = new  TLoginAdm(this);
	LoginAdm->ShowModal();
	LoginAdm->Free();
}
//---------------------------------------------------------------------------

void __fastcall TInicial::Sair1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

