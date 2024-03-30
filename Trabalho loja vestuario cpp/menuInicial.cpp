#include "menuInicial.h"
#include "Carrinho.cpp"

using namespace System;
using namespace System::Windows::Forms;

namespace Global {
    ListaProdutos estoque;
    Carrinho carrinho;
    ListaVendas vendas;
}

int main() {
    Global::estoque.readFile();
    Global::vendas.readFile();
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Trabalholojavestuariocpp::menuInicial frm;
    Application::Run(% frm);
}
