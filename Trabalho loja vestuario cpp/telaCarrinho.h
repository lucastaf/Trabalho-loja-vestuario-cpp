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
	public ref class editarCarrinho : public System::Windows::Forms::Form
	{
	public:
		editarCarrinho(void)
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
		~editarCarrinho()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ btn_finalizar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Preco;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estoque;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estoque = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_finalizar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(697, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Meu Carrinho";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Nome, this->Preco, this->Estoque
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(11, 86);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(456, 249);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editarCarrinho::dataGridView1_CellContentClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 80;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Produto";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 150;
			// 
			// Preco
			// 
			this->Preco->HeaderText = L"Preço";
			this->Preco->Name = L"Preco";
			this->Preco->ReadOnly = true;
			this->Preco->Width = 80;
			// 
			// Estoque
			// 
			this->Estoque->HeaderText = L"Estoque";
			this->Estoque->Name = L"Estoque";
			this->Estoque->ReadOnly = true;
			this->Estoque->Width = 80;
			// 
			// btn_finalizar
			// 
			this->btn_finalizar->Location = System::Drawing::Point(656, 399);
			this->btn_finalizar->Margin = System::Windows::Forms::Padding(2);
			this->btn_finalizar->Name = L"btn_finalizar";
			this->btn_finalizar->Size = System::Drawing::Size(134, 23);
			this->btn_finalizar->TabIndex = 2;
			this->btn_finalizar->Text = L"Finalizar Pedido";
			this->btn_finalizar->UseVisualStyleBackColor = true;
			// 
			// editarCarrinho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 441);
			this->Controls->Add(this->btn_finalizar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"editarCarrinho";
			this->Text = L"Carrinho";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
