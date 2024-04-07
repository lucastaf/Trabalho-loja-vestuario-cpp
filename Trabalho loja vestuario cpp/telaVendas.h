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
	private: System::Windows::Forms::Button^ btn_exlcuir;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGrid_Vendas;







	private: System::Windows::Forms::Button^ btn_setFilter;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ horario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantidadeProd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valorTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valorCobrado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ formaDePagamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vendedor;
	private: System::Windows::Forms::Label^ lbl_bruto;
	private: System::Windows::Forms::Label^ lbl_valorBruto;


	private: System::Windows::Forms::Label^ lbl_valorLiquido;

	private: System::Windows::Forms::Label^ lbl_renda;

	private: System::Windows::Forms::Label^ lbl_quantProdutos;

	private: System::Windows::Forms::Label^ lbl_produtosVendidos;










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
		/// 

		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btn_exlcuir = (gcnew System::Windows::Forms::Button());
			this->dataGrid_Vendas = (gcnew System::Windows::Forms::DataGridView());
			this->horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantidadeProd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorCobrado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->formaDePagamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vendedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_setFilter = (gcnew System::Windows::Forms::Button());
			this->lbl_bruto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorBruto = (gcnew System::Windows::Forms::Label());
			this->lbl_valorLiquido = (gcnew System::Windows::Forms::Label());
			this->lbl_renda = (gcnew System::Windows::Forms::Label());
			this->lbl_quantProdutos = (gcnew System::Windows::Forms::Label());
			this->lbl_produtosVendidos = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Vendas))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_exlcuir
			// 
			this->btn_exlcuir->Location = System::Drawing::Point(660, 293);
			this->btn_exlcuir->Name = L"btn_exlcuir";
			this->btn_exlcuir->Size = System::Drawing::Size(96, 56);
			this->btn_exlcuir->TabIndex = 0;
			this->btn_exlcuir->Text = L"Excluir Registro";
			this->btn_exlcuir->UseVisualStyleBackColor = true;
			this->btn_exlcuir->Click += gcnew System::EventHandler(this, &telaVendas::btn_exlcuir_Click);
			// 
			// dataGrid_Vendas
			// 
			this->dataGrid_Vendas->AllowUserToAddRows = false;
			this->dataGrid_Vendas->AllowUserToDeleteRows = false;
			this->dataGrid_Vendas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_Vendas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->horario,
					this->quantidadeProd, this->valorTotal, this->valorCobrado, this->formaDePagamento, this->vendedor
			});
			this->dataGrid_Vendas->Location = System::Drawing::Point(12, 12);
			this->dataGrid_Vendas->Name = L"dataGrid_Vendas";
			this->dataGrid_Vendas->ReadOnly = true;
			this->dataGrid_Vendas->RowHeadersWidth = 51;
			this->dataGrid_Vendas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid_Vendas->Size = System::Drawing::Size(642, 338);
			this->dataGrid_Vendas->TabIndex = 1;
			// 
			// horario
			// 
			dataGridViewCellStyle1->Format = L"C2";
			dataGridViewCellStyle1->NullValue = nullptr;
			this->horario->DefaultCellStyle = dataGridViewCellStyle1;
			this->horario->HeaderText = L"Horario";
			this->horario->MinimumWidth = 6;
			this->horario->Name = L"horario";
			this->horario->ReadOnly = true;
			this->horario->Width = 125;
			// 
			// quantidadeProd
			// 
			this->quantidadeProd->HeaderText = L"Quantidade";
			this->quantidadeProd->MinimumWidth = 6;
			this->quantidadeProd->Name = L"quantidadeProd";
			this->quantidadeProd->ReadOnly = true;
			this->quantidadeProd->Width = 80;
			// 
			// valorTotal
			// 
			this->valorTotal->HeaderText = L"Valor Bruto";
			this->valorTotal->MinimumWidth = 6;
			this->valorTotal->Name = L"valorTotal";
			this->valorTotal->ReadOnly = true;
			this->valorTotal->Width = 80;
			// 
			// valorCobrado
			// 
			this->valorCobrado->HeaderText = L"Valor liquído";
			this->valorCobrado->MinimumWidth = 6;
			this->valorCobrado->Name = L"valorCobrado";
			this->valorCobrado->ReadOnly = true;
			this->valorCobrado->Width = 80;
			// 
			// formaDePagamento
			// 
			this->formaDePagamento->HeaderText = L"Forma de pagamento";
			this->formaDePagamento->MinimumWidth = 6;
			this->formaDePagamento->Name = L"formaDePagamento";
			this->formaDePagamento->ReadOnly = true;
			this->formaDePagamento->Width = 125;
			// 
			// vendedor
			// 
			this->vendedor->HeaderText = L"Vendedor";
			this->vendedor->MinimumWidth = 6;
			this->vendedor->Name = L"vendedor";
			this->vendedor->ReadOnly = true;
			this->vendedor->Width = 125;
			// 
			// btn_setFilter
			// 
			this->btn_setFilter->Location = System::Drawing::Point(660, 12);
			this->btn_setFilter->Name = L"btn_setFilter";
			this->btn_setFilter->Size = System::Drawing::Size(96, 45);
			this->btn_setFilter->TabIndex = 2;
			this->btn_setFilter->Text = L"Filtrar Hoje";
			this->btn_setFilter->UseVisualStyleBackColor = true;
			this->btn_setFilter->Click += gcnew System::EventHandler(this, &telaVendas::btn_setFilter_Click);
			// 
			// lbl_bruto
			// 
			this->lbl_bruto->AutoSize = true;
			this->lbl_bruto->Location = System::Drawing::Point(661, 64);
			this->lbl_bruto->Name = L"lbl_bruto";
			this->lbl_bruto->Size = System::Drawing::Size(89, 13);
			this->lbl_bruto->TabIndex = 3;
			this->lbl_bruto->Text = L"Valor Bruto Total:";
			// 
			// lbl_valorBruto
			// 
			this->lbl_valorBruto->AutoSize = true;
			this->lbl_valorBruto->Location = System::Drawing::Point(661, 77);
			this->lbl_valorBruto->Name = L"lbl_valorBruto";
			this->lbl_valorBruto->Size = System::Drawing::Size(30, 13);
			this->lbl_valorBruto->TabIndex = 4;
			this->lbl_valorBruto->Text = L"R$ 0";
			// 
			// lbl_valorLiquido
			// 
			this->lbl_valorLiquido->AutoSize = true;
			this->lbl_valorLiquido->Location = System::Drawing::Point(661, 228);
			this->lbl_valorLiquido->Name = L"lbl_valorLiquido";
			this->lbl_valorLiquido->Size = System::Drawing::Size(30, 13);
			this->lbl_valorLiquido->TabIndex = 6;
			this->lbl_valorLiquido->Text = L"R$ 0";
			// 
			// lbl_renda
			// 
			this->lbl_renda->AutoSize = true;
			this->lbl_renda->Location = System::Drawing::Point(661, 215);
			this->lbl_renda->Name = L"lbl_renda";
			this->lbl_renda->Size = System::Drawing::Size(69, 13);
			this->lbl_renda->TabIndex = 5;
			this->lbl_renda->Text = L"Renda Total:";
			// 
			// lbl_quantProdutos
			// 
			this->lbl_quantProdutos->AutoSize = true;
			this->lbl_quantProdutos->Location = System::Drawing::Point(661, 272);
			this->lbl_quantProdutos->Name = L"lbl_quantProdutos";
			this->lbl_quantProdutos->Size = System::Drawing::Size(13, 13);
			this->lbl_quantProdutos->TabIndex = 8;
			this->lbl_quantProdutos->Text = L"0";
			// 
			// lbl_produtosVendidos
			// 
			this->lbl_produtosVendidos->AutoSize = true;
			this->lbl_produtosVendidos->Location = System::Drawing::Point(661, 259);
			this->lbl_produtosVendidos->Name = L"lbl_produtosVendidos";
			this->lbl_produtosVendidos->Size = System::Drawing::Size(99, 13);
			this->lbl_produtosVendidos->TabIndex = 7;
			this->lbl_produtosVendidos->Text = L"Produtos Vendidos:";
			// 
			// telaVendas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 362);
			this->Controls->Add(this->lbl_quantProdutos);
			this->Controls->Add(this->lbl_produtosVendidos);
			this->Controls->Add(this->lbl_valorLiquido);
			this->Controls->Add(this->lbl_renda);
			this->Controls->Add(this->lbl_valorBruto);
			this->Controls->Add(this->lbl_bruto);
			this->Controls->Add(this->btn_setFilter);
			this->Controls->Add(this->dataGrid_Vendas);
			this->Controls->Add(this->btn_exlcuir);
			this->Name = L"telaVendas";
			this->Text = L"Relatorio";
			this->Load += gcnew System::EventHandler(this, &telaVendas::telaVendas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Vendas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		core::ListaVendas *listaFiltrada = new core::ListaVendas;
		bool isFiltred;

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
			System::String^ dataString = gcnew System::String(novaVenda.formatarData().c_str()) + ";" + novaVenda.quantProdutos + "; R$" + novaVenda.valor + "; R$" + novaVenda.valorCobrado + ";" + gcnew System::String(novaVenda.formaDePagamento.c_str()) + ";" + gcnew System::String(novaVenda.vendedor.c_str());
			array<System::String^>^ dataArray = dataString->Split(';');

			DataGridViewRow^ novaLinha = gcnew DataGridViewRow();
			novaLinha->Tag = novaVenda.horario;
			for each (System::String ^ str in dataArray) {
				DataGridViewCell^ newCell = gcnew DataGridViewTextBoxCell();
				newCell->Value = str;
				novaLinha->Cells->Add(newCell);
			}
		
			this->dataGrid_Vendas->Rows->Add(novaLinha);
			
			this->lbl_quantProdutos->Text = "" + this->listaFiltrada->calcularVendasTotais();
			this->lbl_valorLiquido->Text = "R$ " + this->listaFiltrada->calcularValorCobradoTotal();
			this->lbl_valorBruto->Text = "R$ " + this->listaFiltrada->calcularValorTotal();


		};
	}


	private: System::Void telaVendas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->atualizarLista();
	}
	private: System::Void btn_exlcuir_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the first selected row
		if (this->dataGrid_Vendas->SelectedCells->Count <= 0)
			return;

		DataGridViewRow^ selectedRow = this->dataGrid_Vendas->SelectedCells[0]->OwningRow;

		if (selectedRow == nullptr || selectedRow->Tag == nullptr) return;

		this->dataGrid_Vendas->Rows->RemoveAt(selectedRow->Index);


		std::time_t horario = safe_cast<std::time_t>(selectedRow->Tag);

		Global::vendas.excluirVendaPorHorario(horario);
		Global::vendas.writeFile();
	}
	private: System::Void btn_setFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->isFiltred = !this->isFiltred;
		this->atualizarLista();
		if (this->isFiltred) {
			this->btn_setFilter->Text = "Remover Filtro";
		}
		else {
			this->btn_setFilter->Text = "Filtrar Hoje";
		}
	}
	};
}
