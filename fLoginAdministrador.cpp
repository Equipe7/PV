//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fLoginAdministrador.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "fInicial.h"
#include "fAdministradorInicial.h"
#pragma resource "*.dfm"
TLoginAdministrador *LoginAdministrador;
//---------------------------------------------------------------------------
__fastcall TLoginAdministrador::TLoginAdministrador(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoginAdministrador::Inicial1Click(TObject *Sender)
{
	this->Close();

}
//---------------------------------------------------------------------------

void __fastcall TLoginAdministrador::bEntrarClick(TObject *Sender)
{
	TAdminInicial *AdminInicial = new TAdminInicial(this);
	AdminInicial->ShowModal();
	AdminInicial->Free();
}
//---------------------------------------------------------------------------

