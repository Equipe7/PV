//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("fLoginAluno.cpp", LoginAluno);
USEFORM("fLoginAdm.cpp", LoginAdm);
USEFORM("fSobre.cpp", Sobre);
USEFORM("fInicial.cpp", Inicial);
USEFORM("fAdmInical.cpp", AdmInicial);
USEFORM("fCadastroProfessor.cpp", CadastroProf);
USEFORM("fCadastroAluno.cpp", CadastroAluno);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("TabletDark");
		Application->Title = "Culver Creek";
		Application->CreateForm(__classid(TInicial), &Inicial);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
