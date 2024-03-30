#include "telaVendas.h"
using namespace System;
using namespace System::Windows::Forms;


void onLoad() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Trabalholojavestuariocpp::telaVendas frm;
    Application::Run(% frm);
}
