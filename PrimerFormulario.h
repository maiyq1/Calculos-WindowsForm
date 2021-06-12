#pragma once
#include "Operaciones.h"

namespace LeccionFormularios {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PrimerFormulario
	/// </summary>
	public ref class PrimerFormulario : public System::Windows::Forms::Form
	{
		COperaciones* objOperaciones = new COperaciones();
	public:
		PrimerFormulario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PrimerFormulario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtb_Numero1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtb_Numero2;
	private: System::Windows::Forms::Button^ btn_Calcular;
	private: System::Windows::Forms::ListBox^ lst_Todo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ lst_Suma;
	private: System::Windows::Forms::ListBox^ lst_Resta;
	private: System::Windows::Forms::ListBox^ lst_Multi;
	private: System::Windows::Forms::ListBox^ lst_Division;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtb_Numero1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtb_Numero2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Calcular = (gcnew System::Windows::Forms::Button());
			this->lst_Todo = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lst_Suma = (gcnew System::Windows::Forms::ListBox());
			this->lst_Resta = (gcnew System::Windows::Forms::ListBox());
			this->lst_Multi = (gcnew System::Windows::Forms::ListBox());
			this->lst_Division = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(192, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero 1";
			// 
			// txtb_Numero1
			// 
			this->txtb_Numero1->Location = System::Drawing::Point(256, 10);
			this->txtb_Numero1->Name = L"txtb_Numero1";
			this->txtb_Numero1->Size = System::Drawing::Size(100, 20);
			this->txtb_Numero1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(192, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Numero 2";
			// 
			// txtb_Numero2
			// 
			this->txtb_Numero2->Location = System::Drawing::Point(256, 42);
			this->txtb_Numero2->Name = L"txtb_Numero2";
			this->txtb_Numero2->Size = System::Drawing::Size(100, 20);
			this->txtb_Numero2->TabIndex = 3;
			// 
			// btn_Calcular
			// 
			this->btn_Calcular->Location = System::Drawing::Point(256, 188);
			this->btn_Calcular->Name = L"btn_Calcular";
			this->btn_Calcular->Size = System::Drawing::Size(100, 34);
			this->btn_Calcular->TabIndex = 4;
			this->btn_Calcular->Text = L"Calcular";
			this->btn_Calcular->UseVisualStyleBackColor = true;
			this->btn_Calcular->Click += gcnew System::EventHandler(this, &PrimerFormulario::btn_Calcular_Click);
			// 
			// lst_Todo
			// 
			this->lst_Todo->FormattingEnabled = true;
			this->lst_Todo->Location = System::Drawing::Point(12, 248);
			this->lst_Todo->Name = L"lst_Todo";
			this->lst_Todo->Size = System::Drawing::Size(533, 108);
			this->lst_Todo->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Suma";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Resta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(348, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Multiplicacion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(359, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Division";
			// 
			// lst_Suma
			// 
			this->lst_Suma->FormattingEnabled = true;
			this->lst_Suma->Location = System::Drawing::Point(89, 82);
			this->lst_Suma->Name = L"lst_Suma";
			this->lst_Suma->Size = System::Drawing::Size(120, 17);
			this->lst_Suma->TabIndex = 10;
			// 
			// lst_Resta
			// 
			this->lst_Resta->FormattingEnabled = true;
			this->lst_Resta->Location = System::Drawing::Point(89, 115);
			this->lst_Resta->Name = L"lst_Resta";
			this->lst_Resta->Size = System::Drawing::Size(120, 17);
			this->lst_Resta->TabIndex = 11;
			// 
			// lst_Multi
			// 
			this->lst_Multi->FormattingEnabled = true;
			this->lst_Multi->Location = System::Drawing::Point(425, 82);
			this->lst_Multi->Name = L"lst_Multi";
			this->lst_Multi->Size = System::Drawing::Size(120, 17);
			this->lst_Multi->TabIndex = 12;
			// 
			// lst_Division
			// 
			this->lst_Division->FormattingEnabled = true;
			this->lst_Division->Location = System::Drawing::Point(425, 115);
			this->lst_Division->Name = L"lst_Division";
			this->lst_Division->Size = System::Drawing::Size(120, 17);
			this->lst_Division->TabIndex = 13;
			// 
			// PrimerFormulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(557, 375);
			this->Controls->Add(this->lst_Division);
			this->Controls->Add(this->lst_Multi);
			this->Controls->Add(this->lst_Resta);
			this->Controls->Add(this->lst_Suma);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lst_Todo);
			this->Controls->Add(this->btn_Calcular);
			this->Controls->Add(this->txtb_Numero2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtb_Numero1);
			this->Controls->Add(this->label1);
			this->Name = L"PrimerFormulario";
			this->Text = L"Matematicas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Calcular_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double n1, n2;
		n1 = Convert::ToDouble(txtb_Numero1->Text);
		n2 = Convert::ToDouble(txtb_Numero2->Text);
		objOperaciones->setN1(n1);
		objOperaciones->setN2(n2);
		//========================================//
		lst_Suma->Items->Clear();
		lst_Resta->Items->Clear();
		lst_Multi->Items->Clear();
		lst_Division->Items->Clear();

		lst_Suma->Items->Add(objOperaciones->suma());
		lst_Resta->Items->Add(objOperaciones->resta());
		lst_Multi->Items->Add(objOperaciones->multi());
		lst_Division->Items->Add(objOperaciones->division());

		lst_Todo->Items->Add("Numero 1: " + objOperaciones->getN1() + "\tNumero 2:" + objOperaciones->getN2()
			+ "\tSuma: " + objOperaciones->suma()
			+ "\tResta: " + objOperaciones->resta()
			+ "\tMultiplicacion: " + objOperaciones->multi()
			+ "\tDivision: " + objOperaciones->division());
		txtb_Numero1->Text = "";
		txtb_Numero2->Text = "";

		txtb_Numero1->Focus();
	}
};
}
