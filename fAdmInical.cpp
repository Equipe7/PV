//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fAdmInical.h"
#include "fSobre.h"
#include "fInicial.h"
#include "fCadastroAluno.h"
#include "fCadastroProfessor.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdmInicial *AdmInicial;
//---------------------------------------------------------------------------
__fastcall TAdmInicial::TAdmInicial(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdmInicial::Sobre1Click(TObject *Sender)
{
	TSobre *Sobre = new TSobre(this);
	Sobre->ShowModal();
	Sobre->Free();
}
//---------------------------------------------------------------------------

void __fastcall TAdmInicial::Sair1Click(TObject *Sender)
{
	TInicial *Inicial = new TInicial(this);
	Inicial->ShowModal();
	Inicial->Free();
}
//---------------------------------------------------------------------------

void __fastcall TAdmInicial::Aluno1Click(TObject *Sender)
{
	TCadastroAluno *CadastroAluno = new TCadastroAluno(this);
	CadastroAluno->ShowModal();
	CadastroAluno->Free();
}
//---------------------------------------------------------------------------

void __fastcall TAdmInicial::Professor1Click(TObject *Sender)
{
	TCadastroProf *CadastroProf = new TCadastroProf(this);
	CadastroProf->ShowModal();
	CadastroProf->Free();
}
//---------------------------------------------------------------------------

