#include "menuInicial.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Trabalholojavestuariocpp::menuInicial frm;
    Application::Run(% frm);
}
