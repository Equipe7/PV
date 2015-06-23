//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("fAdministradorInicial.cpp", AdminInicial);
USEFORM("fAdminAluno.cpp", AdminAluno);
USEFORM("fLoginAdministrador.cpp", LoginAdministrador);
USEFORM("fInicial.cpp", Inicial);
USEFORM("fAdminEditarAluno.cpp", AdminEditarAluno);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("TabletDark");
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
