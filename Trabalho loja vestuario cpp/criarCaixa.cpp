#include "criarCaixa.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Trabalholojavestuariocpp::criarCaixa form;
	Application::Run(% form);
}