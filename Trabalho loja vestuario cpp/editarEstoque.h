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
	private: System::Windows::Forms::Label^ lbl_controleEstoque;
	private: System::Windows::Forms::DataGridView^ dataGrid_estoque;
	private: System::Windows::Forms::TextBox^ txt_codigo;
	private: System::Windows::Forms::TextBox^ txt_produto;
	private: System::Windows::Forms::TextBox^ txt_preco;
	private: System::Windows::Forms::TextBox^ txt_estoque;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lbl_codigo;
	private: System::Windows::Forms::Label^ lbl_produtos;
	private: System::Windows::Forms::Label^ lbl_preco;
	private: System::Windows::Forms::Label^ lbl_estoque;
	private: System::Windows::Forms::Button^ btn_aumentarEstoque;
	private: System::Windows::Forms::Button^ btn_diminuirEstoque;
	private: System::Windows::Forms::Button^ btn_adicionarProduto;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Itens;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

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
			this->lbl_controleEstoque = (gcnew System::Windows::Forms::Label());
			this->dataGrid_estoque = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Itens = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->txt_produto = (gcnew System::Windows::Forms::TextBox());
			this->txt_preco = (gcnew System::Windows::Forms::TextBox());
			this->txt_estoque = (gcnew System::Windows::Forms::TextBox());
			this->lbl_codigo = (gcnew System::Windows::Forms::Label());
			this->lbl_produtos = (gcnew System::Windows::Forms::Label());
			this->lbl_preco = (gcnew System::Windows::Forms::Label());
			this->lbl_estoque = (gcnew System::Windows::Forms::Label());
			this->btn_aumentarEstoque = (gcnew System::Windows::Forms::Button());
			this->btn_diminuirEstoque = (gcnew System::Windows::Forms::Button());
			this->btn_adicionarProduto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_estoque))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_controleEstoque
			// 
			this->lbl_controleEstoque->AutoSize = true;
			this->lbl_controleEstoque->BackColor = System::Drawing::SystemColors::Control;
			this->lbl_controleEstoque->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_controleEstoque->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_controleEstoque->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_controleEstoque->Location = System::Drawing::Point(236, 59);
			this->lbl_controleEstoque->Name = L"lbl_controleEstoque";
			this->lbl_controleEstoque->Size = System::Drawing::Size(239, 34);
			this->lbl_controleEstoque->TabIndex = 1;
			this->lbl_controleEstoque->Text = L"Controle de Estoque";
			// 
			// dataGrid_estoque
			// 
			this->dataGrid_estoque->AllowUserToAddRows = false;
			this->dataGrid_estoque->AllowUserToDeleteRows = false;
			this->dataGrid_estoque->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGrid_estoque->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataGrid_estoque->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGrid_estoque->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_estoque->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column3,
					this->Itens, this->Column1, this->Column2
			});
			this->dataGrid_estoque->GridColor = System::Drawing::SystemColors::Control;
			this->dataGrid_estoque->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGrid_estoque->Location = System::Drawing::Point(77, 125);
			this->dataGrid_estoque->Name = L"dataGrid_estoque";
			this->dataGrid_estoque->ReadOnly = true;
			this->dataGrid_estoque->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGrid_estoque->RowHeadersWidth = 51;
			this->dataGrid_estoque->RowTemplate->Height = 24;
			this->dataGrid_estoque->Size = System::Drawing::Size(556, 335);
			this->dataGrid_estoque->TabIndex = 2;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Código";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Itens
			// 
			this->Itens->FillWeight = 180;
			this->Itens->HeaderText = L"Produtos";
			this->Itens->MinimumWidth = 12;
			this->Itens->Name = L"Itens";
			this->Itens->ReadOnly = true;
			this->Itens->Width = 130;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Preço";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Estoque";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// txt_codigo
			// 
			this->txt_codigo->Location = System::Drawing::Point(672, 96);
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(100, 22);
			this->txt_codigo->TabIndex = 3;
			// 
			// txt_produto
			// 
			this->txt_produto->Location = System::Drawing::Point(672, 189);
			this->txt_produto->Name = L"txt_produto";
			this->txt_produto->Size = System::Drawing::Size(100, 22);
			this->txt_produto->TabIndex = 4;
			// 
			// txt_preco
			// 
			this->txt_preco->Location = System::Drawing::Point(672, 280);
			this->txt_preco->Name = L"txt_preco";
			this->txt_preco->Size = System::Drawing::Size(100, 22);
			this->txt_preco->TabIndex = 5;
			// 
			// txt_estoque
			// 
			this->txt_estoque->Location = System::Drawing::Point(672, 373);
			this->txt_estoque->Name = L"txt_estoque";
			this->txt_estoque->Size = System::Drawing::Size(100, 22);
			this->txt_estoque->TabIndex = 6;
			// 
			// lbl_codigo
			// 
			this->lbl_codigo->AutoSize = true;
			this->lbl_codigo->Location = System::Drawing::Point(672, 77);
			this->lbl_codigo->Name = L"lbl_codigo";
			this->lbl_codigo->Size = System::Drawing::Size(51, 16);
			this->lbl_codigo->TabIndex = 7;
			this->lbl_codigo->Text = L"Código";
			// 
			// lbl_produtos
			// 
			this->lbl_produtos->AutoSize = true;
			this->lbl_produtos->Location = System::Drawing::Point(672, 170);
			this->lbl_produtos->Name = L"lbl_produtos";
			this->lbl_produtos->Size = System::Drawing::Size(61, 16);
			this->lbl_produtos->TabIndex = 8;
			this->lbl_produtos->Text = L"Produtos";
			// 
			// lbl_preco
			// 
			this->lbl_preco->AutoSize = true;
			this->lbl_preco->Location = System::Drawing::Point(672, 261);
			this->lbl_preco->Name = L"lbl_preco";
			this->lbl_preco->Size = System::Drawing::Size(43, 16);
			this->lbl_preco->TabIndex = 9;
			this->lbl_preco->Text = L"Preço";
			// 
			// lbl_estoque
			// 
			this->lbl_estoque->AutoSize = true;
			this->lbl_estoque->Location = System::Drawing::Point(672, 354);
			this->lbl_estoque->Name = L"lbl_estoque";
			this->lbl_estoque->Size = System::Drawing::Size(57, 16);
			this->lbl_estoque->TabIndex = 10;
			this->lbl_estoque->Text = L"Estoque";
			// 
			// btn_aumentarEstoque
			// 
			this->btn_aumentarEstoque->Location = System::Drawing::Point(77, 466);
			this->btn_aumentarEstoque->Name = L"btn_aumentarEstoque";
			this->btn_aumentarEstoque->Size = System::Drawing::Size(94, 27);
			this->btn_aumentarEstoque->TabIndex = 11;
			this->btn_aumentarEstoque->Text = L"Adicionar";
			this->btn_aumentarEstoque->UseVisualStyleBackColor = true;
			// 
			// btn_diminuirEstoque
			// 
			this->btn_diminuirEstoque->Location = System::Drawing::Point(177, 466);
			this->btn_diminuirEstoque->Name = L"btn_diminuirEstoque";
			this->btn_diminuirEstoque->Size = System::Drawing::Size(94, 27);
			this->btn_diminuirEstoque->TabIndex = 12;
			this->btn_diminuirEstoque->Text = L"Remover";
			this->btn_diminuirEstoque->UseVisualStyleBackColor = true;
			// 
			// btn_adicionarProduto
			// 
			this->btn_adicionarProduto->Location = System::Drawing::Point(672, 464);
			this->btn_adicionarProduto->Name = L"btn_adicionarProduto";
			this->btn_adicionarProduto->Size = System::Drawing::Size(100, 26);
			this->btn_adicionarProduto->TabIndex = 13;
			this->btn_adicionarProduto->Text = L"Adicionar";
			this->btn_adicionarProduto->UseVisualStyleBackColor = true;
			// 
			// editarEstoque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(811, 567);
			this->Controls->Add(this->btn_adicionarProduto);
			this->Controls->Add(this->btn_diminuirEstoque);
			this->Controls->Add(this->btn_aumentarEstoque);
			this->Controls->Add(this->lbl_estoque);
			this->Controls->Add(this->lbl_preco);
			this->Controls->Add(this->lbl_produtos);
			this->Controls->Add(this->lbl_codigo);
			this->Controls->Add(this->txt_estoque);
			this->Controls->Add(this->txt_preco);
			this->Controls->Add(this->txt_produto);
			this->Controls->Add(this->txt_codigo);
			this->Controls->Add(this->dataGrid_estoque);
			this->Controls->Add(this->lbl_controleEstoque);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"editarEstoque";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"editarEstoque";
			this->TransparencyKey = System::Drawing::Color::DimGray;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_estoque))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
