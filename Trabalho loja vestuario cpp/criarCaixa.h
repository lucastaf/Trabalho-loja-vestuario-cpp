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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ btn_formapagamento;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ produto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantidade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valor;















	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_formapagamento = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->produto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->produto, this->quantidade, this->valor
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(12, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(452, 297);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(414, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Caixa Aberto";
			// 
			// btn_formapagamento
			// 
			this->btn_formapagamento->FormattingEnabled = true;
			this->btn_formapagamento->Location = System::Drawing::Point(636, 513);
			this->btn_formapagamento->Name = L"btn_formapagamento";
			this->btn_formapagamento->Size = System::Drawing::Size(156, 24);
			this->btn_formapagamento->TabIndex = 2;
			this->btn_formapagamento->SelectedIndexChanged += gcnew System::EventHandler(this, &criarCaixa::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(815, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Finalizar Compra";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Código";
			this->codigo->MinimumWidth = 6;
			this->codigo->Name = L"codigo";
			this->codigo->Width = 60;
			// 
			// produto
			// 
			this->produto->HeaderText = L"Produto";
			this->produto->MinimumWidth = 6;
			this->produto->Name = L"produto";
			this->produto->Width = 150;
			// 
			// quantidade
			// 
			this->quantidade->HeaderText = L"Quantidade";
			this->quantidade->MinimumWidth = 6;
			this->quantidade->Name = L"quantidade";
			this->quantidade->Width = 80;
			// 
			// valor
			// 
			this->valor->HeaderText = L"Valor";
			this->valor->MinimumWidth = 6;
			this->valor->Name = L"valor";
			this->valor->Width = 60;
			// 
			// criarCaixa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 562);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_formapagamento);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"criarCaixa";
			this->Text = L"Caixa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
