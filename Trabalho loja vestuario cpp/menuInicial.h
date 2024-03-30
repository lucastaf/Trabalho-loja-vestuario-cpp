#pragma once

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
		System::ComponentModel::Container ^components;

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
			this->lbl_titulo->Location = System::Drawing::Point(124, 124);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(339, 48);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"Loja Roupas e Cia.";
			// 
			// btn_comprar
			// 
			this->btn_comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_comprar->Location = System::Drawing::Point(199, 310);
			this->btn_comprar->Name = L"btn_comprar";
			this->btn_comprar->Size = System::Drawing::Size(189, 81);
			this->btn_comprar->TabIndex = 1;
			this->btn_comprar->Text = L"Comprar";
			this->btn_comprar->UseVisualStyleBackColor = true;
			// 
			// btn_gerenciar
			// 
			this->btn_gerenciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_gerenciar->Location = System::Drawing::Point(12, 12);
			this->btn_gerenciar->Name = L"btn_gerenciar";
			this->btn_gerenciar->Size = System::Drawing::Size(109, 52);
			this->btn_gerenciar->TabIndex = 2;
			this->btn_gerenciar->Text = L"Gerenciar Estoque";
			this->btn_gerenciar->UseVisualStyleBackColor = true;
			// 
			// btn_relatorio
			// 
			this->btn_relatorio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_relatorio->Location = System::Drawing::Point(127, 12);
			this->btn_relatorio->Name = L"btn_relatorio";
			this->btn_relatorio->Size = System::Drawing::Size(109, 52);
			this->btn_relatorio->TabIndex = 3;
			this->btn_relatorio->Text = L"Relatório";
			this->btn_relatorio->UseVisualStyleBackColor = true;
			// 
			// menuInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 455);
			this->Controls->Add(this->btn_relatorio);
			this->Controls->Add(this->btn_gerenciar);
			this->Controls->Add(this->btn_comprar);
			this->Controls->Add(this->lbl_titulo);
			this->Name = L"menuInicial";
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
