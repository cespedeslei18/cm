#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuVendedor
	/// </summary>
	public ref class MenuVendedor : public System::Windows::Forms::Form
	{
	public:
		MenuVendedor(void)
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
		~MenuVendedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonConsultarPrecioVendedor;
	private: System::Windows::Forms::Button^  botonConsultarDescuentosVendedor;
	private: System::Windows::Forms::Button^  botonConsultarProductosSuperVendedor;
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
			this->botonConsultarPrecioVendedor = (gcnew System::Windows::Forms::Button());
			this->botonConsultarDescuentosVendedor = (gcnew System::Windows::Forms::Button());
			this->botonConsultarProductosSuperVendedor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu Vendedor";
			this->label1->Click += gcnew System::EventHandler(this, &MenuVendedor::label1_Click);
			// 
			// botonConsultarPrecioVendedor
			// 
			this->botonConsultarPrecioVendedor->Location = System::Drawing::Point(83, 89);
			this->botonConsultarPrecioVendedor->Name = L"botonConsultarPrecioVendedor";
			this->botonConsultarPrecioVendedor->Size = System::Drawing::Size(196, 23);
			this->botonConsultarPrecioVendedor->TabIndex = 1;
			this->botonConsultarPrecioVendedor->Text = L"Consultar precio ";
			this->botonConsultarPrecioVendedor->UseVisualStyleBackColor = true;
			// 
			// botonConsultarDescuentosVendedor
			// 
			this->botonConsultarDescuentosVendedor->Location = System::Drawing::Point(83, 141);
			this->botonConsultarDescuentosVendedor->Name = L"botonConsultarDescuentosVendedor";
			this->botonConsultarDescuentosVendedor->Size = System::Drawing::Size(196, 23);
			this->botonConsultarDescuentosVendedor->TabIndex = 2;
			this->botonConsultarDescuentosVendedor->Text = L"Consultar descuentos";
			this->botonConsultarDescuentosVendedor->UseVisualStyleBackColor = true;
			// 
			// botonConsultarProductosSuperVendedor
			// 
			this->botonConsultarProductosSuperVendedor->Location = System::Drawing::Point(83, 193);
			this->botonConsultarProductosSuperVendedor->Name = L"botonConsultarProductosSuperVendedor";
			this->botonConsultarProductosSuperVendedor->Size = System::Drawing::Size(196, 23);
			this->botonConsultarProductosSuperVendedor->TabIndex = 3;
			this->botonConsultarProductosSuperVendedor->Text = L"Consultar productos de supermercado";
			this->botonConsultarProductosSuperVendedor->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botonConsultarProductosSuperVendedor->UseVisualStyleBackColor = true;
			// 
			// MenuVendedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 252);
			this->Controls->Add(this->botonConsultarProductosSuperVendedor);
			this->Controls->Add(this->botonConsultarDescuentosVendedor);
			this->Controls->Add(this->botonConsultarPrecioVendedor);
			this->Controls->Add(this->label1);
			this->Name = L"MenuVendedor";
			this->Text = L"MenuVendedor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
