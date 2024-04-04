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
	private: System::Windows::Forms::DataGridView^ dataGridEstoque;


	private: System::Windows::Forms::Button^ btn_finalizar;









	private: System::Windows::Forms::Button^ btn_adicionar;
	private: System::Windows::Forms::Button^ btn_remover;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Preco;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estoque;
	private: System::Windows::Forms::DataGridView^ dataGridCarrinho;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;





	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridEstoque = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estoque = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_finalizar = (gcnew System::Windows::Forms::Button());
			this->btn_adicionar = (gcnew System::Windows::Forms::Button());
			this->btn_remover = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridCarrinho = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEstoque))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCarrinho))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Meu Carrinho";
			// 
			// dataGridEstoque
			// 
			this->dataGridEstoque->AllowUserToAddRows = false;
			this->dataGridEstoque->AllowUserToDeleteRows = false;
			this->dataGridEstoque->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridEstoque->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataGridEstoque->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridEstoque->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEstoque->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Nome, this->Preco, this->Estoque
			});
			this->dataGridEstoque->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridEstoque->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridEstoque->Location = System::Drawing::Point(12, 122);
			this->dataGridEstoque->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridEstoque->Name = L"dataGridEstoque";
			this->dataGridEstoque->ReadOnly = true;
			this->dataGridEstoque->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridEstoque->RowHeadersWidth = 4;
			this->dataGridEstoque->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridEstoque->RowTemplate->Height = 24;
			this->dataGridEstoque->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridEstoque->Size = System::Drawing::Size(521, 253);
			this->dataGridEstoque->TabIndex = 1;
			this->dataGridEstoque->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editarCarrinho::dataGridView1_CellContentClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 70;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Produto";
			this->Nome->MinimumWidth = 6;
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 150;
			// 
			// Preco
			// 
			this->Preco->HeaderText = L"Preço";
			this->Preco->MinimumWidth = 6;
			this->Preco->Name = L"Preco";
			this->Preco->ReadOnly = true;
			this->Preco->Width = 80;
			// 
			// Estoque
			// 
			this->Estoque->HeaderText = L"Estoque";
			this->Estoque->MinimumWidth = 6;
			this->Estoque->Name = L"Estoque";
			this->Estoque->ReadOnly = true;
			this->Estoque->Width = 80;
			// 
			// btn_finalizar
			// 
			this->btn_finalizar->Location = System::Drawing::Point(859, 457);
			this->btn_finalizar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_finalizar->Name = L"btn_finalizar";
			this->btn_finalizar->Size = System::Drawing::Size(209, 40);
			this->btn_finalizar->TabIndex = 2;
			this->btn_finalizar->Text = L"Finalizar Pedido";
			this->btn_finalizar->UseVisualStyleBackColor = true;
			// 
			// btn_adicionar
			// 
			this->btn_adicionar->Location = System::Drawing::Point(12, 379);
			this->btn_adicionar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_adicionar->Name = L"btn_adicionar";
			this->btn_adicionar->Size = System::Drawing::Size(128, 55);
			this->btn_adicionar->TabIndex = 4;
			this->btn_adicionar->Text = L"Adicionar Item";
			this->btn_adicionar->UseVisualStyleBackColor = true;
			// 
			// btn_remover
			// 
			this->btn_remover->Location = System::Drawing::Point(940, 379);
			this->btn_remover->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_remover->Name = L"btn_remover";
			this->btn_remover->Size = System::Drawing::Size(128, 55);
			this->btn_remover->TabIndex = 5;
			this->btn_remover->Text = L"Remover Item";
			this->btn_remover->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Estoque";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(544, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Meu Carrinho";
			// 
			// dataGridCarrinho
			// 
			this->dataGridCarrinho->AllowUserToAddRows = false;
			this->dataGridCarrinho->AllowUserToDeleteRows = false;
			this->dataGridCarrinho->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridCarrinho->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataGridCarrinho->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridCarrinho->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCarrinho->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridCarrinho->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridCarrinho->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridCarrinho->Location = System::Drawing::Point(547, 122);
			this->dataGridCarrinho->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridCarrinho->Name = L"dataGridCarrinho";
			this->dataGridCarrinho->ReadOnly = true;
			this->dataGridCarrinho->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridCarrinho->RowHeadersWidth = 4;
			this->dataGridCarrinho->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridCarrinho->RowTemplate->Height = 24;
			this->dataGridCarrinho->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridCarrinho->Size = System::Drawing::Size(521, 253);
			this->dataGridCarrinho->TabIndex = 9;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Produto";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Preço";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 80;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Estoque";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 80;
			// 
			// editarCarrinho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 508);
			this->Controls->Add(this->dataGridCarrinho);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_remover);
			this->Controls->Add(this->btn_adicionar);
			this->Controls->Add(this->btn_finalizar);
			this->Controls->Add(this->dataGridEstoque);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"editarCarrinho";
			this->Text = L"Carrinho";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEstoque))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCarrinho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void atualizarLista() {
		this->dataGrid_Vendas->Rows->Clear();
		if (this->isFiltred) {
			this->listaFiltrada->copy(Global::vendas.filtrarVendasDeHoje());
		}
		else {
			this->listaFiltrada->copy(Global::vendas);
		}
		core::No<core::Venda>* aux = this->listaFiltrada->getComeco();
		for (; aux != nullptr; aux = aux->eloF) {
			core::Venda novaVenda = aux->info;
			System::String^ dataString = gcnew System::String(novaVenda.formatarData().c_str()) + "," + novaVenda.quantProdutos + ", R$" + novaVenda.valor + ", R$" + novaVenda.valorCobrado + "," + gcnew System::String(novaVenda.formaDePagamento.c_str()) + "," + gcnew System::String(novaVenda.vendedor.c_str());
			array<System::String^>^ dataArray = dataString->Split(',');

			DataGridViewRow^ novaLinha = gcnew DataGridViewRow();
			novaLinha->Tag = novaVenda.horario;
			for each (System::String ^ str in dataArray) {
				DataGridViewCell^ newCell = gcnew DataGridViewTextBoxCell();
				newCell->Value = str;
				novaLinha->Cells->Add(newCell);
			}

			this->dataGrid_Vendas->Rows->Add(novaLinha);

		};

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
