//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fAdminEditarAluno.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MySQLUniProvider"
#pragma link "Uni"
#pragma link "UniProvider"
#pragma resource "*.dfm"
TAdminEditarAluno *AdminEditarAluno;
//---------------------------------------------------------------------------


String scpf, sexo;

__fastcall TAdminEditarAluno::TAdminEditarAluno(TComponent* Owner,
			String cpf,String nome, String dn, String ender, String turma,
			String senha, String mae, String pai, String sexo)
	: TForm(Owner)
{
	scpf = cpf;
	eCpf->Text = cpf;
	eNome->Text = nome;
	eDn->Text = dn;
	eEnder->Text = ender;
	cbTurma->Text = turma;
	eSenha->Text = senha;
	eMae->Text = mae;
	ePai->Text = pai;

	if(SameText(sexo, "M")== true){
		rgSexo->ItemIndex = 0;
	}else if(SameText(sexo, "F")== true){
        rgSexo->ItemIndex = 1;
	}
}
//---------------------------------------------------------------------------
void __fastcall TAdminEditarAluno::bSalvarClick(TObject *Sender)
{
	UniQuery1->Close();
	UniQuery1->SQL->Clear();

	TDateTime dn = StrToDate(eDn->Text);

	if(rgSexo->ItemIndex == 0){
		sexo = "M";
	}else if(rgSexo->ItemIndex == 1){
		sexo = "F";
	}
	UniQuery1->SQL->Add("update aluno set nome = '"+eNome->Text+
	"',cpf = '"+eCpf->Text+
	"', data_nasc = '"+dn.FormatString("yyyy-MM-dd")+
	"', ender = '"+eEnder->Text+
	"',turma = '"+cbTurma->Text+
	"', senha = '"+eSenha->Text+
	"',mae = '"+eMae->Text+
	"', pai = '"+ePai->Text+
	"',sexo = '"+sexo+
	"' where cpf = :cpf");
	UniQuery1->Params->Items[0]->Text = scpf;

	UniQuery1->Execute();
	ShowMessage("Dados Atualizados");
	this->Close();
}
//---------------------------------------------------------------------------
