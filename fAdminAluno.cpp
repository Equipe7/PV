//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fAdminAluno.h"

#include "fAdminEditarAluno.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "Uni"
#pragma link "MySQLUniProvider"
#pragma link "UniProvider"
#pragma link "MemDS"
#pragma resource "*.dfm"
TAdminAluno *AdminAluno;
//---------------------------------------------------------------------------
__fastcall TAdminAluno::TAdminAluno(TComponent* Owner)
	: TForm(Owner)
{
}


void __fastcall TAdminAluno::bSalvarClick(TObject *Sender)
{
	//Adiciona ao BD
	UniQuery1->Close();
	UniQuery1->SQL->Clear();
	UniQuery1->SQL->Add("insert into aluno (nome, cpf, data_nasc, ender,turma, senha, mae, pai,sexo) ");
	UniQuery1->SQL->Add("values(:nome, :cpf, :data_nasc, :ender,:turma, :senha, :mae, :pai, :sexo)");
	UniQuery1->Params->Items[0]->Text = eNome->Text;
	UniQuery1->Params->Items[1]->Text = eCpf->Text;
	TDateTime dn = StrToDate(eDn->Text);
	UniQuery1->Params->Items[2]->Text = dn.FormatString("yyyy-MM-dd");
	UniQuery1->Params->Items[3]->Text = eEnder->Text;
	UniQuery1->Params->Items[4]->Text = cbTurma->Text;
	UniQuery1->Params->Items[5]->Text = eSenha->Text;
	UniQuery1->Params->Items[6]->Text = eMae->Text;
	UniQuery1->Params->Items[7]->Text = ePai->Text;
	if(rgSexo->ItemIndex == 0){
		UniQuery1->Params->Items[8]->Text = "M";
	}else{
		UniQuery1->Params->Items[8]->Text = "F";
	}
	UniQuery1->Execute();
	ShowMessage("Salvo");

	//Limpa os campos
	eCpf->Text = "";
    eNome->Text = "";
	eDn->Text = "";
	eEnder->Text = "";
	cbTurma->Text = "";
	eSenha->Text = "";
	eMae->Text = "";
	ePai->Text = "";
	rgSexo->ItemIndex = -1;
}
//---------------------------------------------------------------------------

void __fastcall TAdminAluno::bConsultarClick(TObject *Sender)
{
	UniQuery1->Close();
	UniQuery1->SQL->Clear();
	UniQuery1->SQL->Add("select * from aluno where cpf = :cpf");
	UniQuery1->Params->Items[0]->Text = eCpf->Text;
	UniQuery1->Open();
	if(UniQuery1->RecNo==0){
		ShowMessage("Registro não exite.");
		eNome->SetFocus();
	}else{
		eNome->Text = UniQuery1->FieldByName("nome")->AsString;
	}
}
//---------------------------------------------------------------------------



void __fastcall TAdminAluno::PageControl1Change(TObject *Sender)
{
	//Atualiza tabela(TDBGrid) quando abre a aba
	UniQuery2->Close();
	UniQuery2->Open();
}
//---------------------------------------------------------------------------

void __fastcall TAdminAluno::bRemoverClick(TObject *Sender)
{
	UniQuery1->Close();
	UniQuery1->SQL->Clear();
	UniQuery1->SQL->Add("delete from aluno where cpf = :cpf");
	UniQuery1->Params->Items[0]->Text = DBGrid1->Columns->Items[0]->Field->AsString;
	UniQuery1->Execute();
	UniQuery2->Close();
	UniQuery2->Open();
}
//---------------------------------------------------------------------------


void __fastcall TAdminAluno::bEditarClick(TObject *Sender)
{
	UniQuery1->Close();
	UniQuery1->SQL->Clear();
	UniQuery1->SQL->Add("select * from aluno where cpf = :cpf");
	UniQuery1->Params->Items[0]->Text = DBGrid1->Columns->Items[0]->Field->AsString;
	UniQuery1->Open();

	String dn = UniQuery1->FieldByName("data_nasc")->AsString;
	TAdminEditarAluno *AdminEditarAluno = new TAdminEditarAluno(this,
											UniQuery1->FieldByName("cpf")->AsString,
											UniQuery1->FieldByName("nome")->AsString,
											dn,
											UniQuery1->FieldByName("ender")->AsString,
											UniQuery1->FieldByName("turma")->AsString,
											UniQuery1->FieldByName("senha")->AsString,
											UniQuery1->FieldByName("mae")->AsString,
											UniQuery1->FieldByName("pai")->AsString,
											UniQuery1->FieldByName("sexo")->AsString);
	AdminEditarAluno->ShowModal();
	AdminEditarAluno->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAdminAluno::Sair1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------

