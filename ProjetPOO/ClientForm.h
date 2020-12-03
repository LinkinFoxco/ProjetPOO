#include "CL_svc_gestionClient.h"
#include "CL_CAD.h"
#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ IDClient;

	private: System::Windows::Forms::Label^ IDClientlbl;

	private: System::Windows::Forms::Label^ Nomlbl;


	private: System::Windows::Forms::TextBox^ NomClient;
	private: System::Windows::Forms::Label^ Prenomlbl;




	private: System::Windows::Forms::TextBox^ PrenomClient;



	private: System::Windows::Forms::Button^ LeftPlus;

	private: System::Windows::Forms::Button^ LeftButton;

	private: System::Windows::Forms::Button^ RightButton;
	private: System::Windows::Forms::Button^ RightPlus;



	private: System::Windows::Forms::Button^ Nouveau;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Enregistrer;
	private: System::Windows::Forms::TextBox^ MessageBox;





	private: System::Windows::Forms::Label^ MessageTxT;


	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int index;
		DataSet^ ds;
		String^ mode;
		NS_Svc::CL_svc_gestionClient^ processusClient;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ DateNaissancelbl;

	private: System::Windows::Forms::TextBox^ DateNaissance;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IDClient = (gcnew System::Windows::Forms::TextBox());
			this->IDClientlbl = (gcnew System::Windows::Forms::Label());
			this->Nomlbl = (gcnew System::Windows::Forms::Label());
			this->NomClient = (gcnew System::Windows::Forms::TextBox());
			this->Prenomlbl = (gcnew System::Windows::Forms::Label());
			this->PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->LeftPlus = (gcnew System::Windows::Forms::Button());
			this->LeftButton = (gcnew System::Windows::Forms::Button());
			this->RightButton = (gcnew System::Windows::Forms::Button());
			this->RightPlus = (gcnew System::Windows::Forms::Button());
			this->Nouveau = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Enregistrer = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->MessageTxT = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->DateNaissancelbl = (gcnew System::Windows::Forms::Label());
			this->DateNaissance = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(844, 19);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(396, 319);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dataGridView1_CellContentClick);
			// 
			// IDClient
			// 
			this->IDClient->Location = System::Drawing::Point(30, 61);
			this->IDClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->IDClient->Name = L"IDClient";
			this->IDClient->ReadOnly = true;
			this->IDClient->Size = System::Drawing::Size(264, 26);
			this->IDClient->TabIndex = 1;
			this->IDClient->TextChanged += gcnew System::EventHandler(this, &ClientForm::IDPersonne_TextChanged);
			// 
			// IDClientlbl
			// 
			this->IDClientlbl->AutoSize = true;
			this->IDClientlbl->Location = System::Drawing::Point(26, 39);
			this->IDClientlbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IDClientlbl->Name = L"IDClientlbl";
			this->IDClientlbl->Size = System::Drawing::Size(70, 20);
			this->IDClientlbl->TabIndex = 2;
			this->IDClientlbl->Text = L"ID Client";
			this->IDClientlbl->Click += gcnew System::EventHandler(this, &ClientForm::IDPersonneTxT_Click);
			// 
			// Nomlbl
			// 
			this->Nomlbl->AutoSize = true;
			this->Nomlbl->Location = System::Drawing::Point(26, 94);
			this->Nomlbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Nomlbl->Name = L"Nomlbl";
			this->Nomlbl->Size = System::Drawing::Size(42, 20);
			this->Nomlbl->TabIndex = 4;
			this->Nomlbl->Text = L"Nom";
			// 
			// NomClient
			// 
			this->NomClient->Location = System::Drawing::Point(29, 120);
			this->NomClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->NomClient->Name = L"NomClient";
			this->NomClient->Size = System::Drawing::Size(264, 26);
			this->NomClient->TabIndex = 3;
			this->NomClient->TextChanged += gcnew System::EventHandler(this, &ClientForm::NomPersonne_TextChanged);
			// 
			// Prenomlbl
			// 
			this->Prenomlbl->AutoSize = true;
			this->Prenomlbl->Location = System::Drawing::Point(29, 152);
			this->Prenomlbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Prenomlbl->Name = L"Prenomlbl";
			this->Prenomlbl->Size = System::Drawing::Size(64, 20);
			this->Prenomlbl->TabIndex = 6;
			this->Prenomlbl->Text = L"Prenom";
			// 
			// PrenomClient
			// 
			this->PrenomClient->Location = System::Drawing::Point(30, 179);
			this->PrenomClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->PrenomClient->Name = L"PrenomClient";
			this->PrenomClient->Size = System::Drawing::Size(264, 26);
			this->PrenomClient->TabIndex = 5;
			// 
			// LeftPlus
			// 
			this->LeftPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftPlus->Location = System::Drawing::Point(844, 375);
			this->LeftPlus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LeftPlus->Name = L"LeftPlus";
			this->LeftPlus->Size = System::Drawing::Size(90, 35);
			this->LeftPlus->TabIndex = 7;
			this->LeftPlus->Text = L"<<";
			this->LeftPlus->UseVisualStyleBackColor = true;
			this->LeftPlus->Click += gcnew System::EventHandler(this, &ClientForm::LeftPlus_Click);
			// 
			// LeftButton
			// 
			this->LeftButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftButton->Location = System::Drawing::Point(946, 375);
			this->LeftButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LeftButton->Name = L"LeftButton";
			this->LeftButton->Size = System::Drawing::Size(90, 35);
			this->LeftButton->TabIndex = 8;
			this->LeftButton->Text = L"<";
			this->LeftButton->UseVisualStyleBackColor = true;
			this->LeftButton->Click += gcnew System::EventHandler(this, &ClientForm::LeftButton_Click);
			// 
			// RightButton
			// 
			this->RightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightButton->Location = System::Drawing::Point(1045, 375);
			this->RightButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->RightButton->Name = L"RightButton";
			this->RightButton->Size = System::Drawing::Size(90, 35);
			this->RightButton->TabIndex = 9;
			this->RightButton->Text = L">";
			this->RightButton->UseVisualStyleBackColor = true;
			this->RightButton->Click += gcnew System::EventHandler(this, &ClientForm::RightButton_Click);
			// 
			// RightPlus
			// 
			this->RightPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightPlus->Location = System::Drawing::Point(1150, 375);
			this->RightPlus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->RightPlus->Name = L"RightPlus";
			this->RightPlus->Size = System::Drawing::Size(90, 35);
			this->RightPlus->TabIndex = 10;
			this->RightPlus->Text = L">>";
			this->RightPlus->UseVisualStyleBackColor = true;
			this->RightPlus->Click += gcnew System::EventHandler(this, &ClientForm::RightPlus_Click);
			// 
			// Nouveau
			// 
			this->Nouveau->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Nouveau->Location = System::Drawing::Point(489, 532);
			this->Nouveau->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Nouveau->Name = L"Nouveau";
			this->Nouveau->Size = System::Drawing::Size(180, 69);
			this->Nouveau->TabIndex = 12;
			this->Nouveau->Text = L"Nouveau";
			this->Nouveau->UseVisualStyleBackColor = true;
			this->Nouveau->Click += gcnew System::EventHandler(this, &ClientForm::Nouveau_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Modifier->Location = System::Drawing::Point(678, 532);
			this->Modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(180, 69);
			this->Modifier->TabIndex = 13;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &ClientForm::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Supprimer->Location = System::Drawing::Point(867, 532);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(180, 69);
			this->Supprimer->TabIndex = 14;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &ClientForm::Supprimer_Click);
			// 
			// Enregistrer
			// 
			this->Enregistrer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Enregistrer->Location = System::Drawing::Point(1056, 532);
			this->Enregistrer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Enregistrer->Name = L"Enregistrer";
			this->Enregistrer->Size = System::Drawing::Size(180, 69);
			this->Enregistrer->TabIndex = 15;
			this->Enregistrer->Text = L"Enregistrer";
			this->Enregistrer->UseVisualStyleBackColor = true;
			this->Enregistrer->Click += gcnew System::EventHandler(this, &ClientForm::Enregistrer_Click);
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(17, 706);
			this->MessageBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->ReadOnly = true;
			this->MessageBox->Size = System::Drawing::Size(1177, 165);
			this->MessageBox->TabIndex = 16;
			this->MessageBox->TextChanged += gcnew System::EventHandler(this, &ClientForm::MessageBox_TextChanged);
			// 
			// MessageTxT
			// 
			this->MessageTxT->AutoSize = true;
			this->MessageTxT->Location = System::Drawing::Point(26, 721);
			this->MessageTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MessageTxT->Name = L"MessageTxT";
			this->MessageTxT->Size = System::Drawing::Size(74, 20);
			this->MessageTxT->TabIndex = 17;
			this->MessageTxT->Text = L"Message";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 44);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 18;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 46);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 26);
			this->textBox2->TabIndex = 19;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 20);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Numero de rue\r\n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 81);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 26);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 116);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(239, 26);
			this->textBox4->TabIndex = 24;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Nom de la rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 20);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Ville";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 20);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Code postal";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 151);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(239, 26);
			this->textBox5->TabIndex = 28;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox5_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(29, 452);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(343, 24);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"Cochez si l\'adresse de livraison est la meme";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ClientForm::checkBox1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Location = System::Drawing::Point(30, 229);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(415, 216);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse Facturation";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ClientForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(30, 486);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Size = System::Drawing::Size(415, 215);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse de Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 20);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Code postal";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nom de la rue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Numero de rue";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(147, 155);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(239, 26);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(147, 119);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(239, 26);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(147, 82);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(239, 26);
			this->textBox6->TabIndex = 20;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &ClientForm::textBox6_TextChanged);
			// 
			// DateNaissancelbl
			// 
			this->DateNaissancelbl->AutoSize = true;
			this->DateNaissancelbl->Location = System::Drawing::Point(322, 152);
			this->DateNaissancelbl->Name = L"DateNaissancelbl";
			this->DateNaissancelbl->Size = System::Drawing::Size(142, 20);
			this->DateNaissancelbl->TabIndex = 32;
			this->DateNaissancelbl->Text = L"Date de naissance";
			// 
			// DateNaissance
			// 
			this->DateNaissance->Location = System::Drawing::Point(325, 178);
			this->DateNaissance->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DateNaissance->Name = L"DateNaissance";
			this->DateNaissance->Size = System::Drawing::Size(221, 26);
			this->DateNaissance->TabIndex = 33;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1251, 889);
			this->Controls->Add(this->DateNaissance);
			this->Controls->Add(this->DateNaissancelbl);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->MessageTxT);
			this->Controls->Add(this->MessageBox);
			this->Controls->Add(this->Enregistrer);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Nouveau);
			this->Controls->Add(this->RightPlus);
			this->Controls->Add(this->RightButton);
			this->Controls->Add(this->LeftButton);
			this->Controls->Add(this->LeftPlus);
			this->Controls->Add(this->Prenomlbl);
			this->Controls->Add(this->PrenomClient);
			this->Controls->Add(this->Nomlbl);
			this->Controls->Add(this->NomClient);
			this->Controls->Add(this->IDClientlbl);
			this->Controls->Add(this->IDClient);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ClientForm";
			this->Text = L"XxXSQL DOMINATORXxX";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void iniDataSet(System::String^ table)
	{
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT * FROM " + table;
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds, table + "_table");
		connection->Close();
		dataGridView1->DataSource = ds;
		dataGridView1->DataMember = table + "_table";
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void IDPersonneTxT_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		mode = "maj";
		MessageBox->Text = "Veuillez modifier les informations du client et enregistrer.";

	}
	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("client");
		index = 0;
		mode = "RIEN";
		ds = gcnew Data::DataSet();
		processusClient = gcnew NS_Svc::CL_svc_gestionClient();
		loadData(index);
		MessageBox->Text = "Data chargees";
	}
	private: System::Void Nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
		IDClient->Clear();
		NomClient->Clear();
		PrenomClient->Clear();
		mode = "nouveau";
		MessageBox->Text = "Veuillez saisir les informations du client et enregistrer.";
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) // Adresse facturation
	{
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) // Num�ro rue 1
	{
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) // Nom rue 1
	{
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) // Code postal 1
	{
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) // Ville 1
	{
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->CheckState == CheckState::Checked) {
			this->textBox2->Text = (this->textBox1->Text);
			this->textBox6->Text = (this->textBox3->Text);
			this->textBox7->Text = (this->textBox4->Text);
			this->textBox8->Text = (this->textBox5->Text);
		}
	} 
	private:void loadData(int index)
	{
		ds->Clear();
		ds = processusClient->listeClient("liste");
		IDClient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		NomClient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		PrenomClient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) // Num�ro rue2
	{
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) // Nom rue 2
	{
	}	
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) // Code postal 2
	{
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) // Ville 2
	{
	}

