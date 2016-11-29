#pragma once

namespace Boogle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for juego
	/// </summary>
	public ref class juego : public System::Windows::Forms::Form
	{
	public:
		juego(void)
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
		~juego()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  agregar;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  b11;
	private: System::Windows::Forms::Button^  b44;

	private: System::Windows::Forms::Button^  b43;

	private: System::Windows::Forms::Button^  b42;

	private: System::Windows::Forms::Button^  b41;


	private: System::Windows::Forms::Button^  b34;

	private: System::Windows::Forms::Button^  b33;

	private: System::Windows::Forms::Button^  b32;

	private: System::Windows::Forms::Button^  b31;

	private: System::Windows::Forms::Button^  b24;
	private: System::Windows::Forms::Button^  b23;
	private: System::Windows::Forms::Button^  b22;
	private: System::Windows::Forms::Button^  b21;
	private: System::Windows::Forms::Button^  b14;
	private: System::Windows::Forms::Button^  b13;
	private: System::Windows::Forms::Button^  b12;
	private: System::Windows::Forms::Button^  rotar;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  juegoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nuevoJuegoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resolverToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->agregar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->b44 = (gcnew System::Windows::Forms::Button());
			this->b43 = (gcnew System::Windows::Forms::Button());
			this->b42 = (gcnew System::Windows::Forms::Button());
			this->b41 = (gcnew System::Windows::Forms::Button());
			this->b34 = (gcnew System::Windows::Forms::Button());
			this->b33 = (gcnew System::Windows::Forms::Button());
			this->b32 = (gcnew System::Windows::Forms::Button());
			this->b31 = (gcnew System::Windows::Forms::Button());
			this->b24 = (gcnew System::Windows::Forms::Button());
			this->b23 = (gcnew System::Windows::Forms::Button());
			this->b22 = (gcnew System::Windows::Forms::Button());
			this->b21 = (gcnew System::Windows::Forms::Button());
			this->b14 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rotar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->juegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoJuegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resolverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(44, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 30);
			this->textBox1->TabIndex = 1;
			// 
			// agregar
			// 
			this->agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregar->Location = System::Drawing::Point(291, 54);
			this->agregar->Name = L"agregar";
			this->agregar->Size = System::Drawing::Size(103, 33);
			this->agregar->TabIndex = 2;
			this->agregar->Text = L"Agregar";
			this->agregar->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->b44);
			this->panel1->Controls->Add(this->b43);
			this->panel1->Controls->Add(this->b42);
			this->panel1->Controls->Add(this->b41);
			this->panel1->Controls->Add(this->b34);
			this->panel1->Controls->Add(this->b33);
			this->panel1->Controls->Add(this->b32);
			this->panel1->Controls->Add(this->b31);
			this->panel1->Controls->Add(this->b24);
			this->panel1->Controls->Add(this->b23);
			this->panel1->Controls->Add(this->b22);
			this->panel1->Controls->Add(this->b21);
			this->panel1->Controls->Add(this->b14);
			this->panel1->Controls->Add(this->b13);
			this->panel1->Controls->Add(this->b12);
			this->panel1->Controls->Add(this->b11);
			this->panel1->Location = System::Drawing::Point(40, 107);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 337);
			this->panel1->TabIndex = 3;
			// 
			// b44
			// 
			this->b44->BackColor = System::Drawing::Color::LightCoral;
			this->b44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b44->Location = System::Drawing::Point(255, 255);
			this->b44->Name = L"b44";
			this->b44->Size = System::Drawing::Size(78, 78);
			this->b44->TabIndex = 15;
			this->b44->Text = L"A";
			this->b44->UseVisualStyleBackColor = false;
			// 
			// b43
			// 
			this->b43->BackColor = System::Drawing::Color::LightCoral;
			this->b43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b43->Location = System::Drawing::Point(171, 255);
			this->b43->Name = L"b43";
			this->b43->Size = System::Drawing::Size(78, 78);
			this->b43->TabIndex = 14;
			this->b43->Text = L"A";
			this->b43->UseVisualStyleBackColor = false;
			// 
			// b42
			// 
			this->b42->BackColor = System::Drawing::Color::LightCoral;
			this->b42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b42->Location = System::Drawing::Point(87, 255);
			this->b42->Name = L"b42";
			this->b42->Size = System::Drawing::Size(78, 78);
			this->b42->TabIndex = 13;
			this->b42->Text = L"A";
			this->b42->UseVisualStyleBackColor = false;
			// 
			// b41
			// 
			this->b41->BackColor = System::Drawing::Color::LightCoral;
			this->b41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b41->Location = System::Drawing::Point(3, 255);
			this->b41->Name = L"b41";
			this->b41->Size = System::Drawing::Size(78, 78);
			this->b41->TabIndex = 12;
			this->b41->Text = L"A";
			this->b41->UseVisualStyleBackColor = false;
			// 
			// b34
			// 
			this->b34->BackColor = System::Drawing::Color::LightCoral;
			this->b34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b34->Location = System::Drawing::Point(255, 171);
			this->b34->Name = L"b34";
			this->b34->Size = System::Drawing::Size(78, 78);
			this->b34->TabIndex = 11;
			this->b34->Text = L"A";
			this->b34->UseVisualStyleBackColor = false;
			// 
			// b33
			// 
			this->b33->BackColor = System::Drawing::Color::LightCoral;
			this->b33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b33->Location = System::Drawing::Point(171, 171);
			this->b33->Name = L"b33";
			this->b33->Size = System::Drawing::Size(78, 78);
			this->b33->TabIndex = 10;
			this->b33->Text = L"A";
			this->b33->UseVisualStyleBackColor = false;
			// 
			// b32
			// 
			this->b32->BackColor = System::Drawing::Color::LightCoral;
			this->b32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b32->Location = System::Drawing::Point(87, 171);
			this->b32->Name = L"b32";
			this->b32->Size = System::Drawing::Size(78, 78);
			this->b32->TabIndex = 9;
			this->b32->Text = L"A";
			this->b32->UseVisualStyleBackColor = false;
			// 
			// b31
			// 
			this->b31->BackColor = System::Drawing::Color::LightCoral;
			this->b31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b31->Location = System::Drawing::Point(3, 171);
			this->b31->Name = L"b31";
			this->b31->Size = System::Drawing::Size(78, 78);
			this->b31->TabIndex = 8;
			this->b31->Text = L"A";
			this->b31->UseVisualStyleBackColor = false;
			// 
			// b24
			// 
			this->b24->BackColor = System::Drawing::Color::LightCoral;
			this->b24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b24->Location = System::Drawing::Point(255, 87);
			this->b24->Name = L"b24";
			this->b24->Size = System::Drawing::Size(78, 78);
			this->b24->TabIndex = 7;
			this->b24->Text = L"A";
			this->b24->UseVisualStyleBackColor = false;
			// 
			// b23
			// 
			this->b23->BackColor = System::Drawing::Color::LightCoral;
			this->b23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b23->Location = System::Drawing::Point(171, 87);
			this->b23->Name = L"b23";
			this->b23->Size = System::Drawing::Size(78, 78);
			this->b23->TabIndex = 6;
			this->b23->Text = L"A";
			this->b23->UseVisualStyleBackColor = false;
			// 
			// b22
			// 
			this->b22->BackColor = System::Drawing::Color::LightCoral;
			this->b22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b22->Location = System::Drawing::Point(87, 87);
			this->b22->Name = L"b22";
			this->b22->Size = System::Drawing::Size(78, 78);
			this->b22->TabIndex = 5;
			this->b22->Text = L"A";
			this->b22->UseVisualStyleBackColor = false;
			// 
			// b21
			// 
			this->b21->BackColor = System::Drawing::Color::LightCoral;
			this->b21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b21->Location = System::Drawing::Point(3, 87);
			this->b21->Name = L"b21";
			this->b21->Size = System::Drawing::Size(78, 78);
			this->b21->TabIndex = 4;
			this->b21->Text = L"A";
			this->b21->UseVisualStyleBackColor = false;
			// 
			// b14
			// 
			this->b14->BackColor = System::Drawing::Color::LightCoral;
			this->b14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b14->Location = System::Drawing::Point(255, 3);
			this->b14->Name = L"b14";
			this->b14->Size = System::Drawing::Size(78, 78);
			this->b14->TabIndex = 3;
			this->b14->Text = L"A";
			this->b14->UseVisualStyleBackColor = false;
			// 
			// b13
			// 
			this->b13->BackColor = System::Drawing::Color::LightCoral;
			this->b13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b13->Location = System::Drawing::Point(171, 3);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(78, 78);
			this->b13->TabIndex = 2;
			this->b13->Text = L"A";
			this->b13->UseVisualStyleBackColor = false;
			// 
			// b12
			// 
			this->b12->BackColor = System::Drawing::Color::LightCoral;
			this->b12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b12->Location = System::Drawing::Point(87, 3);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(78, 78);
			this->b12->TabIndex = 1;
			this->b12->Text = L"A";
			this->b12->UseVisualStyleBackColor = false;
			// 
			// b11
			// 
			this->b11->BackColor = System::Drawing::Color::LightCoral;
			this->b11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b11->Location = System::Drawing::Point(3, 3);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(78, 78);
			this->b11->TabIndex = 0;
			this->b11->Text = L"A";
			this->b11->UseVisualStyleBackColor = false;
			this->b11->Click += gcnew System::EventHandler(this, &juego::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 475);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Hecho por Fernanda y Mamfre  2016";
			// 
			// rotar
			// 
			this->rotar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rotar->Location = System::Drawing::Point(442, 387);
			this->rotar->Name = L"rotar";
			this->rotar->Size = System::Drawing::Size(190, 57);
			this->rotar->TabIndex = 5;
			this->rotar->Text = L"Rotar";
			this->rotar->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->juegoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(672, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// juegoToolStripMenuItem
			// 
			this->juegoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoJuegoToolStripMenuItem,
					this->resolverToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->juegoToolStripMenuItem->Name = L"juegoToolStripMenuItem";
			this->juegoToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->juegoToolStripMenuItem->Text = L"Juego";
			// 
			// nuevoJuegoToolStripMenuItem
			// 
			this->nuevoJuegoToolStripMenuItem->Name = L"nuevoJuegoToolStripMenuItem";
			this->nuevoJuegoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->nuevoJuegoToolStripMenuItem->Text = L"Nuevo Juego";
			// 
			// resolverToolStripMenuItem
			// 
			this->resolverToolStripMenuItem->Name = L"resolverToolStripMenuItem";
			this->resolverToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->resolverToolStripMenuItem->Text = L"Resolver";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(442, 107);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(190, 274);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(672, 501);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->rotar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->agregar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"juego";
			this->Text = L"Boggle";
			this->Load += gcnew System::EventHandler(this, &juego::juego_Load);
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void juego_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
