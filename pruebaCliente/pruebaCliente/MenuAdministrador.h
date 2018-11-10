#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuAdministrador
	/// </summary>
	public ref class MenuAdministrador : public System::Windows::Forms::Form
	{
	public:
		MenuAdministrador(void)
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
		~MenuAdministrador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  botonConsultarDescuentosAdm;
	protected:
	private: System::Windows::Forms::Button^  botonConsultarPrecioAdm;
	private: System::Windows::Forms::Button^  botonConsultarProductosSuperAdm;
	private: System::Windows::Forms::Button^  botonRegistarClientes;
	private: System::Windows::Forms::Button^  botonReportes;
	private: System::Windows::Forms::Button^  botoModificarProducto;
	private: System::Windows::Forms::Button^  botonEliminarProdcto;
	private: System::Windows::Forms::Button^  botonAgregarProducto;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonEstudioDeSuper;

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
			this->botonConsultarDescuentosAdm = (gcnew System::Windows::Forms::Button());
			this->botonConsultarPrecioAdm = (gcnew System::Windows::Forms::Button());
			this->botonConsultarProductosSuperAdm = (gcnew System::Windows::Forms::Button());
			this->botonRegistarClientes = (gcnew System::Windows::Forms::Button());
			this->botonReportes = (gcnew System::Windows::Forms::Button());
			this->botoModificarProducto = (gcnew System::Windows::Forms::Button());
			this->botonEliminarProdcto = (gcnew System::Windows::Forms::Button());
			this->botonAgregarProducto = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botonEstudioDeSuper = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// botonConsultarDescuentosAdm
			// 
			this->botonConsultarDescuentosAdm->Location = System::Drawing::Point(61, 77);
			this->botonConsultarDescuentosAdm->Name = L"botonConsultarDescuentosAdm";
			this->botonConsultarDescuentosAdm->Size = System::Drawing::Size(171, 23);
			this->botonConsultarDescuentosAdm->TabIndex = 0;
			this->botonConsultarDescuentosAdm->Text = L"Consultar Descuentos";
			this->botonConsultarDescuentosAdm->UseVisualStyleBackColor = true;
			// 
			// botonConsultarPrecioAdm
			// 
			this->botonConsultarPrecioAdm->Location = System::Drawing::Point(61, 175);
			this->botonConsultarPrecioAdm->Name = L"botonConsultarPrecioAdm";
			this->botonConsultarPrecioAdm->Size = System::Drawing::Size(171, 23);
			this->botonConsultarPrecioAdm->TabIndex = 1;
			this->botonConsultarPrecioAdm->Text = L"Consultar precio de producto";
			this->botonConsultarPrecioAdm->UseVisualStyleBackColor = true;
			// 
			// botonConsultarProductosSuperAdm
			// 
			this->botonConsultarProductosSuperAdm->Location = System::Drawing::Point(61, 129);
			this->botonConsultarProductosSuperAdm->Name = L"botonConsultarProductosSuperAdm";
			this->botonConsultarProductosSuperAdm->Size = System::Drawing::Size(171, 23);
			this->botonConsultarProductosSuperAdm->TabIndex = 2;
			this->botonConsultarProductosSuperAdm->Text = L"Consultar productos de un super";
			this->botonConsultarProductosSuperAdm->UseVisualStyleBackColor = true;
			// 
			// botonRegistarClientes
			// 
			this->botonRegistarClientes->Location = System::Drawing::Point(61, 215);
			this->botonRegistarClientes->Name = L"botonRegistarClientes";
			this->botonRegistarClientes->Size = System::Drawing::Size(171, 23);
			this->botonRegistarClientes->TabIndex = 3;
			this->botonRegistarClientes->Text = L"Registrar clientes";
			this->botonRegistarClientes->UseVisualStyleBackColor = true;
			// 
			// botonReportes
			// 
			this->botonReportes->Location = System::Drawing::Point(302, 77);
			this->botonReportes->Name = L"botonReportes";
			this->botonReportes->Size = System::Drawing::Size(171, 23);
			this->botonReportes->TabIndex = 4;
			this->botonReportes->Text = L"Reportes";
			this->botonReportes->UseVisualStyleBackColor = true;
			// 
			// botoModificarProducto
			// 
			this->botoModificarProducto->Location = System::Drawing::Point(302, 175);
			this->botoModificarProducto->Name = L"botoModificarProducto";
			this->botoModificarProducto->Size = System::Drawing::Size(171, 23);
			this->botoModificarProducto->TabIndex = 5;
			this->botoModificarProducto->Text = L"Modificar produucto";
			this->botoModificarProducto->UseVisualStyleBackColor = true;
			// 
			// botonEliminarProdcto
			// 
			this->botonEliminarProdcto->Location = System::Drawing::Point(302, 215);
			this->botonEliminarProdcto->Name = L"botonEliminarProdcto";
			this->botonEliminarProdcto->Size = System::Drawing::Size(171, 23);
			this->botonEliminarProdcto->TabIndex = 6;
			this->botonEliminarProdcto->Text = L"Eliminar producto";
			this->botonEliminarProdcto->UseVisualStyleBackColor = true;
			// 
			// botonAgregarProducto
			// 
			this->botonAgregarProducto->Location = System::Drawing::Point(302, 128);
			this->botonAgregarProducto->Name = L"botonAgregarProducto";
			this->botonAgregarProducto->Size = System::Drawing::Size(171, 23);
			this->botonAgregarProducto->TabIndex = 7;
			this->botonAgregarProducto->Text = L"Agregar producto";
			this->botonAgregarProducto->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(164, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Menu Administrador";
			// 
			// botonEstudioDeSuper
			// 
			this->botonEstudioDeSuper->Location = System::Drawing::Point(61, 255);
			this->botonEstudioDeSuper->Name = L"botonEstudioDeSuper";
			this->botonEstudioDeSuper->Size = System::Drawing::Size(171, 23);
			this->botonEstudioDeSuper->TabIndex = 9;
			this->botonEstudioDeSuper->Text = L"Estudio de los super ";
			this->botonEstudioDeSuper->UseVisualStyleBackColor = true;
			// 
			// MenuAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 331);
			this->Controls->Add(this->botonEstudioDeSuper);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->botonAgregarProducto);
			this->Controls->Add(this->botonEliminarProdcto);
			this->Controls->Add(this->botoModificarProducto);
			this->Controls->Add(this->botonReportes);
			this->Controls->Add(this->botonRegistarClientes);
			this->Controls->Add(this->botonConsultarProductosSuperAdm);
			this->Controls->Add(this->botonConsultarPrecioAdm);
			this->Controls->Add(this->botonConsultarDescuentosAdm);
			this->Name = L"MenuAdministrador";
			this->Text = L"MenuAdministrador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
