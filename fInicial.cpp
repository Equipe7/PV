//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fInicial.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "fLoginAluno.h"
#include "fLoginResponsavel.h"
#include "fLoginAdministrador.h"
#include "fLoginProfessor.h"
#pragma resource "*.dfm"
TInicial *Inicial;
//---------------------------------------------------------------------------
__fastcall TInicial::TInicial(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TInicial::bAdminClick(TObject *Sender)
{
	TLoginAdministrador *LoginAdministrador = new TLoginAdministrador(this);
	LoginAdministrador->ShowModal();
	LoginAdministrador->Free();
}
//---------------------------------------------------------------------------
