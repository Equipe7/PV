//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fCadastroAluno.h"
#include "fSobre.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCadastroAluno *CadastroAluno;
//---------------------------------------------------------------------------
__fastcall TCadastroAluno::TCadastroAluno(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------




void __fastcall TCadastroAluno::Sobre1Click(TObject *Sender)
{
	TSobre *Sobre = new TSobre(this);
	Sobre->ShowModal();
	delete Sobre;

}
//---------------------------------------------------------------------------


void __fastcall TCadastroAluno::FormCreate(TObject *Sender)
{
	cNome->Enabled = false;
	cIdade->Enabled = false;
	cEnder->Enabled = false;
	Sexo->Enabled = false;
	cbTurma->Enabled = false;
	cSenha->Enabled = false;
	//bSalvar->Enabled = false;
}
//---------------------------------------------------------------------------



int consulta_cpf(String cpf){
	return 1;
}
//---------------------------------------------------------------------------

void __fastcall TCadastroAluno::cCpfExit(TObject *Sender)
{
	int mat = consulta_cpf(cCpf->Text);
	if(mat==1){
		ShowMessage("Registro não existe");
		cNome->Enabled = true;
		cIdade->Enabled = true;
		cEnder->Enabled = true;
		Sexo->Enabled = true;
		cbTurma->Enabled = true;
		cSenha->Enabled = true;
		bSalvar->Enabled;
	}
	if(mat==0){
		ShowMessage("Registro existe");
	}
}
//---------------------------------------------------------------------------


void __fastcall TCadastroAluno::bSalvarClick(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

