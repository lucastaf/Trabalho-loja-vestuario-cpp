#include "global.h"
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

	private: System::Windows::Forms::Button^ button1;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGrid_carrinho = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->produto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preço = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbox_formapagamento = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbox_vendedor = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_box = (gcnew System::Windows::Forms::Label());
			this->lbl_formapagamento = (gcnew System::Windows::Forms::Label());
			this->lbl_descricaoDesconto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorDesconto = (gcnew System::Windows::Forms::Label());
			this->lbl_bruto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorBruto = (gcnew System::Windows::Forms::Label());
			this->lbl_desconto = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_carrinho))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGrid_carrinho
			// 
			this->dataGrid_carrinho->AllowUserToAddRows = false;
			this->dataGrid_carrinho->AllowUserToDeleteRows = false;
			this->dataGrid_carrinho->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGrid_carrinho->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGrid_carrinho->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_carrinho->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->produto, this->Preço, this->quantidade
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid_carrinho->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid_carrinho->GridColor = System::Drawing::SystemColors::Control;
			this->dataGrid_carrinho->Location = System::Drawing::Point(177, 91);
			this->dataGrid_carrinho->Margin = System::Windows::Forms::Padding(2);
			this->dataGrid_carrinho->Name = L"dataGrid_carrinho";
			this->dataGrid_carrinho->ReadOnly = true;
			this->dataGrid_carrinho->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
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
			this->label1->Location = System::Drawing::Point(310, 36);
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
			this->cbox_formapagamento->Location = System::Drawing::Point(25, 116);
			this->cbox_formapagamento->Margin = System::Windows::Forms::Padding(2);
			this->cbox_formapagamento->Name = L"cbox_formapagamento";
			this->cbox_formapagamento->Size = System::Drawing::Size(121, 21);
			this->cbox_formapagamento->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(611, 417);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Finalizar Compra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &criarCaixa::button1_Click);
			// 
			// cbox_vendedor
			// 
			this->cbox_vendedor->FormattingEnabled = true;
			this->cbox_vendedor->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Joana", L"Thiago", L"Peterson", L"Gabriel Costa",
					L"Gabriel Silva", L"Marielly", L"Roberta"
			});
			this->cbox_vendedor->Location = System::Drawing::Point(25, 36);
			this->cbox_vendedor->Name = L"cbox_vendedor";
			this->cbox_vendedor->Size = System::Drawing::Size(121, 21);
			this->cbox_vendedor->TabIndex = 4;
			// 
			// lbl_box
			// 
			this->lbl_box->AutoSize = true;
			this->lbl_box->Location = System::Drawing::Point(25, 20);
			this->lbl_box->Name = L"lbl_box";
			this->lbl_box->Size = System::Drawing::Size(53, 13);
			this->lbl_box->TabIndex = 5;
			this->lbl_box->Text = L"Vendedor";
			// 
			// lbl_formapagamento
			// 
			this->lbl_formapagamento->AutoSize = true;
			this->lbl_formapagamento->Location = System::Drawing::Point(25, 101);
			this->lbl_formapagamento->Name = L"lbl_formapagamento";
			this->lbl_formapagamento->Size = System::Drawing::Size(108, 13);
			this->lbl_formapagamento->TabIndex = 6;
			this->lbl_formapagamento->Text = L"Forma de Pagamento";
			// 
			// lbl_descricaoDesconto
			// 
			this->lbl_descricaoDesconto->AutoSize = true;
			this->lbl_descricaoDesconto->Location = System::Drawing::Point(8, 212);
			this->lbl_descricaoDesconto->Name = L"lbl_descricaoDesconto";
			this->lbl_descricaoDesconto->Size = System::Drawing::Size(164, 130);
			this->lbl_descricaoDesconto->TabIndex = 7;
			this->lbl_descricaoDesconto->Text = L"Descontos: \r\n\r\nR$50,00 - 5%\r\nR$100,00 - 10%\r\n\r\n3 peças - 10%\r\n10 peças - 30%\r\n\r\nO"
				L"BS: o desconto de preço é\r\nsomado com desconto de peças.";
			// 
			// lbl_valorDesconto
			// 
			this->lbl_valorDesconto->AutoSize = true;
			this->lbl_valorDesconto->Location = System::Drawing::Point(611, 225);
			this->lbl_valorDesconto->Name = L"lbl_valorDesconto";
			this->lbl_valorDesconto->Size = System::Drawing::Size(45, 13);
			this->lbl_valorDesconto->TabIndex = 8;
			this->lbl_valorDesconto->Text = L"R$ 0,00";
			// 
			// lbl_bruto
			// 
			this->lbl_bruto->AutoSize = true;
			this->lbl_bruto->Location = System::Drawing::Point(611, 91);
			this->lbl_bruto->Name = L"lbl_bruto";
			this->lbl_bruto->Size = System::Drawing::Size(59, 13);
			this->lbl_bruto->TabIndex = 9;
			this->lbl_bruto->Text = L"Valor Bruto";
			// 
			// lbl_valorBruto
			// 
			this->lbl_valorBruto->AutoSize = true;
			this->lbl_valorBruto->Location = System::Drawing::Point(611, 104);
			this->lbl_valorBruto->Name = L"lbl_valorBruto";
			this->lbl_valorBruto->Size = System::Drawing::Size(45, 13);
			this->lbl_valorBruto->TabIndex = 10;
			this->lbl_valorBruto->Text = L"R$ 0,00";
			// 
			// lbl_desconto
			// 
			this->lbl_desconto->AutoSize = true;
			this->lbl_desconto->Location = System::Drawing::Point(611, 212);
			this->lbl_desconto->Name = L"lbl_desconto";
			this->lbl_desconto->Size = System::Drawing::Size(103, 13);
			this->lbl_desconto->TabIndex = 11;
			this->lbl_desconto->Text = L"Valor com Desconto";
			// 
			// criarCaixa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 457);
			this->Controls->Add(this->lbl_desconto);
			this->Controls->Add(this->lbl_valorBruto);
			this->Controls->Add(this->lbl_bruto);
			this->Controls->Add(this->lbl_valorDesconto);
			this->Controls->Add(this->lbl_descricaoDesconto);
			this->Controls->Add(this->lbl_formapagamento);
			this->Controls->Add(this->lbl_box);
			this->Controls->Add(this->cbox_vendedor);
			this->Controls->Add(this->button1);
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
		lbl_valorBruto->Text = "R$ " + Global::carrinho.calcularValorTotal() + ",00";
		lbl_valorDesconto->Text = "R$ " + Global::carrinho.calcularValorComDesconto();
		this->atualizarLista();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
