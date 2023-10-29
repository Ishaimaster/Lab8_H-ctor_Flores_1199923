#pragma once
#include "Busqueda.h"
#include <iostream>
#include <ctime>
#include "StopWatch.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Cuadrado.h"

namespace Version2Lab8HectorFlores1199923 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ Ejercicio1;

	private: System::Windows::Forms::Label^ Pfallo;
	private: System::Windows::Forms::Label^ Pexito;
	private: System::Windows::Forms::Label^ bfallo;
	private: System::Windows::Forms::Label^ bexito;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Tiempo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ Ejercicio2;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ Ingresar;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dgvPol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Poligono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Area;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Perimetro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Mostrar;









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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Ejercicio1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tiempo = (gcnew System::Windows::Forms::Label());
			this->Pfallo = (gcnew System::Windows::Forms::Label());
			this->Pexito = (gcnew System::Windows::Forms::Label());
			this->bfallo = (gcnew System::Windows::Forms::Label());
			this->bexito = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Ejercicio2 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->dgvPol = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Poligono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Area = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Perimetro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Ingresar = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Mostrar = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->Ejercicio1->SuspendLayout();
			this->Ejercicio2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPol))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Ejercicio1);
			this->tabControl1->Controls->Add(this->Ejercicio2);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(800, 468);
			this->tabControl1->TabIndex = 0;
			// 
			// Ejercicio1
			// 
			this->Ejercicio1->Controls->Add(this->button3);
			this->Ejercicio1->Controls->Add(this->label1);
			this->Ejercicio1->Controls->Add(this->Tiempo);
			this->Ejercicio1->Controls->Add(this->Pfallo);
			this->Ejercicio1->Controls->Add(this->Pexito);
			this->Ejercicio1->Controls->Add(this->bfallo);
			this->Ejercicio1->Controls->Add(this->bexito);
			this->Ejercicio1->Controls->Add(this->label5);
			this->Ejercicio1->Controls->Add(this->label4);
			this->Ejercicio1->Controls->Add(this->label3);
			this->Ejercicio1->Controls->Add(this->label2);
			this->Ejercicio1->Controls->Add(this->button1);
			this->Ejercicio1->Controls->Add(this->label6);
			this->Ejercicio1->Location = System::Drawing::Point(4, 25);
			this->Ejercicio1->Margin = System::Windows::Forms::Padding(4);
			this->Ejercicio1->Name = L"Ejercicio1";
			this->Ejercicio1->Padding = System::Windows::Forms::Padding(4);
			this->Ejercicio1->Size = System::Drawing::Size(792, 439);
			this->Ejercicio1->TabIndex = 0;
			this->Ejercicio1->Text = L"Ejercicio 1";
			this->Ejercicio1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(517, 289);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 39);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Reinicio";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 382);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 22);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Tiempo de ejecucion:";
			this->label1->Visible = false;
			// 
			// Tiempo
			// 
			this->Tiempo->AutoSize = true;
			this->Tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tiempo->Location = System::Drawing::Point(443, 382);
			this->Tiempo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Tiempo->Name = L"Tiempo";
			this->Tiempo->Size = System::Drawing::Size(58, 22);
			this->Tiempo->TabIndex = 21;
			this->Tiempo->Text = L"label1";
			this->Tiempo->Visible = false;
			// 
			// Pfallo
			// 
			this->Pfallo->AutoSize = true;
			this->Pfallo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pfallo->Location = System::Drawing::Point(271, 318);
			this->Pfallo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Pfallo->Name = L"Pfallo";
			this->Pfallo->Size = System::Drawing::Size(58, 22);
			this->Pfallo->TabIndex = 19;
			this->Pfallo->Text = L"label1";
			this->Pfallo->Visible = false;
			// 
			// Pexito
			// 
			this->Pexito->AutoSize = true;
			this->Pexito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pexito->Location = System::Drawing::Point(271, 271);
			this->Pexito->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Pexito->Name = L"Pexito";
			this->Pexito->Size = System::Drawing::Size(58, 22);
			this->Pexito->TabIndex = 18;
			this->Pexito->Text = L"label1";
			this->Pexito->Visible = false;
			// 
			// bfallo
			// 
			this->bfallo->AutoSize = true;
			this->bfallo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bfallo->Location = System::Drawing::Point(400, 214);
			this->bfallo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bfallo->Name = L"bfallo";
			this->bfallo->Size = System::Drawing::Size(58, 22);
			this->bfallo->TabIndex = 17;
			this->bfallo->Text = L"label1";
			this->bfallo->Visible = false;
			// 
			// bexito
			// 
			this->bexito->AutoSize = true;
			this->bexito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bexito->Location = System::Drawing::Point(400, 150);
			this->bexito->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bexito->Name = L"bexito";
			this->bexito->Size = System::Drawing::Size(58, 22);
			this->bexito->TabIndex = 16;
			this->bexito->Text = L"label1";
			this->bexito->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 318);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 22);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Porcentaje de fallo: ";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 271);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Porcentaje de exito: ";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 214);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 22);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Número de busquedas fallidas: ";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 150);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Número de busquedas con exito: ";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(305, 240);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(256, 53);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 36);
			this->label6->TabIndex = 10;
			this->label6->Text = L"BUSQUEDA";
			// 
			// Ejercicio2
			// 
			this->Ejercicio2->Controls->Add(this->panel1);
			this->Ejercicio2->Controls->Add(this->Ingresar);
			this->Ejercicio2->Controls->Add(this->textBox3);
			this->Ejercicio2->Controls->Add(this->label12);
			this->Ejercicio2->Controls->Add(this->textBox2);
			this->Ejercicio2->Controls->Add(this->label11);
			this->Ejercicio2->Controls->Add(this->textBox1);
			this->Ejercicio2->Controls->Add(this->comboBox2);
			this->Ejercicio2->Controls->Add(this->label9);
			this->Ejercicio2->Controls->Add(this->label10);
			this->Ejercicio2->Controls->Add(this->comboBox1);
			this->Ejercicio2->Controls->Add(this->label8);
			this->Ejercicio2->Controls->Add(this->label7);
			this->Ejercicio2->Controls->Add(this->Mostrar);
			this->Ejercicio2->Location = System::Drawing::Point(4, 25);
			this->Ejercicio2->Margin = System::Windows::Forms::Padding(4);
			this->Ejercicio2->Name = L"Ejercicio2";
			this->Ejercicio2->Padding = System::Windows::Forms::Padding(4);
			this->Ejercicio2->Size = System::Drawing::Size(792, 439);
			this->Ejercicio2->TabIndex = 1;
			this->Ejercicio2->Text = L"Ejercicio 2";
			this->Ejercicio2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Back);
			this->panel1->Controls->Add(this->dgvPol);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(796, 443);
			this->panel1->TabIndex = 26;
			this->panel1->Visible = false;
			// 
			// Back
			// 
			this->Back->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(342, 333);
			this->Back->Margin = System::Windows::Forms::Padding(4);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(107, 39);
			this->Back->TabIndex = 28;
			this->Back->Text = L"Regresar";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &MyForm::Back_Click);
			// 
			// dgvPol
			// 
			this->dgvPol->AllowUserToAddRows = false;
			this->dgvPol->AllowUserToDeleteRows = false;
			this->dgvPol->AllowUserToOrderColumns = true;
			this->dgvPol->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPol->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dgvPol->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPol->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Poligono,
					this->Area, this->Perimetro, this->Color
			});
			this->dgvPol->Location = System::Drawing::Point(29, 65);
			this->dgvPol->Name = L"dgvPol";
			this->dgvPol->ReadOnly = true;
			this->dgvPol->RowHeadersWidth = 51;
			this->dgvPol->RowTemplate->Height = 24;
			this->dgvPol->Size = System::Drawing::Size(738, 261);
			this->dgvPol->TabIndex = 13;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Poligono
			// 
			this->Poligono->HeaderText = L"Tipo de Poligono";
			this->Poligono->MinimumWidth = 6;
			this->Poligono->Name = L"Poligono";
			this->Poligono->ReadOnly = true;
			// 
			// Area
			// 
			this->Area->HeaderText = L"Area del Poligono";
			this->Area->MinimumWidth = 6;
			this->Area->Name = L"Area";
			this->Area->ReadOnly = true;
			// 
			// Perimetro
			// 
			this->Perimetro->HeaderText = L"Perimetro del Poligono";
			this->Perimetro->MinimumWidth = 6;
			this->Perimetro->Name = L"Perimetro";
			this->Perimetro->ReadOnly = true;
			// 
			// Color
			// 
			this->Color->HeaderText = L"Color";
			this->Color->MinimumWidth = 6;
			this->Color->Name = L"Color";
			this->Color->ReadOnly = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(305, 26);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(179, 36);
			this->label13->TabIndex = 12;
			this->label13->Text = L"POLIGONO";
			// 
			// Ingresar
			// 
			this->Ingresar->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingresar->Location = System::Drawing::Point(254, 333);
			this->Ingresar->Margin = System::Windows::Forms::Padding(4);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(107, 39);
			this->Ingresar->TabIndex = 24;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = true;
			this->Ingresar->Click += gcnew System::EventHandler(this, &MyForm::Ingresar_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(361, 286);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 23;
			this->textBox3->Visible = false;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(293, 284);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 22);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Lado:";
			this->label12->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(363, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 21;
			this->textBox2->Visible = false;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(295, 234);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 22);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Ancho:";
			this->label11->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(363, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 19;
			this->textBox1->Visible = false;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Azul", L"Naranja", L"Amarillo", L"Rojo", L"Morado",
					L"Verde", L"Celeste", L"Rosado", L"Gris", L"Cafe", L"Lila", L"Blanco", L"Beige", L"Cian", L"Violeta"
			});
			this->comboBox2->Location = System::Drawing::Point(363, 137);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(293, 135);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 22);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Color: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(295, 185);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 22);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Largo:";
			this->label10->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Triangulo", L"Cuadrado", L"Rectangulo" });
			this->comboBox1->Location = System::Drawing::Point(363, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(205, 85);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 22);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Tipo de Poligono:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(305, 26);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(179, 36);
			this->label7->TabIndex = 11;
			this->label7->Text = L"POLIGONO";
			// 
			// Mostrar
			// 
			this->Mostrar->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mostrar->Location = System::Drawing::Point(448, 333);
			this->Mostrar->Margin = System::Windows::Forms::Padding(4);
			this->Mostrar->Name = L"Mostrar";
			this->Mostrar->Size = System::Drawing::Size(107, 39);
			this->Mostrar->TabIndex = 27;
			this->Mostrar->Text = L"Lista ";
			this->Mostrar->UseVisualStyleBackColor = true;
			this->Mostrar->Visible = false;
			this->Mostrar->Click += gcnew System::EventHandler(this, &MyForm::Mostrar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 470);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->Ejercicio1->ResumeLayout(false);
			this->Ejercicio1->PerformLayout();
			this->Ejercicio2->ResumeLayout(false);
			this->Ejercicio2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPol))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Busqueda miobjeto;

		StopWatch Time;

		button1->Visible = false;
		Tiempo->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		bexito->Visible = true;
		bfallo->Visible = true;
		Pexito->Visible = true;
		Pfallo->Visible = true;
		button3->Visible = true;

		int miarray[100];
		int max = 200;
		srand(time(0));
		int busqueda[50];

		int contadorFa = 0;

		int random;

		for (int i = 0; i < 100; i++)
		{
			 random = rand() % max;
			 miarray[i] = random;
		}



		for (int j = 0; j < 50; j++)
		{

			random = rand() % max;
			busqueda[j] = random;

		}

		Time.start();

		int contadorEx = miobjeto.Buscador(miarray, busqueda);

		while (contadorEx + contadorFa != 50)
		{
			contadorFa++;
		}


		int PorcentajeExito = (Convert::ToDouble(contadorEx) / 50) * 100;

		int PorcentajeFallido = 100 - PorcentajeExito;


		bexito->Text = Convert::ToString(contadorEx);
		bfallo->Text = Convert::ToString(contadorFa);

		Pexito->Text = Convert::ToString(PorcentajeExito) + " %";
		Pfallo->Text = Convert::ToString(PorcentajeFallido) + " %";

		Time.stop();

		double ejecucion = Time.elapsed_time();

		Tiempo->Text = Convert::ToString(ejecucion) + " ms";


	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	button1->Visible = true;
	Tiempo->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	bexito->Visible = false;
	bfallo->Visible = false;
	Pexito->Visible = false;
	Pfallo->Visible = false;
	button3->Visible = false;
}
private: System::Void Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {

	int n; 
	double area, perimetro, id;

	if (comboBox1->Text == "Triangulo")
	{
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || comboBox2->Text == "")
		{

			MessageBox::Show("Debe llenar todas las casillas", "INFORMACION INCOMPLETA", MessageBoxButtons::OK, MessageBoxIcon::Error);

			return;
		}
		else
		{
			n = dgvPol->Rows->Add();

			Triangulo^ Tri = gcnew Triangulo(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));

			area = Tri->GetArea();
			perimetro = Tri->GetPerimetro();
			id = Tri->PoligonoID;

			dgvPol->Rows[n]->Cells[0]->Value = Convert::ToString(id);
			dgvPol->Rows[n]->Cells[1]->Value = comboBox1->Text;
			dgvPol->Rows[n]->Cells[2]->Value = Convert::ToString(area) + " u^2";
			dgvPol->Rows[n]->Cells[3]->Value = Convert::ToString(perimetro) + " u^2";
			dgvPol->Rows[n]->Cells[4]->Value = comboBox2->Text;
		}
	}
	else if (comboBox1->Text == "Rectangulo")
	{	
		label10->Text = "Largo:";
		label11->Text = "Ancho";

		if (textBox1->Text == "" || textBox2->Text == "" ||comboBox2->Text == "" )
		{
			MessageBox::Show("Debe llenar todas las casillas", "INFORMACION INCOMPLETA", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		
		}else
		{
			n = dgvPol->Rows->Add();

			Rectangulo^ Rect = gcnew Rectangulo(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text));
		
			area = Rect->GetArea();
			perimetro = Rect->GetPerimetro();
			id = Rect->PoligonoID;

			dgvPol->Rows[n]->Cells[0]->Value = Convert::ToString(id);
			dgvPol->Rows[n]->Cells[1]->Value = comboBox1->Text;
			dgvPol->Rows[n]->Cells[2]->Value = Convert::ToString(area) + " u^2";
			dgvPol->Rows[n]->Cells[3]->Value = Convert::ToString(perimetro) +  " u^2" ;
			dgvPol->Rows[n]->Cells[4]->Value = comboBox2->Text;

		}
	}
	else
	{
		label10->Text = "Lado:";
		
		if (textBox1->Text == "" || comboBox2->Text == "")
		{
			MessageBox::Show("Debe llenar todas las casillas", "INFORMACION INCOMPLETA", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else
		{
			n = dgvPol->Rows->Add();

			Cuadrado^ Cuad = gcnew Cuadrado(Convert::ToDouble(textBox1->Text));

			area = Cuad->GetArea();
			perimetro = Cuad->GetPerimetro();
			id = Cuad->PoligonoID;

			dgvPol->Rows[n]->Cells[0]->Value = Convert::ToString(id);
			dgvPol->Rows[n]->Cells[1]->Value = comboBox1->Text;
			dgvPol->Rows[n]->Cells[2]->Value = Convert::ToString(area) + " u^2";
			dgvPol->Rows[n]->Cells[3]->Value = Convert::ToString(perimetro) + " u^2";
			dgvPol->Rows[n]->Cells[4]->Value = comboBox2->Text;
		}


	}

	
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	comboBox2->Text = "";
	Mostrar->Visible = true;
	comboBox2->SelectedIndex = -1;

	

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (comboBox1->Text == "Triangulo")
	{
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;

		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;

		label10->Text = "Base:";
		label11->Text = "Altura";

	}
	else if (comboBox1->Text == "Rectangulo")
	{
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = false;

		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = false;

		label10->Text = "Largo:";
		label11->Text = "Ancho";

	}else
	{
		label10->Visible = true;
		label11->Visible = false;
		label12->Visible = false;

		textBox1->Visible = true;
		textBox2->Visible = false;
		textBox3->Visible = false;
	
		label10->Text = "Lado:";
	}


}
private: System::Void Mostrar_Click(System::Object^ sender, System::EventArgs^ e) {

	panel1->Visible = true;

}
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {

	panel1->Visible = false;
}



private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true; 
	}

}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true; 
	}

}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
};
}
