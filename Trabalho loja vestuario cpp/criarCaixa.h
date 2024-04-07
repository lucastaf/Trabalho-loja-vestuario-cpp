#include "global.h"
#include "TelaConfirmarTroco.h"
#include <msclr\marshal_cppstd.h>

#pragma once

namespace Trabalholojavestuariocpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class criarCaixa : public System::Windows::Forms::Form
	{
	public:
		criarCaixa(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~criarCaixa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGrid_carrinho;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbox_formapagamento;
	private: System::Windows::Forms::Button^ btn_finalizarCompra;

	private: System::Windows::Forms::ComboBox^ cbox_vendedor;

	private: System::Windows::Forms::Label^ lbl_box;
	private: System::Windows::Forms::Label^ lbl_formapagamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ produto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Preço;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantidade;
	private: System::Windows::Forms::Label^ lbl_descricaoDesconto;
	private: System::Windows::Forms::Label^ lbl_valorDesconto;
	private: System::Windows::Forms::Label^ lbl_bruto;
	private: System::Windows::Forms::Label^ lbl_valorBruto;
	private: System::Windows::Forms::Label^ lbl_desconto;
	private: System::Windows::Forms::Label^ lbl_itens;
	private: System::Windows::Forms::Label^ lbl_quantidadeItens;
	private: System::Windows::Forms::Label^ lbl_descontoAplicado;
	private: System::Windows::Forms::Label^ lbl_valorDescontoAplicado;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGrid_carrinho = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->produto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preço = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbox_formapagamento = (gcnew System::Windows::Forms::ComboBox());
			this->btn_finalizarCompra = (gcnew System::Windows::Forms::Button());
			this->cbox_vendedor = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_box = (gcnew System::Windows::Forms::Label());
			this->lbl_formapagamento = (gcnew System::Windows::Forms::Label());
			this->lbl_descricaoDesconto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorDesconto = (gcnew System::Windows::Forms::Label());
			this->lbl_bruto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorBruto = (gcnew System::Windows::Forms::Label());
			this->lbl_desconto = (gcnew System::Windows::Forms::Label());
			this->lbl_itens = (gcnew System::Windows::Forms::Label());
			this->lbl_quantidadeItens = (gcnew System::Windows::Forms::Label());
			this->lbl_descontoAplicado = (gcnew System::Windows::Forms::Label());
			this->lbl_valorDescontoAplicado = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_carrinho))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGrid_carrinho
			// 
			this->dataGrid_carrinho->AllowUserToAddRows = false;
			this->dataGrid_carrinho->AllowUserToDeleteRows = false;
			this->dataGrid_carrinho->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGrid_carrinho->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_carrinho->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->produto, this->Preço, this->quantidade
			});
			this->dataGrid_carrinho->Enabled = false;
			this->dataGrid_carrinho->GridColor = System::Drawing::SystemColors::Control;
			this->dataGrid_carrinho->Location = System::Drawing::Point(181, 91);
			this->dataGrid_carrinho->Margin = System::Windows::Forms::Padding(2);
			this->dataGrid_carrinho->MultiSelect = false;
			this->dataGrid_carrinho->Name = L"dataGrid_carrinho";
			this->dataGrid_carrinho->ReadOnly = true;
			this->dataGrid_carrinho->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGrid_carrinho->RowHeadersVisible = false;
			this->dataGrid_carrinho->RowHeadersWidth = 4;
			this->dataGrid_carrinho->RowTemplate->Height = 24;
			this->dataGrid_carrinho->Size = System::Drawing::Size(404, 251);
			this->dataGrid_carrinho->TabIndex = 0;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Código";
			this->codigo->MinimumWidth = 6;
			this->codigo->Name = L"codigo";
			this->codigo->ReadOnly = true;
			this->codigo->Width = 60;
			// 
			// produto
			// 
			this->produto->HeaderText = L"Produto";
			this->produto->MinimumWidth = 6;
			this->produto->Name = L"produto";
			this->produto->ReadOnly = true;
			this->produto->Width = 150;
			// 
			// Preço
			// 
			this->Preço->HeaderText = L"Valor";
			this->Preço->MinimumWidth = 6;
			this->Preço->Name = L"Preço";
			this->Preço->ReadOnly = true;
			this->Preço->Width = 60;
			// 
			// quantidade
			// 
			this->quantidade->HeaderText = L"Quantidade";
			this->quantidade->MinimumWidth = 6;
			this->quantidade->Name = L"quantidade";
			this->quantidade->ReadOnly = true;
			this->quantidade->Width = 80;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(316, 34);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Caixa Aberto";
			// 
			// cbox_formapagamento
			// 
			this->cbox_formapagamento->FormattingEnabled = true;
			this->cbox_formapagamento->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"PIX", L"Cartão de Crédito", L"Cartão de Débito",
					L"Dinheiro"
			});
			this->cbox_formapagamento->Location = System::Drawing::Point(9, 156);
			this->cbox_formapagamento->Margin = System::Windows::Forms::Padding(2);
			this->cbox_formapagamento->Name = L"cbox_formapagamento";
			this->cbox_formapagamento->Size = System::Drawing::Size(121, 21);
			this->cbox_formapagamento->TabIndex = 2;
			// 
			// btn_finalizarCompra
			// 
			this->btn_finalizarCompra->Location = System::Drawing::Point(611, 417);
			this->btn_finalizarCompra->Margin = System::Windows::Forms::Padding(2);
			this->btn_finalizarCompra->Name = L"btn_finalizarCompra";
			this->btn_finalizarCompra->Size = System::Drawing::Size(120, 29);
			this->btn_finalizarCompra->TabIndex = 3;
			this->btn_finalizarCompra->Text = L"Finalizar Compra";
			this->btn_finalizarCompra->UseVisualStyleBackColor = true;
			this->btn_finalizarCompra->Click += gcnew System::EventHandler(this, &criarCaixa::btn_finalizarCompra_Click);
			// 
			// cbox_vendedor
			// 
			this->cbox_vendedor->FormattingEnabled = true;
			this->cbox_vendedor->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Joana", L"Thiago", L"Peterson", L"Gabriel Costa",
					L"Gabriel Silva", L"Marielly", L"Roberta"
			});
			this->cbox_vendedor->Location = System::Drawing::Point(9, 107);
			this->cbox_vendedor->Name = L"cbox_vendedor";
			this->cbox_vendedor->Size = System::Drawing::Size(121, 21);
			this->cbox_vendedor->TabIndex = 4;
			// 
			// lbl_box
			// 
			this->lbl_box->AutoSize = true;
			this->lbl_box->Location = System::Drawing::Point(9, 91);
			this->lbl_box->Name = L"lbl_box";
			this->lbl_box->Size = System::Drawing::Size(53, 13);
			this->lbl_box->TabIndex = 5;
			this->lbl_box->Text = L"Vendedor";
			// 
			// lbl_formapagamento
			// 
			this->lbl_formapagamento->AutoSize = true;
			this->lbl_formapagamento->Location = System::Drawing::Point(9, 141);
			this->lbl_formapagamento->Name = L"lbl_formapagamento";
			this->lbl_formapagamento->Size = System::Drawing::Size(108, 13);
			this->lbl_formapagamento->TabIndex = 6;
			this->lbl_formapagamento->Text = L"Forma de Pagamento";
			// 
			// lbl_descricaoDesconto
			// 
			this->lbl_descricaoDesconto->AutoSize = true;
			this->lbl_descricaoDesconto->Location = System::Drawing::Point(9, 307);
			this->lbl_descricaoDesconto->Name = L"lbl_descricaoDesconto";
			this->lbl_descricaoDesconto->Size = System::Drawing::Size(164, 130);
			this->lbl_descricaoDesconto->TabIndex = 7;
			this->lbl_descricaoDesconto->Text = L"Descontos: \r\n\r\nR$50,00 - 5%\r\nR$100,00 - 10%\r\n\r\n3 peças - 10%\r\n10 peças - 30%\r\n\r\nO"
				L"BS: o desconto de preço é\r\nsomado com desconto de peças.";
			// 
			// lbl_valorDesconto
			// 
			this->lbl_valorDesconto->AutoSize = true;
			this->lbl_valorDesconto->Location = System::Drawing::Point(611, 342);
			this->lbl_valorDesconto->Name = L"lbl_valorDesconto";
			this->lbl_valorDesconto->Size = System::Drawing::Size(45, 13);
			this->lbl_valorDesconto->TabIndex = 8;
			this->lbl_valorDesconto->Text = L"R$ 0,00";
			// 
			// lbl_bruto
			// 
			this->lbl_bruto->AutoSize = true;
			this->lbl_bruto->Location = System::Drawing::Point(611, 104);
			this->lbl_bruto->Name = L"lbl_bruto";
			this->lbl_bruto->Size = System::Drawing::Size(59, 13);
			this->lbl_bruto->TabIndex = 9;
			this->lbl_bruto->Text = L"Valor Bruto";
			// 
			// lbl_valorBruto
			// 
			this->lbl_valorBruto->AutoSize = true;
			this->lbl_valorBruto->Location = System::Drawing::Point(611, 120);
			this->lbl_valorBruto->Name = L"lbl_valorBruto";
			this->lbl_valorBruto->Size = System::Drawing::Size(45, 13);
			this->lbl_valorBruto->TabIndex = 10;
			this->lbl_valorBruto->Text = L"R$ 0,00";
			// 
			// lbl_desconto
			// 
			this->lbl_desconto->AutoSize = true;
			this->lbl_desconto->Location = System::Drawing::Point(611, 329);
			this->lbl_desconto->Name = L"lbl_desconto";
			this->lbl_desconto->Size = System::Drawing::Size(103, 13);
			this->lbl_desconto->TabIndex = 11;
			this->lbl_desconto->Text = L"Valor com Desconto";
			// 
			// lbl_itens
			// 
			this->lbl_itens->AutoSize = true;
			this->lbl_itens->Location = System::Drawing::Point(611, 151);
			this->lbl_itens->Name = L"lbl_itens";
			this->lbl_itens->Size = System::Drawing::Size(102, 13);
			this->lbl_itens->TabIndex = 12;
			this->lbl_itens->Text = L"Quantidade de itens";
			// 
			// lbl_quantidadeItens
			// 
			this->lbl_quantidadeItens->AutoSize = true;
			this->lbl_quantidadeItens->Location = System::Drawing::Point(612, 164);
			this->lbl_quantidadeItens->Name = L"lbl_quantidadeItens";
			this->lbl_quantidadeItens->Size = System::Drawing::Size(13, 13);
			this->lbl_quantidadeItens->TabIndex = 13;
			this->lbl_quantidadeItens->Text = L"0";
			// 
			// lbl_descontoAplicado
			// 
			this->lbl_descontoAplicado->AutoSize = true;
			this->lbl_descontoAplicado->Location = System::Drawing::Point(611, 187);
			this->lbl_descontoAplicado->Name = L"lbl_descontoAplicado";
			this->lbl_descontoAplicado->Size = System::Drawing::Size(100, 13);
			this->lbl_descontoAplicado->TabIndex = 14;
			this->lbl_descontoAplicado->Text = L"Desconto Aplicado:";
			// 
			// lbl_valorDescontoAplicado
			// 
			this->lbl_valorDescontoAplicado->AutoSize = true;
			this->lbl_valorDescontoAplicado->Location = System::Drawing::Point(611, 200);
			this->lbl_valorDescontoAplicado->Name = L"lbl_valorDescontoAplicado";
			this->lbl_valorDescontoAplicado->Size = System::Drawing::Size(21, 13);
			this->lbl_valorDescontoAplicado->TabIndex = 15;
			this->lbl_valorDescontoAplicado->Text = L"0%";
			// 
			// criarCaixa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 457);
			this->Controls->Add(this->lbl_valorDescontoAplicado);
			this->Controls->Add(this->lbl_descontoAplicado);
			this->Controls->Add(this->lbl_quantidadeItens);
			this->Controls->Add(this->lbl_itens);
			this->Controls->Add(this->lbl_desconto);
			this->Controls->Add(this->lbl_valorBruto);
			this->Controls->Add(this->lbl_bruto);
			this->Controls->Add(this->lbl_valorDesconto);
			this->Controls->Add(this->lbl_descricaoDesconto);
			this->Controls->Add(this->lbl_formapagamento);
			this->Controls->Add(this->lbl_box);
			this->Controls->Add(this->cbox_vendedor);
			this->Controls->Add(this->btn_finalizarCompra);
			this->Controls->Add(this->cbox_formapagamento);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGrid_carrinho);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"criarCaixa";
			this->Text = L"Caixa";
			this->Load += gcnew System::EventHandler(this, &criarCaixa::criarCaixa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_carrinho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void atualizarLista() {
		this->dataGrid_carrinho->Rows->Clear();
		core::No<core::produto>* aux = Global::carrinho.getComeco();
		for (; aux != nullptr; aux = aux->eloF) {
			core::produto novoProduto = aux->info;
			System::String^ dataString = novoProduto.codigo + "," + gcnew System::String(novoProduto.nome.c_str()) + "," + novoProduto.preco + "," + novoProduto.estoque;
			array<System::String^>^ dataArray = dataString->Split(',');

			this->dataGrid_carrinho->Rows->Add(dataArray);

		};
	}
	private: System::Void criarCaixa_Load(System::Object^ sender, System::EventArgs^ e) {
		Global::confirmEvent objetoEvento;
		objetoEvento.confirmarCompraEvent += gcnew Global::confirmEvent::confirmarCompraEventHandler(this, &criarCaixa::confirmarCompra);

		lbl_valorBruto->Text = "R$ " + Global::carrinho.calcularValorTotal() + ",00";
		lbl_valorDesconto->Text = "R$ " + Global::carrinho.calcularValorComDesconto();
		lbl_quantidadeItens->Text = "" + Global::carrinho.calcularEstoque();
		lbl_valorDescontoAplicado->Text = Global::carrinho.calcularDesconto() + "%";
		this->atualizarLista();
	}
	private: System::Void btn_finalizarCompra_Click(System::Object^ sender, System::EventArgs^ e) {
		TelaConfirmarTroco^ novaTela = gcnew TelaConfirmarTroco();
		novaTela->ShowDialog();

	}
		System::Void confirmarCompra() {
			core::Venda novaVenda;
			novaVenda.horario = std::time(NULL);
			novaVenda.valor = Global::carrinho.calcularValorTotal();
			novaVenda.valorCobrado = Global::carrinho.calcularValorComDesconto();
			novaVenda.quantProdutos = Global::carrinho.calcularEstoque();
			novaVenda.vendedor = msclr::interop::marshal_as<std::string>(this->cbox_vendedor->Text);
			novaVenda.formaDePagamento = msclr::interop::marshal_as<std::string>(this->cbox_formapagamento->Text);
			Global::vendas.addVenda(novaVenda);
		}
	};
}
