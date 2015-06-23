//---------------------------------------------------------------------------

#ifndef fAdminEditarAlunoH
#define fAdminEditarAlunoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MySQLUniProvider.hpp"
#include "Uni.hpp"
#include "UniProvider.hpp"
#include <Data.DB.hpp>
//---------------------------------------------------------------------------
class TAdminEditarAluno : public TForm
{
__published:	// IDE-managed Components
	TLabel *lTurma;
	TLabel *lSenha;
	TLabel *lNome;
	TLabel *lEnder;
	TLabel *lDn;
	TLabel *lCpf;
	TLabel *lMae;
	TLabel *lPai;
	TRadioGroup *rgSexo;
	TEdit *eSenha;
	TEdit *eNome;
	TEdit *eEnder;
	TMaskEdit *eDn;
	TEdit *eCpf;
	TComboBox *cbTurma;
	TButton *bSalvar;
	TEdit *eMae;
	TEdit *ePai;
	TUniConnection *UniConnection1;
	TUniQuery *UniQuery1;
	TMySQLUniProvider *MySQLUniProvider1;
	void __fastcall bSalvarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminEditarAluno::TAdminEditarAluno(TComponent* Owner,
			String cpf,String nome, String dn, String ender, String turma,
			String senha, String mae, String pai, String sexo);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminEditarAluno *AdminEditarAluno;
//---------------------------------------------------------------------------
#endif
