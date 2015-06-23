//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fAdministradorInicial.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "fAdminAluno.h"
#pragma resource "*.dfm"
TAdminInicial *AdminInicial;
//---------------------------------------------------------------------------
__fastcall TAdminInicial::TAdminInicial(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------

void __fastcall TAdminInicial::bAlunosClick(TObject *Sender)
{
	TAdminAluno *CadastrarAluno = new TAdminAluno(this);
	CadastrarAluno->ShowModal();
	CadastrarAluno->Free();
}
//---------------------------------------------------------------------------

void __fastcall TAdminInicial::Sair1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

