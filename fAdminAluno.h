//---------------------------------------------------------------------------

#ifndef fAdminAlunoH
#define fAdminAlunoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "DBAccess.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include "MySQLUniProvider.hpp"
#include "UniProvider.hpp"
#include "MemDS.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TAdminAluno : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *rgSexo;
	TUniConnection *UniConnection1;
	TUniQuery *UniQuery1;
	TPageControl *PageControl1;
	TTabSheet *Matricular;
	TButton *bConsultar;
	TButton *bSalvar;
	TComboBox *cbTurma;
	TEdit *eCpf;
	TMaskEdit *eDn;
	TEdit *eEnder;
	TEdit *eNome;
	TEdit *eSenha;
	TLabel *lCpf;
	TLabel *lDn;
	TLabel *lEnder;
	TLabel *lNome;
	TLabel *lSenha;
	TLabel *lTurma;
	TMySQLUniProvider *MySQLUniProvider1;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Sair1;
	TTabSheet *Matriculados;
	TDBGrid *DBGrid1;
	TUniQuery *UniQuery2;
	TDataSource *DataSource1;
	TButton *bEditar;
	TButton *bRemover;
	TLabel *lMae;
	TLabel *lPai;
	TEdit *eMae;
	TEdit *ePai;
	void __fastcall bSalvarClick(TObject *Sender);
	void __fastcall bConsultarClick(TObject *Sender);
	void __fastcall PageControl1Change(TObject *Sender);
	void __fastcall bRemoverClick(TObject *Sender);
	void __fastcall bEditarClick(TObject *Sender);
	void __fastcall Sair1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TAdminAluno(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminAluno *AdminAluno;
//---------------------------------------------------------------------------
#endif
