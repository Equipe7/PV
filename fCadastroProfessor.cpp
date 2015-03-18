//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fCadastroProfessor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCadastroProf *CadastroProf;
//---------------------------------------------------------------------------
__fastcall TCadastroProf::TCadastroProf(TComponent* Owner)
	: TForm(Owner)
{
}

int consulta_cpf(String cpf){
	return 1;
}
//---------------------------------------------------------------------------
void __fastcall TCadastroProf::cCpfExit(TObject *Sender)
{
	int mat = consulta_cpf(cCpf->Text);
	if(mat==1){
		ShowMessage("Registro não existe");
		cNome->Enabled = true;
		cIdade->Enabled = true;
		cEnder->Enabled = true;
		Sexo->Enabled = true;
		cSenha->Enabled = true;
		cGrad->Enabled = true;
	}
	if(mat==0){
		ShowMessage("Registro existe");
	}
}
//---------------------------------------------------------------------------
void __fastcall TCadastroProf::FormCreate(TObject *Sender)
{
	cNome->Enabled = false;
	cIdade->Enabled = false;
	cEnder->Enabled = false;
	Sexo->Enabled = false;
	cSenha->Enabled = false;
	cGrad->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TCadastroProf::bSalvarClick(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

