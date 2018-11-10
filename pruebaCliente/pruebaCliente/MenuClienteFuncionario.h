#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuClienteFuncionario
	/// </summary>
	public ref class MenuClienteFuncionario : public System::Windows::Forms::Form
	{
	public:
		MenuClienteFuncionario(void)
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
		~MenuClienteFuncionario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonPrecioCF;
	private: System::Windows::Forms::Button^  botonConsultarDescuentosCF;
	private: System::Windows::Forms::Button^  botonConsultarProductosSuperCF;
	private: System::Windows::Forms::Button^  botonAgregarACarritoCF;
	private: System::Windows::Forms::Button^  botonFacturarCF;
	private: System::Windows::Forms::Button^  botonDescuentoExtraCF;
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
			this->botonPrecioCF = (gcnew System::Windows::Forms::Button());
			this->botonConsultarDescuentosCF = (gcnew System::Windows::Forms::Button());
			this->botonConsultarProductosSuperCF = (gcnew System::Windows::Forms::Button());
			this->botonAgregarACarritoCF = (gcnew System::Windows::Forms::Button());
			this->botonFacturarCF = (gcnew System::Windows::Forms::Button());
			this->botonDescuentoExtraCF = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(160, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu Cliente Funcionario";
			// 
			// botonPrecioCF
			// 
			this->botonPrecioCF->Location = System::Drawing::Point(53, 88);
			this->botonPrecioCF->Name = L"botonPrecioCF";
			this->botonPrecioCF->Size = System::Drawing::Size(197, 23);
			this->botonPrecioCF->TabIndex = 1;
			this->botonPrecioCF->Text = L"Consultar Precio de Producto";
			this->botonPrecioCF->UseVisualStyleBackColor = true;
			// 
			// botonConsultarDescuentosCF
			// 
			this->botonConsultarDescuentosCF->Location = System::Drawing::Point(53, 128);
			this->botonConsultarDescuentosCF->Name = L"botonConsultarDescuentosCF";
			this->botonConsultarDescuentosCF->Size = System::Drawing::Size(197, 23);
			this->botonConsultarDescuentosCF->TabIndex = 2;
			this->botonConsultarDescuentosCF->Text = L"Consultar Descuentos";
			this->botonConsultarDescuentosCF->UseVisualStyleBackColor = true;
			// 
			// botonConsultarProductosSuperCF
			// 
			this->botonConsultarProductosSuperCF->Location = System::Drawing::Point(52, 172);
			this->botonConsultarProductosSuperCF->Name = L"botonConsultarProductosSuperCF";
			this->botonConsultarProductosSuperCF->Size = System::Drawing::Size(197, 23);
			this->botonConsultarProductosSuperCF->TabIndex = 3;
			this->botonConsultarProductosSuperCF->Text = L"Consultar productos de Supermercado";
			this->botonConsultarProductosSuperCF->UseVisualStyleBackColor = true;
			// 
			// botonAgregarACarritoCF
			// 
			this->botonAgregarACarritoCF->Location = System::Drawing::Point(308, 88);
			this->botonAgregarACarritoCF->Name = L"botonAgregarACarritoCF";
			this->botonAgregarACarritoCF->Size = System::Drawing::Size(197, 23);
			this->botonAgregarACarritoCF->TabIndex = 4;
			this->botonAgregarACarritoCF->Text = L"Agregar a carrito";
			this->botonAgregarACarritoCF->UseVisualStyleBackColor = true;
			// 
			// botonFacturarCF
			// 
			this->botonFacturarCF->Location = System::Drawing::Point(308, 128);
			this->botonFacturarCF->Name = L"botonFacturarCF";
			this->botonFacturarCF->Size = System::Drawing::Size(197, 23);
			this->botonFacturarCF->TabIndex = 5;
			this->botonFacturarCF->Text = L"Facturar";
			this->botonFacturarCF->UseVisualStyleBackColor = true;
			// 
			// botonDescuentoExtraCF
			// 
			this->botonDescuentoExtraCF->Location = System::Drawing::Point(308, 172);
			this->botonDescuentoExtraCF->Name = L"botonDescuentoExtraCF";
			this->botonDescuentoExtraCF->Size = System::Drawing::Size(197, 23);
			this->botonDescuentoExtraCF->TabIndex = 6;
			this->botonDescuentoExtraCF->Text = L"Descuento extra 5% ";
			this->botonDescuentoExtraCF->UseVisualStyleBackColor = true;
			// 
			// MenuClienteFuncionario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 227);
			this->Controls->Add(this->botonDescuentoExtraCF);
			this->Controls->Add(this->botonFacturarCF);
			this->Controls->Add(this->botonAgregarACarritoCF);
			this->Controls->Add(this->botonConsultarProductosSuperCF);
			this->Controls->Add(this->botonConsultarDescuentosCF);
			this->Controls->Add(this->botonPrecioCF);
			this->Controls->Add(this->label1);
			this->Name = L"MenuClienteFuncionario";
			this->Text = L"MenuClienteFuncionario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
