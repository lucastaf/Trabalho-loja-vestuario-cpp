#include "editarCarrinho.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Trabalholojavestuariocpp::editarCarrinho form;
	Application::Run(% form);
}