#include "menuInicial.h"
#include "global.h"


	using namespace System;
	using namespace System::Windows::Forms;

	int main() {
		Global::produtos.readFile();
		Global::vendas.readFile();
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Trabalholojavestuariocpp::menuInicial frm;
		Application::Run(% frm);
		return 0;
	}