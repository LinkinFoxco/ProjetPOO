#pragma once

namespace ProjetPOO{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
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


	private: System::Windows::Forms::Label^ label4;
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


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Nouveau = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Enregistrer = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->MessageTxT = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(375, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(727, 394);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dataGridView1_CellContentClick);
			// 
			// IDPersonne
			// 
			this->IDPersonne->Location = System::Drawing::Point(27, 49);
			this->IDPersonne->Margin = System::Windows::Forms::Padding(4);
			this->IDPersonne->Name = L"IDPersonne";
			this->IDPersonne->ReadOnly = true;
			this->IDPersonne->Size = System::Drawing::Size(235, 22);
			this->IDPersonne->TabIndex = 1;
			this->IDPersonne->TextChanged += gcnew System::EventHandler(this, &AdminForm::IDPersonne_TextChanged);
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
			this->IDPersonneTxT->Click += gcnew System::EventHandler(this, &AdminForm::IDPersonneTxT_Click);
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
			this->PrenomPersonne->TextChanged += gcnew System::EventHandler(this, &AdminForm::PrenomPersonne_TextChanged);
			// 
			// LeftPlus
			// 
			this->LeftPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftPlus->Location = System::Drawing::Point(23, 213);
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
			this->LeftButton->Location = System::Drawing::Point(111, 213);
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
			this->RightButton->Location = System::Drawing::Point(199, 213);
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
			this->RightPlus->Location = System::Drawing::Point(287, 213);
			this->RightPlus->Margin = System::Windows::Forms::Padding(4);
			this->RightPlus->Name = L"RightPlus";
			this->RightPlus->Size = System::Drawing::Size(80, 28);
			this->RightPlus->TabIndex = 10;
			this->RightPlus->Text = L">>";
			this->RightPlus->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 80));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(16, 260);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(333, 153);
			this->label4->TabIndex = 11;
			this->label4->Text = L"SQL";
			this->label4->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
			// 
			// Nouveau
			// 
			this->Nouveau->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Nouveau->Location = System::Drawing::Point(23, 426);
			this->Nouveau->Margin = System::Windows::Forms::Padding(4);
			this->Nouveau->Name = L"Nouveau";
			this->Nouveau->Size = System::Drawing::Size(160, 55);
			this->Nouveau->TabIndex = 12;
			this->Nouveau->Text = L"Nouveau";
			this->Nouveau->UseVisualStyleBackColor = true;
			this->Nouveau->Click += gcnew System::EventHandler(this, &AdminForm::Nouveau_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Modifier->Location = System::Drawing::Point(209, 426);
			this->Modifier->Margin = System::Windows::Forms::Padding(4);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(160, 55);
			this->Modifier->TabIndex = 13;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &AdminForm::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Supprimer->Location = System::Drawing::Point(396, 426);
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
			this->Enregistrer->Location = System::Drawing::Point(583, 426);
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
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 711);
			this->Controls->Add(this->MessageTxT);
			this->Controls->Add(this->MessageBox);
			this->Controls->Add(this->Enregistrer);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Nouveau);
			this->Controls->Add(this->label4);
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
			this->Name = L"AdminForm";
			this->Text = L"XxXSQL DOMINATORXxX";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("adresse");
		
	}
	private: System::Void Nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void IDPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PrenomPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
