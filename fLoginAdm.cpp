//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fLoginAdm.h"
#include "fAdmInical.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLoginAdm *LoginAdm;
//---------------------------------------------------------------------------
__fastcall TLoginAdm::TLoginAdm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoginAdm::bEntrarClick(TObject *Sender)
{
	TAdmInicial *AdmInicial = new TAdmInicial(this);
	AdmInicial->ShowModal();
	AdmInicial->Free();
}
//---------------------------------------------------------------------------

