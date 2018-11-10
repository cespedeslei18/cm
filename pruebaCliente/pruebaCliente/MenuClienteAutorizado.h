#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuClienteAutorizado
	/// </summary>
	public ref class MenuClienteAutorizado : public System::Windows::Forms::Form
	{
	public:
		MenuClienteAutorizado(void)
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
		~MenuClienteAutorizado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonConsultarDescuento;
	private: System::Windows::Forms::Button^  botonConsultarPrecio;
	private: System::Windows::Forms::Button^  botonConsultarProductosSuper;
	private: System::Windows::Forms::Button^  botonAgregarACarrito;
	private: System::Windows::Forms::Button^  botonFacturar;
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
			this->botonConsultarDescuento = (gcnew System::Windows::Forms::Button());
			this->botonConsultarPrecio = (gcnew System::Windows::Forms::Button());
			this->botonConsultarProductosSuper = (gcnew System::Windows::Forms::Button());
			this->botonAgregarACarrito = (gcnew System::Windows::Forms::Button());
			this->botonFacturar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(194, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu Cliente ";
			this->label1->Click += gcnew System::EventHandler(this, &MenuClienteAutorizado::label1_Click);
			// 
			// botonConsultarDescuento
			// 
			this->botonConsultarDescuento->Location = System::Drawing::Point(34, 110);
			this->botonConsultarDescuento->Name = L"botonConsultarDescuento";
			this->botonConsultarDescuento->Size = System::Drawing::Size(200, 23);
			this->botonConsultarDescuento->TabIndex = 1;
			this->botonConsultarDescuento->Text = L"Consultar Descuento";
			this->botonConsultarDescuento->UseVisualStyleBackColor = true;
			// 
			// botonConsultarPrecio
			// 
			this->botonConsultarPrecio->Location = System::Drawing::Point(34, 160);
			this->botonConsultarPrecio->Name = L"botonConsultarPrecio";
			this->botonConsultarPrecio->Size = System::Drawing::Size(200, 23);
			this->botonConsultarPrecio->TabIndex = 2;
			this->botonConsultarPrecio->Text = L"Consultar Precio de Producto";
			this->botonConsultarPrecio->UseVisualStyleBackColor = true;
			// 
			// botonConsultarProductosSuper
			// 
			this->botonConsultarProductosSuper->Location = System::Drawing::Point(34, 201);
			this->botonConsultarProductosSuper->Name = L"botonConsultarProductosSuper";
			this->botonConsultarProductosSuper->Size = System::Drawing::Size(200, 23);
			this->botonConsultarProductosSuper->TabIndex = 3;
			this->botonConsultarProductosSuper->Text = L"Consultar Productos de Supermercado";
			this->botonConsultarProductosSuper->UseVisualStyleBackColor = true;
			// 
			// botonAgregarACarrito
			// 
			this->botonAgregarACarrito->Location = System::Drawing::Point(305, 110);
			this->botonAgregarACarrito->Name = L"botonAgregarACarrito";
			this->botonAgregarACarrito->Size = System::Drawing::Size(200, 23);
			this->botonAgregarACarrito->TabIndex = 4;
			this->botonAgregarACarrito->Text = L"Agregar a carrito";
			this->botonAgregarACarrito->UseVisualStyleBackColor = true;
			// 
			// botonFacturar
			// 
			this->botonFacturar->Location = System::Drawing::Point(305, 160);
			this->botonFacturar->Name = L"botonFacturar";
			this->botonFacturar->Size = System::Drawing::Size(200, 23);
			this->botonFacturar->TabIndex = 5;
			this->botonFacturar->Text = L"Facturar";
			this->botonFacturar->UseVisualStyleBackColor = true;
			// 
			// MenuClienteAutorizado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 269);
			this->Controls->Add(this->botonFacturar);
			this->Controls->Add(this->botonAgregarACarrito);
			this->Controls->Add(this->botonConsultarProductosSuper);
			this->Controls->Add(this->botonConsultarPrecio);
			this->Controls->Add(this->botonConsultarDescuento);
			this->Controls->Add(this->label1);
			this->Name = L"MenuClienteAutorizado";
			this->Text = L"MenuClienteAutorizado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
