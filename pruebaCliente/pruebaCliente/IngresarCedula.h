#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngresarCedula
	/// </summary>
	public ref class IngresarCedula : public System::Windows::Forms::Form
	{
	public:
		IngresarCedula(void)
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
		~IngresarCedula()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  mandarCedula;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->mandarCedula = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// mandarCedula
			// 
			this->mandarCedula->Location = System::Drawing::Point(267, 112);
			this->mandarCedula->Name = L"mandarCedula";
			this->mandarCedula->Size = System::Drawing::Size(75, 23);
			this->mandarCedula->TabIndex = 0;
			this->mandarCedula->Text = L"Aceptar";
			this->mandarCedula->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese su cedula: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 2;
			// 
			// IngresarCedula
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 147);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mandarCedula);
			this->Name = L"IngresarCedula";
			this->Text = L"IngresarCedula";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
