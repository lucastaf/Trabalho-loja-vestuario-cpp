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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidadeProd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorCobrado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->formaDePagamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vendedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(606, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &telaVendas::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->horario,
					this->quantidadeProd, this->valorTotal, this->valorCobrado, this->formaDePagamento, this->vendedor
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 82);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(584, 234);
			this->dataGridView1->TabIndex = 1;
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
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"telaVendas";
			this->Text = L"telaVendas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::cout << &Global::vendas << "\n";
	}
	};
}
