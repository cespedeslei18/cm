
#pragma once
#include "IngresarCedula.h"

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  botonAceptarTipoUsuario;

	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->botonAceptarTipoUsuario = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Meiryo", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡Bienvenido al sistema de supermecados!";
			this->label1->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese su tipo de usuario: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Cliente", L"Administrador", L"Vendedor", L"Cliente-Funcionario" });
			this->comboBox1->Location = System::Drawing::Point(260, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MenuPrincipal::comboBox1_SelectedIndexChanged);
			// 
			// botonAceptarTipoUsuario
			// 
			this->botonAceptarTipoUsuario->Location = System::Drawing::Point(245, 143);
			this->botonAceptarTipoUsuario->Name = L"botonAceptarTipoUsuario";
			this->botonAceptarTipoUsuario->Size = System::Drawing::Size(171, 23);
			this->botonAceptarTipoUsuario->TabIndex = 5;
			this->botonAceptarTipoUsuario->Text = L"Aceptar";
			this->botonAceptarTipoUsuario->UseVisualStyleBackColor = true;
			this->botonAceptarTipoUsuario->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonAceptarTipoUsuario_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 188);
			this->Controls->Add(this->botonAceptarTipoUsuario);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void botonAceptarTipoUsuario_Click(System::Object^  sender, System::EventArgs^  e) {

		if (comboBox1->Text == "Cliente"){
			botonAceptarTipoUsuario->Text = "Menu cliente";
			IngresarCedula ^ventana = gcnew IngresarCedula();
			this->Hide();
			ventana->Show();
		}
		if (comboBox1->Text == "Cliente-Funcionario") {
			botonAceptarTipoUsuario->Text = "Menu CF";
			IngresarCedula ^ventana = gcnew IngresarCedula();
			this->Hide();
			ventana->Show();
		}

		if (comboBox1->Text == "Administrador") {
			botonAceptarTipoUsuario->Text = "Menu AD";
			IngresarCedula ^ventana = gcnew IngresarCedula();
			this->Hide();
			ventana->Show();
		}
		if (comboBox1->Text == "Vendedor") {
			botonAceptarTipoUsuario->Text = "Menu VEn";
			IngresarCedula ^ventana = gcnew IngresarCedula();
			this->Hide();
			ventana->Show();
		}
		
		
	}
};
}
