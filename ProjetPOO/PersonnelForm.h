#pragma once
#include "CL_svc_gestionPersonnel.h"
#include "CL_CAD.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ IDPersonne;
	private: System::Windows::Forms::Label^ IDPersonneTxT;

	private: System::Windows::Forms::Label^ NomTxT;
	private: System::Windows::Forms::TextBox^ NomPersonne;


	private: System::Windows::Forms::Label^ PrenomTxT;
	private: System::Windows::Forms::TextBox^ PrenomPersonne;



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
		NS_Svc::CL_svc_gestionPersonnel^ processusPersonnel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;

		   String^ mode;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->IDPersonne = (gcnew System::Windows::Forms::TextBox());
			   this->IDPersonneTxT = (gcnew System::Windows::Forms::Label());
			   this->NomTxT = (gcnew System::Windows::Forms::Label());
			   this->NomPersonne = (gcnew System::Windows::Forms::TextBox());
			   this->PrenomTxT = (gcnew System::Windows::Forms::Label());
			   this->PrenomPersonne = (gcnew System::Windows::Forms::TextBox());
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
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->groupBox1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(703, 13);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(337, 160);
			   this->dataGridView1->TabIndex = 0;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonnelForm::dataGridView1_CellContentClick);
			   // 
			   // IDPersonne
			   // 
			   this->IDPersonne->Location = System::Drawing::Point(27, 49);
			   this->IDPersonne->Margin = System::Windows::Forms::Padding(4);
			   this->IDPersonne->Name = L"IDPersonne";
			   this->IDPersonne->ReadOnly = true;
			   this->IDPersonne->Size = System::Drawing::Size(235, 22);
			   this->IDPersonne->TabIndex = 1;
			   this->IDPersonne->TextChanged += gcnew System::EventHandler(this, &PersonnelForm::IDPersonne_TextChanged);
			   // 
			   // IDPersonneTxT
			   // 
			   this->IDPersonneTxT->AutoSize = true;
			   this->IDPersonneTxT->Location = System::Drawing::Point(23, 31);
			   this->IDPersonneTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->IDPersonneTxT->Name = L"IDPersonneTxT";
			   this->IDPersonneTxT->Size = System::Drawing::Size(86, 17);
			   this->IDPersonneTxT->TabIndex = 2;
			   this->IDPersonneTxT->Text = L"ID Personne";
			   this->IDPersonneTxT->Click += gcnew System::EventHandler(this, &PersonnelForm::IDPersonneTxT_Click);
			   // 
			   // NomTxT
			   // 
			   this->NomTxT->AutoSize = true;
			   this->NomTxT->Location = System::Drawing::Point(23, 86);
			   this->NomTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->NomTxT->Name = L"NomTxT";
			   this->NomTxT->Size = System::Drawing::Size(37, 17);
			   this->NomTxT->TabIndex = 4;
			   this->NomTxT->Text = L"Nom";
			   // 
			   // NomPersonne
			   // 
			   this->NomPersonne->Location = System::Drawing::Point(27, 105);
			   this->NomPersonne->Margin = System::Windows::Forms::Padding(4);
			   this->NomPersonne->Name = L"NomPersonne";
			   this->NomPersonne->Size = System::Drawing::Size(235, 22);
			   this->NomPersonne->TabIndex = 3;
			   // 
			   // PrenomTxT
			   // 
			   this->PrenomTxT->AutoSize = true;
			   this->PrenomTxT->Location = System::Drawing::Point(23, 148);
			   this->PrenomTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->PrenomTxT->Name = L"PrenomTxT";
			   this->PrenomTxT->Size = System::Drawing::Size(57, 17);
			   this->PrenomTxT->TabIndex = 6;
			   this->PrenomTxT->Text = L"Prenom";
			   // 
			   // PrenomPersonne
			   // 
			   this->PrenomPersonne->Location = System::Drawing::Point(27, 166);
			   this->PrenomPersonne->Margin = System::Windows::Forms::Padding(4);
			   this->PrenomPersonne->Name = L"PrenomPersonne";
			   this->PrenomPersonne->Size = System::Drawing::Size(235, 22);
			   this->PrenomPersonne->TabIndex = 5;
			   this->PrenomPersonne->TextChanged += gcnew System::EventHandler(this, &PersonnelForm::PrenomPersonne_TextChanged);
			   // 
			   // LeftPlus
			   // 
			   this->LeftPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LeftPlus->Location = System::Drawing::Point(682, 194);
			   this->LeftPlus->Margin = System::Windows::Forms::Padding(4);
			   this->LeftPlus->Name = L"LeftPlus";
			   this->LeftPlus->Size = System::Drawing::Size(80, 28);
			   this->LeftPlus->TabIndex = 7;
			   this->LeftPlus->Text = L"<<";
			   this->LeftPlus->UseVisualStyleBackColor = true;
			   // 
			   // LeftButton
			   // 
			   this->LeftButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LeftButton->Location = System::Drawing::Point(770, 194);
			   this->LeftButton->Margin = System::Windows::Forms::Padding(4);
			   this->LeftButton->Name = L"LeftButton";
			   this->LeftButton->Size = System::Drawing::Size(80, 28);
			   this->LeftButton->TabIndex = 8;
			   this->LeftButton->Text = L"<";
			   this->LeftButton->UseVisualStyleBackColor = true;
			   // 
			   // RightButton
			   // 
			   this->RightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->RightButton->Location = System::Drawing::Point(868, 194);
			   this->RightButton->Margin = System::Windows::Forms::Padding(4);
			   this->RightButton->Name = L"RightButton";
			   this->RightButton->Size = System::Drawing::Size(80, 28);
			   this->RightButton->TabIndex = 9;
			   this->RightButton->Text = L">";
			   this->RightButton->UseVisualStyleBackColor = true;
			   // 
			   // RightPlus
			   // 
			   this->RightPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->RightPlus->Location = System::Drawing::Point(956, 194);
			   this->RightPlus->Margin = System::Windows::Forms::Padding(4);
			   this->RightPlus->Name = L"RightPlus";
			   this->RightPlus->Size = System::Drawing::Size(80, 28);
			   this->RightPlus->TabIndex = 10;
			   this->RightPlus->Text = L">>";
			   this->RightPlus->UseVisualStyleBackColor = true;
			   // 
			   // Nouveau
			   // 
			   this->Nouveau->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			   this->Nouveau->Location = System::Drawing::Point(740, 295);
			   this->Nouveau->Margin = System::Windows::Forms::Padding(4);
			   this->Nouveau->Name = L"Nouveau";
			   this->Nouveau->Size = System::Drawing::Size(160, 55);
			   this->Nouveau->TabIndex = 12;
			   this->Nouveau->Text = L"Nouveau";
			   this->Nouveau->UseVisualStyleBackColor = true;
			   this->Nouveau->Click += gcnew System::EventHandler(this, &PersonnelForm::Nouveau_Click);
			   // 
			   // Modifier
			   // 
			   this->Modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			   this->Modifier->Location = System::Drawing::Point(740, 369);
			   this->Modifier->Margin = System::Windows::Forms::Padding(4);
			   this->Modifier->Name = L"Modifier";
			   this->Modifier->Size = System::Drawing::Size(160, 55);
			   this->Modifier->TabIndex = 13;
			   this->Modifier->Text = L"Modifier";
			   this->Modifier->UseVisualStyleBackColor = true;
			   this->Modifier->Click += gcnew System::EventHandler(this, &PersonnelForm::Modifier_Click);
			   // 
			   // Supprimer
			   // 
			   this->Supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			   this->Supprimer->Location = System::Drawing::Point(939, 295);
			   this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			   this->Supprimer->Name = L"Supprimer";
			   this->Supprimer->Size = System::Drawing::Size(160, 55);
			   this->Supprimer->TabIndex = 14;
			   this->Supprimer->Text = L"Supprimer";
			   this->Supprimer->UseVisualStyleBackColor = true;
			   // 
			   // Enregistrer
			   // 
			   this->Enregistrer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			   this->Enregistrer->Location = System::Drawing::Point(939, 369);
			   this->Enregistrer->Margin = System::Windows::Forms::Padding(4);
			   this->Enregistrer->Name = L"Enregistrer";
			   this->Enregistrer->Size = System::Drawing::Size(160, 55);
			   this->Enregistrer->TabIndex = 15;
			   this->Enregistrer->Text = L"Enregistrer";
			   this->Enregistrer->UseVisualStyleBackColor = true;
			   // 
			   // MessageBox
			   // 
			   this->MessageBox->Location = System::Drawing::Point(23, 529);
			   this->MessageBox->Margin = System::Windows::Forms::Padding(4);
			   this->MessageBox->Multiline = true;
			   this->MessageBox->Name = L"MessageBox";
			   this->MessageBox->ReadOnly = true;
			   this->MessageBox->Size = System::Drawing::Size(1076, 170);
			   this->MessageBox->TabIndex = 16;
			   // 
			   // MessageTxT
			   // 
			   this->MessageTxT->AutoSize = true;
			   this->MessageTxT->Location = System::Drawing::Point(19, 511);
			   this->MessageTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->MessageTxT->Name = L"MessageTxT";
			   this->MessageTxT->Size = System::Drawing::Size(65, 17);
			   this->MessageTxT->TabIndex = 17;
			   this->MessageTxT->Text = L"Message";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->textBox3);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Location = System::Drawing::Point(26, 218);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(334, 132);
			   this->groupBox1->TabIndex = 18;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Adresse";
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(116, 102);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(171, 22);
			   this->textBox4->TabIndex = 7;
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(116, 74);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(171, 22);
			   this->textBox3->TabIndex = 6;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(116, 46);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(171, 22);
			   this->textBox2->TabIndex = 5;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(116, 19);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 22);
			   this->textBox1->TabIndex = 4;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(7, 101);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(34, 17);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Ville";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(7, 77);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(83, 17);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Code postal";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(7, 49);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(82, 17);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Nom de rue";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(7, 22);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(103, 17);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Numéro de rue";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(27, 378);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(190, 24);
			   this->comboBox1->TabIndex = 21;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonnelForm::comboBox1_SelectedIndexChanged);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(24, 358);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(153, 17);
			   this->label5->TabIndex = 22;
			   this->label5->Text = L"Supérieur hiérarchique";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(273, 380);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(125, 22);
			   this->textBox5->TabIndex = 23;
			   this->textBox5->TextChanged += gcnew System::EventHandler(this, &PersonnelForm::textBox5_TextChanged);
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(404, 379);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(85, 23);
			   this->button1->TabIndex = 24;
			   this->button1->Text = L"Ajouter";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &PersonnelForm::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(495, 378);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(86, 23);
			   this->button2->TabIndex = 25;
			   this->button2->Text = L"Supprimer";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &PersonnelForm::button2_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(270, 353);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(224, 17);
			   this->label6->TabIndex = 26;
			   this->label6->Text = L"Ajouter ou supprimer un supérieur";
			   // 
			   // PersonnelForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1112, 711);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->groupBox1);
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
			   this->Controls->Add(this->PrenomTxT);
			   this->Controls->Add(this->PrenomPersonne);
			   this->Controls->Add(this->NomTxT);
			   this->Controls->Add(this->NomPersonne);
			   this->Controls->Add(this->IDPersonneTxT);
			   this->Controls->Add(this->IDPersonne);
			   this->Controls->Add(this->dataGridView1);
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"PersonnelForm";
			   this->Text = L"XxXSQL DOMINATORXxX";
			   this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
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
	}
	private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("adresse");

	}
	private: System::Void Nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void IDPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PrenomPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// superieur = comboBox1->GetItemText(comboBox1->SelectedItem->ToString());
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add(this->textBox5->Text);
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Remove(this->comboBox1->Text);
	}
	};
}
