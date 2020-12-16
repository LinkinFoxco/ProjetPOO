#pragma once
#include "CL_svc_gestionCommande.h"
#include "Commande.h"
#include "FactureForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CommandeForm
	/// </summary>
	public ref class CommandeForm : public System::Windows::Forms::Form
	{
	public:
		CommandeForm(void)
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
		~CommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ MessageTxT;
	private: System::Windows::Forms::TextBox^ MessageBox;
	private: System::Windows::Forms::Button^ Enregistrer;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;




	private: System::Windows::Forms::Label^ IDArticleTxT;
	private: System::Windows::Forms::TextBox^ IDArticle;
	private: System::Windows::Forms::Label^ ArticleTxT;

	private: System::Windows::Forms::Label^ QuantiteTxT;
	private: System::Windows::Forms::TextBox^ Quantite;
	private: System::Windows::Forms::ComboBox^ ArticleCBox;



	protected:

	private: 
		NS_Svc::CL_svc_gestionCommande^ processusCommande;
		int index;
		DataSet^ ds;
		String^ mode;
		DataSet^ dsClient = gcnew DataSet();
	private: System::Windows::Forms::Label^ DateLivraisonTxT;
	private: System::Windows::Forms::TextBox^ DateLivraison;
	private: System::Windows::Forms::Label^ DateEmissionTxT;
	private: System::Windows::Forms::TextBox^ DateEmission;
	private: System::Windows::Forms::ComboBox^ ClientCBox;
	private: System::Windows::Forms::Label^ ClientTxT;
	private: System::Windows::Forms::ComboBox^ MoyenPaiement;
	private: System::Windows::Forms::Label^ MoyenPaiementTxT;
	private: System::Windows::Forms::Label^ DatePaiementTxT;
	private: System::Windows::Forms::TextBox^ DatePaiement;

	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ Facture;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->MessageTxT = (gcnew System::Windows::Forms::Label());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->IDArticleTxT = (gcnew System::Windows::Forms::Label());
			this->IDArticle = (gcnew System::Windows::Forms::TextBox());
			this->ArticleTxT = (gcnew System::Windows::Forms::Label());
			this->QuantiteTxT = (gcnew System::Windows::Forms::Label());
			this->Quantite = (gcnew System::Windows::Forms::TextBox());
			this->ArticleCBox = (gcnew System::Windows::Forms::ComboBox());
			this->DateLivraisonTxT = (gcnew System::Windows::Forms::Label());
			this->DateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->DateEmissionTxT = (gcnew System::Windows::Forms::Label());
			this->DateEmission = (gcnew System::Windows::Forms::TextBox());
			this->ClientCBox = (gcnew System::Windows::Forms::ComboBox());
			this->ClientTxT = (gcnew System::Windows::Forms::Label());
			this->MoyenPaiement = (gcnew System::Windows::Forms::ComboBox());
			this->MoyenPaiementTxT = (gcnew System::Windows::Forms::Label());
			this->DatePaiementTxT = (gcnew System::Windows::Forms::Label());
			this->DatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->Facture = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(652, 23);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1000, 331);
			this->dataGridView1->TabIndex = 0;
			// 
			// MessageTxT
			// 
			this->MessageTxT->AutoSize = true;
			this->MessageTxT->Location = System::Drawing::Point(34, 802);
			this->MessageTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->MessageTxT->Name = L"MessageTxT";
			this->MessageTxT->Size = System::Drawing::Size(74, 20);
			this->MessageTxT->TabIndex = 17;
			this->MessageTxT->Text = L"Message";
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(22, 783);
			this->MessageBox->Margin = System::Windows::Forms::Padding(6);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->ReadOnly = true;
			this->MessageBox->Size = System::Drawing::Size(1568, 169);
			this->MessageBox->TabIndex = 16;
			// 
			// Enregistrer
			// 
			this->Enregistrer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Enregistrer->Location = System::Drawing::Point(1408, 655);
			this->Enregistrer->Margin = System::Windows::Forms::Padding(6);
			this->Enregistrer->Name = L"Enregistrer";
			this->Enregistrer->Size = System::Drawing::Size(240, 85);
			this->Enregistrer->TabIndex = 15;
			this->Enregistrer->Text = L"Enregistrer";
			this->Enregistrer->UseVisualStyleBackColor = true;
			this->Enregistrer->Click += gcnew System::EventHandler(this, &CommandeForm::Enregistrer_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Supprimer->Location = System::Drawing::Point(1156, 655);
			this->Supprimer->Margin = System::Windows::Forms::Padding(6);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(240, 85);
			this->Supprimer->TabIndex = 14;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &CommandeForm::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Modifier->Location = System::Drawing::Point(904, 655);
			this->Modifier->Margin = System::Windows::Forms::Padding(6);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(240, 85);
			this->Modifier->TabIndex = 13;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &CommandeForm::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Ajouter->Location = System::Drawing::Point(652, 655);
			this->Ajouter->Margin = System::Windows::Forms::Padding(6);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(240, 85);
			this->Ajouter->TabIndex = 12;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &CommandeForm::Ajouter_Click);
			// 
			// IDArticleTxT
			// 
			this->IDArticleTxT->AutoSize = true;
			this->IDArticleTxT->Location = System::Drawing::Point(39, 48);
			this->IDArticleTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->IDArticleTxT->Name = L"IDArticleTxT";
			this->IDArticleTxT->Size = System::Drawing::Size(112, 20);
			this->IDArticleTxT->TabIndex = 2;
			this->IDArticleTxT->Text = L"ID Commande";
			// 
			// IDArticle
			// 
			this->IDArticle->Location = System::Drawing::Point(39, 74);
			this->IDArticle->Margin = System::Windows::Forms::Padding(6);
			this->IDArticle->Name = L"IDArticle";
			this->IDArticle->ReadOnly = true;
			this->IDArticle->Size = System::Drawing::Size(568, 26);
			this->IDArticle->TabIndex = 1;
			// 
			// ArticleTxT
			// 
			this->ArticleTxT->AutoSize = true;
			this->ArticleTxT->Location = System::Drawing::Point(39, 115);
			this->ArticleTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->ArticleTxT->Name = L"ArticleTxT";
			this->ArticleTxT->Size = System::Drawing::Size(53, 20);
			this->ArticleTxT->TabIndex = 4;
			this->ArticleTxT->Text = L"Article";
			// 
			// QuantiteTxT
			// 
			this->QuantiteTxT->AutoSize = true;
			this->QuantiteTxT->Location = System::Drawing::Point(39, 188);
			this->QuantiteTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->QuantiteTxT->Name = L"QuantiteTxT";
			this->QuantiteTxT->Size = System::Drawing::Size(70, 20);
			this->QuantiteTxT->TabIndex = 6;
			this->QuantiteTxT->Text = L"Quantite";
			// 
			// Quantite
			// 
			this->Quantite->Location = System::Drawing::Point(39, 214);
			this->Quantite->Margin = System::Windows::Forms::Padding(6);
			this->Quantite->Name = L"Quantite";
			this->Quantite->Size = System::Drawing::Size(568, 26);
			this->Quantite->TabIndex = 5;
			this->Quantite->TextChanged += gcnew System::EventHandler(this, &CommandeForm::Quantite_TextChanged);
			// 
			// ArticleCBox
			// 
			this->ArticleCBox->FormattingEnabled = true;
			this->ArticleCBox->Location = System::Drawing::Point(40, 140);
			this->ArticleCBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ArticleCBox->Name = L"ArticleCBox";
			this->ArticleCBox->Size = System::Drawing::Size(566, 28);
			this->ArticleCBox->TabIndex = 6;
			this->ArticleCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::ArticleCBox_SelectedIndexChanged);
			// 
			// DateLivraisonTxT
			// 
			this->DateLivraisonTxT->AutoSize = true;
			this->DateLivraisonTxT->Location = System::Drawing::Point(39, 265);
			this->DateLivraisonTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->DateLivraisonTxT->Name = L"DateLivraisonTxT";
			this->DateLivraisonTxT->Size = System::Drawing::Size(205, 20);
			this->DateLivraisonTxT->TabIndex = 19;
			this->DateLivraisonTxT->Text = L"Date de Livraison souhaite :";
			// 
			// DateLivraison
			// 
			this->DateLivraison->Location = System::Drawing::Point(39, 291);
			this->DateLivraison->Margin = System::Windows::Forms::Padding(6);
			this->DateLivraison->Name = L"DateLivraison";
			this->DateLivraison->Size = System::Drawing::Size(568, 26);
			this->DateLivraison->TabIndex = 18;
			// 
			// DateEmissionTxT
			// 
			this->DateEmissionTxT->AutoSize = true;
			this->DateEmissionTxT->Location = System::Drawing::Point(39, 349);
			this->DateEmissionTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->DateEmissionTxT->Name = L"DateEmissionTxT";
			this->DateEmissionTxT->Size = System::Drawing::Size(181, 20);
			this->DateEmissionTxT->TabIndex = 21;
			this->DateEmissionTxT->Text = L"Date d\'emission estime :";
			// 
			// DateEmission
			// 
			this->DateEmission->Location = System::Drawing::Point(39, 375);
			this->DateEmission->Margin = System::Windows::Forms::Padding(6);
			this->DateEmission->Name = L"DateEmission";
			this->DateEmission->ReadOnly = true;
			this->DateEmission->Size = System::Drawing::Size(568, 26);
			this->DateEmission->TabIndex = 20;
			// 
			// ClientCBox
			// 
			this->ClientCBox->FormattingEnabled = true;
			this->ClientCBox->Location = System::Drawing::Point(39, 455);
			this->ClientCBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ClientCBox->Name = L"ClientCBox";
			this->ClientCBox->Size = System::Drawing::Size(568, 28);
			this->ClientCBox->TabIndex = 23;
			// 
			// ClientTxT
			// 
			this->ClientTxT->AutoSize = true;
			this->ClientTxT->Location = System::Drawing::Point(38, 431);
			this->ClientTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->ClientTxT->Name = L"ClientTxT";
			this->ClientTxT->Size = System::Drawing::Size(89, 20);
			this->ClientTxT->TabIndex = 22;
			this->ClientTxT->Text = L"Vous etes :";
			// 
			// MoyenPaiement
			// 
			this->MoyenPaiement->FormattingEnabled = true;
			this->MoyenPaiement->Location = System::Drawing::Point(39, 532);
			this->MoyenPaiement->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MoyenPaiement->Name = L"MoyenPaiement";
			this->MoyenPaiement->Size = System::Drawing::Size(568, 28);
			this->MoyenPaiement->TabIndex = 25;
			// 
			// MoyenPaiementTxT
			// 
			this->MoyenPaiementTxT->AutoSize = true;
			this->MoyenPaiementTxT->Location = System::Drawing::Point(38, 508);
			this->MoyenPaiementTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->MoyenPaiementTxT->Name = L"MoyenPaiementTxT";
			this->MoyenPaiementTxT->Size = System::Drawing::Size(137, 20);
			this->MoyenPaiementTxT->TabIndex = 24;
			this->MoyenPaiementTxT->Text = L"Vous payez avec :";
			// 
			// DatePaiementTxT
			// 
			this->DatePaiementTxT->AutoSize = true;
			this->DatePaiementTxT->Location = System::Drawing::Point(39, 582);
			this->DatePaiementTxT->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->DatePaiementTxT->Name = L"DatePaiementTxT";
			this->DatePaiementTxT->Size = System::Drawing::Size(116, 20);
			this->DatePaiementTxT->TabIndex = 27;
			this->DatePaiementTxT->Text = L"Vous payez le :";
			// 
			// DatePaiement
			// 
			this->DatePaiement->Location = System::Drawing::Point(39, 608);
			this->DatePaiement->Margin = System::Windows::Forms::Padding(6);
			this->DatePaiement->Name = L"DatePaiement";
			this->DatePaiement->Size = System::Drawing::Size(568, 26);
			this->DatePaiement->TabIndex = 26;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &CommandeForm::folderBrowserDialog1_HelpRequest);
			// 
			// Facture
			// 
			this->Facture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Facture->Location = System::Drawing::Point(400, 655);
			this->Facture->Margin = System::Windows::Forms::Padding(6);
			this->Facture->Name = L"Facture";
			this->Facture->Size = System::Drawing::Size(240, 85);
			this->Facture->TabIndex = 28;
			this->Facture->Text = L"Facture";
			this->Facture->UseVisualStyleBackColor = true;
			this->Facture->Click += gcnew System::EventHandler(this, &CommandeForm::Facture_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(653, 366);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1000, 268);
			this->dataGridView2->TabIndex = 29;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CommandeForm::dataGridView2_CellMouseDoubleClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(56, 664);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 30;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(56, 698);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 31;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(183, 664);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 32;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(183, 698);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 33;
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1668, 969);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->Facture);
			this->Controls->Add(this->DatePaiementTxT);
			this->Controls->Add(this->DatePaiement);
			this->Controls->Add(this->MoyenPaiement);
			this->Controls->Add(this->MoyenPaiementTxT);
			this->Controls->Add(this->ClientCBox);
			this->Controls->Add(this->ClientTxT);
			this->Controls->Add(this->DateEmissionTxT);
			this->Controls->Add(this->DateEmission);
			this->Controls->Add(this->DateLivraisonTxT);
			this->Controls->Add(this->DateLivraison);
			this->Controls->Add(this->ArticleCBox);
			this->Controls->Add(this->QuantiteTxT);
			this->Controls->Add(this->Quantite);
			this->Controls->Add(this->ArticleTxT);
			this->Controls->Add(this->IDArticleTxT);
			this->Controls->Add(this->IDArticle);
			this->Controls->Add(this->Enregistrer);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->MessageTxT);
			this->Controls->Add(this->MessageBox);
			this->Controls->Add(this->dataGridView1);
			this->Location = System::Drawing::Point(23, 577);
			this->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Name = L"CommandeForm";
			this->Text = L"CommandeForm";
			this->Load += gcnew System::EventHandler(this, &CommandeForm::CommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void iniDataSet(System::String^ table, System::String^ Query){
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = Query;
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds, table + "_table");
		connection->Close();
		dataGridView1->DataSource = ds;
		dataGridView1->DataMember = table + "_table";
	}

	private: void iniDataSetPanier() {
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT AVG(Prix_Total_TTC) FROM Commande";
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds, "coutPanierMoy");
		connection->Close();
		dataGridView2->DataSource = ds;
		dataGridView2->DataMember = "coutPanierMoy";
	}

	private: void iniDataSetChiffreDaffaire() {
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT SUM(Prix_Total_TTC) FROM Commande WHERE MONTH = (SELECT LEFT(Date_Paiement, 5), RIGHT(Date_Paiement, 5)";
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds, "chiffreDaffaire");
		connection->Close();
		dataGridView1->DataSource = ds;
		dataGridView1->DataMember = "chiffreDaffaire";
	}

	private: void iniDataSetArticles() {
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT Nom_Article, ID FROM Article";
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds);
		connection->Close();
		ArticleCBox->DataSource = ds->Tables[0];
		ArticleCBox->DisplayMember = "Nom_Article";
		ArticleCBox->ValueMember = "ID";
	}

	private: void iniDataSetClient() {
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT Nom_Personne FROM Client LEFT JOIN Personne ON Client.ID_Personne = Personne.ID";
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds);
		connection->Close();
		ClientCBox->DataSource = ds->Tables[0];
		ClientCBox->DisplayMember = "Nom_Personne";
		ClientCBox->ValueMember = "Nom_Personne";
	}

	private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("Commande", "SELECT Article.Nom_Article AS Article, contient.quantite, Cout.Cout_HT AS Cout_HT_Par_Article FROM Commande LEFT JOIN (contient INNER JOIN (Article LEFT JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON contient.ID_Commande = Commande.ID");
		index = 0;
		mode = "RIEN";
		ds = gcnew Data::DataSet();
		processusCommande = gcnew NS_Svc::CL_svc_gestionCommande();
		MessageTxT->Text = "Data chargees";
		this->DateEmission->Text = DateTime::Now.ToString();
		this->MoyenPaiement->Items->Add(moyenDePaiement::Avoir);
		this->MoyenPaiement->Items->Add(moyenDePaiement::CB);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Cheque);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Coupon);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Crypto);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Fiduciaire);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Paypal);

		iniDataSetArticles();
		iniDataSetClient();

		Cout^ buff = gcnew Cout();
		for (int i = 0; i <= 3; i++)
		{
			comboBox1->Items->Add(buff->obtenirTVA(i));
			comboBox2->Items->Add(buff->obtenirMarge(i));
			comboBox4->Items->Add(buff->obtenirDemarque(i));
		
			if (i < 3)
			{
				comboBox3->Items->Add(buff->obtenirRemise(i));
			}
		}

		System::String^ connectionStringArticle = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sqlArticle = "SELECT Nom_Article FROM Article;";
		System::Data::SqlClient::SqlConnection^ connectionArticle = gcnew System::Data::SqlClient::SqlConnection(connectionStringArticle);
		System::Data::SqlClient::SqlDataAdapter^ dataadapterArticle = gcnew System::Data::SqlClient::SqlDataAdapter(sqlArticle, connectionArticle);
		DataSet^ dsArticle = gcnew DataSet();
		connectionArticle->Open();
		dataadapterArticle->Fill(dsArticle, "Article_table");
		connectionArticle->Close();
		for (int i = 0; i < (dsArticle->Tables->Count - 1) ; i++)
		{
			this->ArticleCBox->Items->Add(Convert::ToString(dsArticle->Tables["Article_table"]->Rows[this->index]->ItemArray[i]));
		}

		/*System::String^ connectionStringClient = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sqlClient = "SELECT Personne.Nom_Personne, Personne.Prenom_Personne FROM Client LEFT JOIN Personne ON Client.ID_Personne = Personne.ID;";
		System::Data::SqlClient::SqlConnection^ connectionClient = gcnew System::Data::SqlClient::SqlConnection(connectionStringClient);
		System::Data::SqlClient::SqlDataAdapter^ dataadapterClient = gcnew System::Data::SqlClient::SqlDataAdapter(sqlClient, connectionClient);
		connectionClient->Open();
		dataadapterClient->Fill(dsClient, "Client_table");
		connectionClient->Close();
		this->ClientCBox->CreateObjRef(Client());
		for (int i = 0; i < (dsClient->Tables->Count - 1); i++)
		{
			Client coucouc;
			this->ClientCBox->Items->Add(coucouc);
		}*/
	}
	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "ajout";
		this->MessageTxT->Text = "Pour confirmer l'ajout de cet article, appuyez sur le bouton Enregistrer";
	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "maj";
		this->MessageTxT->Text = "Pour confirmer la modification de la quantite de cet article, appuyez sur le bouton enregister";
	}
	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "suppr";
		this->MessageTxT->Text = "Pour confirmer la suppression de cet article dans la commande, appuyez sur le bouton Enregistrer";
	}
	private: System::Void Enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->mode = "ajout")
		{
			int id;
			//id = this->processusCommande->ajouter(Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->Quantite->Text), ???, ???, this->DateLivraison->Text, this->DateEmission->Text, this->DatePaiement->Text);
			this->MessageTxT->Text = "L'ID genere est le : " + System::Convert::ToString(ArticleCBox->SelectedValue) + ".";
		}
		else if (this->mode = "maj")
		{
			//this->processusCommande->modifier(Convert::ToInt32(this->IDArticle->Text), ???, Convert::ToInt32(this->Quantite->Text), ???, ???, this->DateLivraison->Text, this->DateEmission->Text, this->DatePaiement->Text);
		}
		else if (this->mode = "suppr")
		{
			this->processusCommande->supprimer(Convert::ToInt32(this->IDArticle->Text));
		}
	}
	private: System::Void Quantite_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Facture_Click(System::Object^ sender, System::EventArgs^ e) {
		FactureForm^ newform = gcnew FactureForm;
		newform->Show();
	}
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView2_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		iniDataSetPanier();
		iniDataSetChiffreDaffaire();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		processusCommande->commande->calculArticles(Convert::ToInt32(comboBox1->SelectedItem), Convert::ToInt32(comboBox2->SelectedItem), Convert::ToInt32(comboBox3->SelectedItem), Convert::ToInt32(comboBox4->SelectedItem));
	}
	private: System::Void ArticleCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
