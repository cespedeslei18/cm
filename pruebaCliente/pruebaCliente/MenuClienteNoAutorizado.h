#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuClienteNoAutorizado
	/// </summary>
	public ref class MenuClienteNoAutorizado : public System::Windows::Forms::Form
	{
	public:
		MenuClienteNoAutorizado(void)
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
		~MenuClienteNoAutorizado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  botonConsultarPrecioNA;
	private: System::Windows::Forms::Button^  button1;


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
			this->botonConsultarPrecioNA = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(117, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu Cliente No Autorizado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(480, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usted no se encuentra registrado,  solo puede realizar las siguientes opciones: ";
			// 
			// botonConsultarPrecioNA
			// 
			this->botonConsultarPrecioNA->Location = System::Drawing::Point(145, 128);
			this->botonConsultarPrecioNA->Name = L"botonConsultarPrecioNA";
			this->botonConsultarPrecioNA->Size = System::Drawing::Size(209, 23);
			this->botonConsultarPrecioNA->TabIndex = 2;
			this->botonConsultarPrecioNA->Text = L"Consultar precio de producto";
			this->botonConsultarPrecioNA->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(145, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Consultar productos de un supermercado";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MenuClienteNoAutorizado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 285);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->botonConsultarPrecioNA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuClienteNoAutorizado";
			this->Text = L"MenuClienteNoAutorizado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
