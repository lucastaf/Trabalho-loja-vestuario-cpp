#pragma once
#include "telaVendas.h"
#include "telaCarrinho.h"
#include "editarEstoque.h"

namespace Trabalholojavestuariocpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menuInicial
	/// </summary>
	public ref class menuInicial : public System::Windows::Forms::Form
	{
	public:
		menuInicial(void)
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
		~menuInicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_titulo;
	protected:

	private: System::Windows::Forms::Button^ btn_comprar;

	private: System::Windows::Forms::Button^ btn_gerenciar;
	private: System::Windows::Forms::Button^ btn_relatorio;



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
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->btn_comprar = (gcnew System::Windows::Forms::Button());
			this->btn_gerenciar = (gcnew System::Windows::Forms::Button());
			this->btn_relatorio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->AutoSize = true;
			this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Lato Semibold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_titulo->Location = System::Drawing::Point(165, 153);
			this->lbl_titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(422, 60);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"Loja Roupas e Cia.";
			// 
			// btn_comprar
			// 
			this->btn_comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_comprar->Location = System::Drawing::Point(265, 382);
			this->btn_comprar->Margin = System::Windows::Forms::Padding(4);
			this->btn_comprar->Name = L"btn_comprar";
			this->btn_comprar->Size = System::Drawing::Size(252, 100);
			this->btn_comprar->TabIndex = 1;
			this->btn_comprar->Text = L"Comprar";
			this->btn_comprar->UseVisualStyleBackColor = true;
			this->btn_comprar->Click += gcnew System::EventHandler(this, &menuInicial::btn_comprar_Click);
			// 
			// btn_gerenciar
			// 
			this->btn_gerenciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_gerenciar->Location = System::Drawing::Point(16, 15);
			this->btn_gerenciar->Margin = System::Windows::Forms::Padding(4);
			this->btn_gerenciar->Name = L"btn_gerenciar";
			this->btn_gerenciar->Size = System::Drawing::Size(145, 64);
			this->btn_gerenciar->TabIndex = 2;
			this->btn_gerenciar->Text = L"Gerenciar Estoque";
			this->btn_gerenciar->UseVisualStyleBackColor = true;
			this->btn_gerenciar->Click += gcnew System::EventHandler(this, &menuInicial::btn_gerenciar_Click);
			// 
			// btn_relatorio
			// 
			this->btn_relatorio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_relatorio->Location = System::Drawing::Point(169, 15);
			this->btn_relatorio->Margin = System::Windows::Forms::Padding(4);
			this->btn_relatorio->Name = L"btn_relatorio";
			this->btn_relatorio->Size = System::Drawing::Size(145, 64);
			this->btn_relatorio->TabIndex = 3;
			this->btn_relatorio->Text = L"Relatório";
			this->btn_relatorio->UseVisualStyleBackColor = true;
			this->btn_relatorio->Click += gcnew System::EventHandler(this, &menuInicial::btn_relatorio_Click);
			// 
			// menuInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 560);
			this->Controls->Add(this->btn_relatorio);
			this->Controls->Add(this->btn_gerenciar);
			this->Controls->Add(this->btn_comprar);
			this->Controls->Add(this->lbl_titulo);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"menuInicial";
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_relatorio_Click(System::Object^ sender, System::EventArgs^ e) {
		telaVendas^ novaTela = gcnew telaVendas();
		novaTela->ShowDialog();
	}
	private: System::Void btn_comprar_Click(System::Object^ sender, System::EventArgs^ e) {
		editarCarrinho^ novaTela = gcnew editarCarrinho();
		novaTela->ShowDialog();
	}
	private: System::Void btn_gerenciar_Click(System::Object^ sender, System::EventArgs^ e) {
		editarEstoque^ novaTela = gcnew editarEstoque();
		novaTela->ShowDialog();
	}
};
}

