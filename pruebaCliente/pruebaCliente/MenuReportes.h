#pragma once

namespace pruebaCliente {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuReportes
	/// </summary>
	public ref class MenuReportes : public System::Windows::Forms::Form
	{
	public:
		MenuReportes(void)
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
		~MenuReportes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  botonClienteQueMasCompro;
	protected:
	private: System::Windows::Forms::Button^  botonClienteQueMenosCompro;
	private: System::Windows::Forms::Button^  botonSuperMasVisitado;
	private: System::Windows::Forms::Button^  botonSuperMenosVisitado;
	private: System::Windows::Forms::Button^  botonComprasPorCliente;
	private: System::Windows::Forms::Button^  botonAdmMasTrabajo;
	private: System::Windows::Forms::Button^  botonAdmNoTrabajo;
	private: System::Windows::Forms::Button^  botonPromedioDePrecios;


	private: System::Windows::Forms::Button^  botonUltimosProdIngresados;
	private: System::Windows::Forms::Button^  botonUltimoProdModificado;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonEliminarCiudad;
	private: System::Windows::Forms::Button^  botonProductoMasVendido;
	private: System::Windows::Forms::Button^  botonProductoMenosVendido;
	private: System::Windows::Forms::Button^  botonPrecioMasAlto;
	private: System::Windows::Forms::Button^  botonPrecioMasBajo;
	private: System::Windows::Forms::Button^  botonDesviacion;
	private: System::Windows::Forms::Button^  botonReporteGrafos;

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
			this->botonClienteQueMasCompro = (gcnew System::Windows::Forms::Button());
			this->botonClienteQueMenosCompro = (gcnew System::Windows::Forms::Button());
			this->botonSuperMasVisitado = (gcnew System::Windows::Forms::Button());
			this->botonSuperMenosVisitado = (gcnew System::Windows::Forms::Button());
			this->botonComprasPorCliente = (gcnew System::Windows::Forms::Button());
			this->botonAdmMasTrabajo = (gcnew System::Windows::Forms::Button());
			this->botonAdmNoTrabajo = (gcnew System::Windows::Forms::Button());
			this->botonPromedioDePrecios = (gcnew System::Windows::Forms::Button());
			this->botonUltimosProdIngresados = (gcnew System::Windows::Forms::Button());
			this->botonUltimoProdModificado = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botonEliminarCiudad = (gcnew System::Windows::Forms::Button());
			this->botonProductoMasVendido = (gcnew System::Windows::Forms::Button());
			this->botonProductoMenosVendido = (gcnew System::Windows::Forms::Button());
			this->botonPrecioMasAlto = (gcnew System::Windows::Forms::Button());
			this->botonPrecioMasBajo = (gcnew System::Windows::Forms::Button());
			this->botonDesviacion = (gcnew System::Windows::Forms::Button());
			this->botonReporteGrafos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// botonClienteQueMasCompro
			// 
			this->botonClienteQueMasCompro->Location = System::Drawing::Point(74, 67);
			this->botonClienteQueMasCompro->Name = L"botonClienteQueMasCompro";
			this->botonClienteQueMasCompro->Size = System::Drawing::Size(179, 23);
			this->botonClienteQueMasCompro->TabIndex = 0;
			this->botonClienteQueMasCompro->Text = L"Cliente que más compró";
			this->botonClienteQueMasCompro->UseVisualStyleBackColor = true;
			// 
			// botonClienteQueMenosCompro
			// 
			this->botonClienteQueMenosCompro->Location = System::Drawing::Point(74, 105);
			this->botonClienteQueMenosCompro->Name = L"botonClienteQueMenosCompro";
			this->botonClienteQueMenosCompro->Size = System::Drawing::Size(179, 23);
			this->botonClienteQueMenosCompro->TabIndex = 1;
			this->botonClienteQueMenosCompro->Text = L"Cliente que menos compró";
			this->botonClienteQueMenosCompro->UseVisualStyleBackColor = true;
			// 
			// botonSuperMasVisitado
			// 
			this->botonSuperMasVisitado->Location = System::Drawing::Point(74, 148);
			this->botonSuperMasVisitado->Name = L"botonSuperMasVisitado";
			this->botonSuperMasVisitado->Size = System::Drawing::Size(179, 23);
			this->botonSuperMasVisitado->TabIndex = 2;
			this->botonSuperMasVisitado->Text = L"Supermercado más visitado";
			this->botonSuperMasVisitado->UseVisualStyleBackColor = true;
			this->botonSuperMasVisitado->Click += gcnew System::EventHandler(this, &MenuReportes::botonSuperMasVisitado_Click);
			// 
			// botonSuperMenosVisitado
			// 
			this->botonSuperMenosVisitado->Location = System::Drawing::Point(275, 67);
			this->botonSuperMenosVisitado->Name = L"botonSuperMenosVisitado";
			this->botonSuperMenosVisitado->Size = System::Drawing::Size(172, 23);
			this->botonSuperMenosVisitado->TabIndex = 3;
			this->botonSuperMenosVisitado->Text = L"Super menos visitado";
			this->botonSuperMenosVisitado->UseVisualStyleBackColor = true;
			// 
			// botonComprasPorCliente
			// 
			this->botonComprasPorCliente->Location = System::Drawing::Point(275, 105);
			this->botonComprasPorCliente->Name = L"botonComprasPorCliente";
			this->botonComprasPorCliente->Size = System::Drawing::Size(172, 23);
			this->botonComprasPorCliente->TabIndex = 4;
			this->botonComprasPorCliente->Text = L"Cantidad de compras por cliente";
			this->botonComprasPorCliente->UseVisualStyleBackColor = true;
			// 
			// botonAdmMasTrabajo
			// 
			this->botonAdmMasTrabajo->Location = System::Drawing::Point(275, 147);
			this->botonAdmMasTrabajo->Name = L"botonAdmMasTrabajo";
			this->botonAdmMasTrabajo->Size = System::Drawing::Size(172, 23);
			this->botonAdmMasTrabajo->TabIndex = 5;
			this->botonAdmMasTrabajo->Text = L"Administrador que más trabajó";
			this->botonAdmMasTrabajo->UseVisualStyleBackColor = true;
			// 
			// botonAdmNoTrabajo
			// 
			this->botonAdmNoTrabajo->Location = System::Drawing::Point(275, 188);
			this->botonAdmNoTrabajo->Name = L"botonAdmNoTrabajo";
			this->botonAdmNoTrabajo->Size = System::Drawing::Size(172, 23);
			this->botonAdmNoTrabajo->TabIndex = 6;
			this->botonAdmNoTrabajo->Text = L"Administrador que no trabajó";
			this->botonAdmNoTrabajo->UseVisualStyleBackColor = true;
			// 
			// botonPromedioDePrecios
			// 
			this->botonPromedioDePrecios->Location = System::Drawing::Point(74, 188);
			this->botonPromedioDePrecios->Name = L"botonPromedioDePrecios";
			this->botonPromedioDePrecios->Size = System::Drawing::Size(179, 23);
			this->botonPromedioDePrecios->TabIndex = 7;
			this->botonPromedioDePrecios->Text = L"Promedios De Precios";
			this->botonPromedioDePrecios->UseVisualStyleBackColor = true;
			// 
			// botonUltimosProdIngresados
			// 
			this->botonUltimosProdIngresados->Location = System::Drawing::Point(74, 232);
			this->botonUltimosProdIngresados->Name = L"botonUltimosProdIngresados";
			this->botonUltimosProdIngresados->Size = System::Drawing::Size(179, 23);
			this->botonUltimosProdIngresados->TabIndex = 8;
			this->botonUltimosProdIngresados->Text = L"Ultimos dos productos ingresados";
			this->botonUltimosProdIngresados->UseVisualStyleBackColor = true;
			// 
			// botonUltimoProdModificado
			// 
			this->botonUltimoProdModificado->Location = System::Drawing::Point(275, 232);
			this->botonUltimoProdModificado->Name = L"botonUltimoProdModificado";
			this->botonUltimoProdModificado->Size = System::Drawing::Size(172, 23);
			this->botonUltimoProdModificado->TabIndex = 9;
			this->botonUltimoProdModificado->Text = L"Ultimo producto Modificado";
			this->botonUltimoProdModificado->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Reportes";
			// 
			// botonEliminarCiudad
			// 
			this->botonEliminarCiudad->Location = System::Drawing::Point(74, 273);
			this->botonEliminarCiudad->Name = L"botonEliminarCiudad";
			this->botonEliminarCiudad->Size = System::Drawing::Size(179, 23);
			this->botonEliminarCiudad->TabIndex = 11;
			this->botonEliminarCiudad->Text = L"Eliminar Ciudad \?\?";
			this->botonEliminarCiudad->UseVisualStyleBackColor = true;
			// 
			// botonProductoMasVendido
			// 
			this->botonProductoMasVendido->Location = System::Drawing::Point(275, 272);
			this->botonProductoMasVendido->Name = L"botonProductoMasVendido";
			this->botonProductoMasVendido->Size = System::Drawing::Size(172, 23);
			this->botonProductoMasVendido->TabIndex = 12;
			this->botonProductoMasVendido->Text = L"Producto más vendido ";
			this->botonProductoMasVendido->UseVisualStyleBackColor = true;
			// 
			// botonProductoMenosVendido
			// 
			this->botonProductoMenosVendido->Location = System::Drawing::Point(275, 316);
			this->botonProductoMenosVendido->Name = L"botonProductoMenosVendido";
			this->botonProductoMenosVendido->Size = System::Drawing::Size(172, 23);
			this->botonProductoMenosVendido->TabIndex = 13;
			this->botonProductoMenosVendido->Text = L"Producto Menos Vendido";
			this->botonProductoMenosVendido->UseVisualStyleBackColor = true;
			// 
			// botonPrecioMasAlto
			// 
			this->botonPrecioMasAlto->Location = System::Drawing::Point(74, 316);
			this->botonPrecioMasAlto->Name = L"botonPrecioMasAlto";
			this->botonPrecioMasAlto->Size = System::Drawing::Size(179, 23);
			this->botonPrecioMasAlto->TabIndex = 14;
			this->botonPrecioMasAlto->Text = L"Producto con precio mas alto";
			this->botonPrecioMasAlto->UseVisualStyleBackColor = true;
			// 
			// botonPrecioMasBajo
			// 
			this->botonPrecioMasBajo->Location = System::Drawing::Point(74, 353);
			this->botonPrecioMasBajo->Name = L"botonPrecioMasBajo";
			this->botonPrecioMasBajo->Size = System::Drawing::Size(179, 23);
			this->botonPrecioMasBajo->TabIndex = 15;
			this->botonPrecioMasBajo->Text = L"Producto con Precio Mas Bajo";
			this->botonPrecioMasBajo->UseVisualStyleBackColor = true;
			// 
			// botonDesviacion
			// 
			this->botonDesviacion->Location = System::Drawing::Point(275, 352);
			this->botonDesviacion->Name = L"botonDesviacion";
			this->botonDesviacion->Size = System::Drawing::Size(172, 23);
			this->botonDesviacion->TabIndex = 16;
			this->botonDesviacion->Text = L"Desviación estánda de precios";
			this->botonDesviacion->UseVisualStyleBackColor = true;
			// 
			// botonReporteGrafos
			// 
			this->botonReporteGrafos->Location = System::Drawing::Point(74, 394);
			this->botonReporteGrafos->Name = L"botonReporteGrafos";
			this->botonReporteGrafos->Size = System::Drawing::Size(179, 23);
			this->botonReporteGrafos->TabIndex = 17;
			this->botonReporteGrafos->Text = L"Reporte de grafos";
			this->botonReporteGrafos->UseVisualStyleBackColor = true;
			// 
			// MenuReportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 441);
			this->Controls->Add(this->botonReporteGrafos);
			this->Controls->Add(this->botonDesviacion);
			this->Controls->Add(this->botonPrecioMasBajo);
			this->Controls->Add(this->botonPrecioMasAlto);
			this->Controls->Add(this->botonProductoMenosVendido);
			this->Controls->Add(this->botonProductoMasVendido);
			this->Controls->Add(this->botonEliminarCiudad);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->botonUltimoProdModificado);
			this->Controls->Add(this->botonUltimosProdIngresados);
			this->Controls->Add(this->botonPromedioDePrecios);
			this->Controls->Add(this->botonAdmNoTrabajo);
			this->Controls->Add(this->botonAdmMasTrabajo);
			this->Controls->Add(this->botonComprasPorCliente);
			this->Controls->Add(this->botonSuperMenosVisitado);
			this->Controls->Add(this->botonSuperMasVisitado);
			this->Controls->Add(this->botonClienteQueMenosCompro);
			this->Controls->Add(this->botonClienteQueMasCompro);
			this->Name = L"MenuReportes";
			this->Text = L"MenuReportes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botonSuperMasVisitado_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