private: System::Void IDPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LeftPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	index = 0;
	loadData(index);
	MessageBox->Text = "Enregistrement n :" + (index + 1);
}
private: System::Void LeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (index > 0)
	{
		index--;
		loadData(index);
		MessageBox->Text = "Enregistrement n :" + (index + 1);
	}
}
private: System::Void RightButton_Click(System::Object^ sender, System::EventArgs^ e) {
	index++;
	loadData(index);
	MessageBox->Text = "Enregistrement n :" + (index + 1);
}
private: System::Void RightPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	index = ds->Tables["liste"]->Rows->Count - 1;
	loadData(index);
	MessageBox->Text = "Enregistrement n : " + (index + 1);
}
private: System::Void NomPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "supprimer";
	MessageBox->Text = "Veuillez confirmer la suppression du client en enregistrant.";
}
private: System::Void Enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "nouveau")
	{
		int Id;
		Id = processusClient->ajouter(0, 0, DateNaissance->Text);
		MessageBox->Text = "L'ID généré est le : " + Id + ". ";
	}
	else if (mode == "maj")
	{
		processusClient->modifier(0, 0, 0, "");
	}
	else if (mode == "supprimer")
	{
		processusClient->supprimer(Convert::ToInt32(IDClient->Text));
	}

	index = 0;
	loadData(index);
	MessageBox->Text += "Traitement terminé.";
}
private: System::Void MessageBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
