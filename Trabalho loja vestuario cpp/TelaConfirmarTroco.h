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
	/// Summary for TelaConfirmarTroco
	/// </summary>
	public ref class TelaConfirmarTroco : public System::Windows::Forms::Form
	{
	public:
		TelaConfirmarTroco(void)
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
		~TelaConfirmarTroco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_confirmar;
	protected:
	private: System::Windows::Forms::Label^ lbl_titulo;
	private: System::Windows::Forms::NumericUpDown^ txt_valor;
	private: System::Windows::Forms::Label^ lbl_troco;

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
			this->btn_confirmar = (gcnew System::Windows::Forms::Button());
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->txt_valor = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbl_troco = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_valor))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_confirmar
			// 
			this->btn_confirmar->Location = System::Drawing::Point(137, 63);
			this->btn_confirmar->Name = L"btn_confirmar";
			this->btn_confirmar->Size = System::Drawing::Size(75, 23);
			this->btn_confirmar->TabIndex = 0;
			this->btn_confirmar->Text = L"Confirmar";
			this->btn_confirmar->UseVisualStyleBackColor = true;
			this->btn_confirmar->Click += gcnew System::EventHandler(this, &TelaConfirmarTroco::btn_confirmar_Click);
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->AutoSize = true;
			this->lbl_titulo->Location = System::Drawing::Point(13, 13);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(157, 13);
			this->lbl_titulo->TabIndex = 2;
			this->lbl_titulo->Text = L"Digite o valor pago pelo Cliente:";
			// 
			// txt_valor
			// 
			this->txt_valor->Location = System::Drawing::Point(16, 29);
			this->txt_valor->Name = L"txt_valor";
			this->txt_valor->Size = System::Drawing::Size(196, 20);
			this->txt_valor->TabIndex = 3;
			// 
			// lbl_troco
			// 
			this->lbl_troco->AutoSize = true;
			this->lbl_troco->Location = System::Drawing::Point(13, 63);
			this->lbl_troco->Name = L"lbl_troco";
			this->lbl_troco->Size = System::Drawing::Size(38, 13);
			this->lbl_troco->TabIndex = 4;
			this->lbl_troco->Text = L"Troco:";
			// 
			// TelaConfirmarTroco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(218, 95);
			this->Controls->Add(this->lbl_troco);
			this->Controls->Add(this->txt_valor);
			this->Controls->Add(this->lbl_titulo);
			this->Controls->Add(this->btn_confirmar);
			this->Name = L"TelaConfirmarTroco";
			this->Text = L"Troco";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_valor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool trocoGerado = false;
			

	private: System::Void btn_confirmar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->trocoGerado) {
			float troco = INT32::Parse(this->txt_valor->Text) - Global::carrinho.calcularValorComDesconto();
			if (troco >= 0) {
				lbl_troco->Text = "Troco: " + troco;
				this->trocoGerado = true;
			}
			else {
				lbl_troco->Text = "Valor Insuficiente";
			}
		}
		else {
			Global::confirmEvent::dispararEvento();
			this->Close();
		}
	}
	};
}
