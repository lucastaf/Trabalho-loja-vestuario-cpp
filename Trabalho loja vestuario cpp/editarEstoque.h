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
	public ref class editarEstoque : public System::Windows::Forms::Form
	{
	public:
		editarEstoque(void)
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
		~editarEstoque()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dtgrid_test;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Itens;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;















	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtgrid_test = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Itens = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgrid_test))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(418, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Controle de Estoque";
			this->label1->Click += gcnew System::EventHandler(this, &editarEstoque::label1_Click_1);
			// 
			// dtgrid_test
			// 
			this->dtgrid_test->AllowUserToOrderColumns = true;
			this->dtgrid_test->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dtgrid_test->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dtgrid_test->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dtgrid_test->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgrid_test->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column3,
					this->Itens, this->Column2, this->Column1
			});
			this->dtgrid_test->GridColor = System::Drawing::SystemColors::Control;
			this->dtgrid_test->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtgrid_test->Location = System::Drawing::Point(256, 127);
			this->dtgrid_test->Name = L"dtgrid_test";
			this->dtgrid_test->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dtgrid_test->RowHeadersWidth = 51;
			this->dtgrid_test->RowTemplate->Height = 24;
			this->dtgrid_test->Size = System::Drawing::Size(556, 335);
			this->dtgrid_test->TabIndex = 2;
			this->dtgrid_test->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editarEstoque::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(915, 519);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Código";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Itens
			// 
			this->Itens->FillWeight = 180;
			this->Itens->HeaderText = L"Produtos";
			this->Itens->MinimumWidth = 12;
			this->Itens->Name = L"Itens";
			this->Itens->Width = 130;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Quantidade";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Valor";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// editarEstoque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1096, 575);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dtgrid_test);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"editarEstoque";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"editarEstoque";
			this->TransparencyKey = System::Drawing::Color::DimGray;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgrid_test))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
