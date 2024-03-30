#pragma once
#include "global.h"

namespace Trabalholojavestuariocpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaVendas
	/// </summary>
	public ref class telaVendas : public System::Windows::Forms::Form
	{
	public:
		telaVendas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~telaVendas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGrid_Vendas;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ horario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantidadeProd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valorTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valorCobrado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ formaDePagamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vendedor;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGrid_Vendas = (gcnew System::Windows::Forms::DataGridView());
			this->horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidadeProd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorCobrado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->formaDePagamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vendedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Vendas))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(602, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &telaVendas::button1_Click);
			// 
			// dataGrid_Vendas
			// 
			this->dataGrid_Vendas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_Vendas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->horario,
					this->quantidadeProd, this->valorTotal, this->valorCobrado, this->formaDePagamento, this->vendedor
			});
			this->dataGrid_Vendas->Location = System::Drawing::Point(12, 53);
			this->dataGrid_Vendas->Name = L"dataGrid_Vendas";
			this->dataGrid_Vendas->Size = System::Drawing::Size(584, 297);
			this->dataGrid_Vendas->TabIndex = 1;
			// 
			// horario
			// 
			this->horario->HeaderText = L"Horario";
			this->horario->Name = L"horario";
			this->horario->ReadOnly = true;
			// 
			// quantidadeProd
			// 
			this->quantidadeProd->HeaderText = L"Quantidade";
			this->quantidadeProd->Name = L"quantidadeProd";
			this->quantidadeProd->ReadOnly = true;
			this->quantidadeProd->Width = 80;
			// 
			// valorTotal
			// 
			this->valorTotal->HeaderText = L"Valor Bruto";
			this->valorTotal->Name = L"valorTotal";
			this->valorTotal->ReadOnly = true;
			this->valorTotal->Width = 80;
			// 
			// valorCobrado
			// 
			this->valorCobrado->HeaderText = L"Valor liquído";
			this->valorCobrado->Name = L"valorCobrado";
			this->valorCobrado->ReadOnly = true;
			this->valorCobrado->Width = 80;
			// 
			// formaDePagamento
			// 
			this->formaDePagamento->HeaderText = L"Forma de pagamento";
			this->formaDePagamento->Name = L"formaDePagamento";
			this->formaDePagamento->ReadOnly = true;
			// 
			// vendedor
			// 
			this->vendedor->HeaderText = L"Vendedor";
			this->vendedor->Name = L"vendedor";
			this->vendedor->ReadOnly = true;
			// 
			// telaVendas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 362);
			this->Controls->Add(this->dataGrid_Vendas);
			this->Controls->Add(this->button1);
			this->Name = L"telaVendas";
			this->Text = L"telaVendas";
			this->Load += gcnew System::EventHandler(this, &telaVendas::telaVendas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Vendas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void telaVendas_Load(System::Object^ sender, System::EventArgs^ e) {
		core::No<core::Venda>* aux = Global::vendas.getComeco();
		for (; aux != nullptr; aux = aux->eloF) {
			core::Venda novaVenda = aux->info;
			System::String^ dataString = gcnew System::String(novaVenda.formatarData().c_str()) + "," + novaVenda.quantProdutos + ", R$" + novaVenda.valor + ", R$" + novaVenda.valorCobrado + "," + gcnew System::String(novaVenda.formaDePagamento.c_str()) + "," + gcnew System::String(novaVenda.vendedor.c_str());
			array<System::String^>^ dataArray = dataString->Split(',');
			this->dataGrid_Vendas->Rows->Add(dataArray);

		};
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the first selected row
	if (this->dataGrid_Vendas->SelectedRows->Count <= 0)
	{
		// Safe to access the first selected row
		return;
		// Your code to work with selectedRow
	}

	DataGridViewRow^ selectedRow = this->dataGrid_Vendas->SelectedRows[0];

	// Now you can access the data in the selected row
	// For example, to get the value of the first cell in the selected row
	String^ cellValue = selectedRow->Cells[0]->Value->ToString();

	// Output the value to the console
	Console::WriteLine("Selected row value: " + cellValue);
}
};
}
