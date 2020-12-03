#pragma once
#include "CL_svc_gestionCommande.h"
#include "Commande.h"

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
	private: System::Windows::Forms::ComboBox^ Article;



	protected:

	private: 
		NS_Svc::CL_svc_gestionCommande^ processusCommande;
		int index;
		DataSet^ ds;
		String^ mode;
	private: System::Windows::Forms::Label^ DateLivraisonTxT;
	private: System::Windows::Forms::TextBox^ DateLivraison;
	private: System::Windows::Forms::Label^ DateEmissionTxT;
	private: System::Windows::Forms::TextBox^ DateEmission;
	private: System::Windows::Forms::ComboBox^ Client;
	private: System::Windows::Forms::Label^ ClientTxT;
	private: System::Windows::Forms::ComboBox^ MoyenPaiement;
	private: System::Windows::Forms::Label^ MoyenPaiementTxT;
	private: System::Windows::Forms::Label^ DatePaiementTxT;
	private: System::Windows::Forms::TextBox^ DatePaiement;

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
			this->Article = (gcnew System::Windows::Forms::ComboBox());
			this->DateLivraisonTxT = (gcnew System::Windows::Forms::Label());
			this->DateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->DateEmissionTxT = (gcnew System::Windows::Forms::Label());
			this->DateEmission = (gcnew System::Windows::Forms::TextBox());
			this->Client = (gcnew System::Windows::Forms::ComboBox());
			this->ClientTxT = (gcnew System::Windows::Forms::Label());
			this->MoyenPaiement = (gcnew System::Windows::Forms::ComboBox());
			this->MoyenPaiementTxT = (gcnew System::Windows::Forms::Label());
			this->DatePaiementTxT = (gcnew System::Windows::Forms::Label());
			this->DatePaiement = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(435, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(667, 390);
			this->dataGridView1->TabIndex = 0;
			// 
			// MessageTxT
			// 
			this->MessageTxT->AutoSize = true;
			this->MessageTxT->Location = System::Drawing::Point(23, 521);
			this->MessageTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MessageTxT->Name = L"MessageTxT";
			this->MessageTxT->Size = System::Drawing::Size(50, 13);
			this->MessageTxT->TabIndex = 17;
			this->MessageTxT->Text = L"Message";
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(15, 509);
			this->MessageBox->Margin = System::Windows::Forms::Padding(4);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->ReadOnly = true;
			this->MessageBox->Size = System::Drawing::Size(1047, 189);
			this->MessageBox->TabIndex = 16;
			// 
			// Enregistrer
			// 
			this->Enregistrer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Enregistrer->Location = System::Drawing::Point(939, 426);
			this->Enregistrer->Margin = System::Windows::Forms::Padding(4);
			this->Enregistrer->Name = L"Enregistrer";
			this->Enregistrer->Size = System::Drawing::Size(160, 55);
			this->Enregistrer->TabIndex = 15;
			this->Enregistrer->Text = L"Enregistrer";
			this->Enregistrer->UseVisualStyleBackColor = true;
			this->Enregistrer->Click += gcnew System::EventHandler(this, &CommandeForm::Enregistrer_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Supprimer->Location = System::Drawing::Point(771, 426);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(160, 55);
			this->Supprimer->TabIndex = 14;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &CommandeForm::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Modifier->Location = System::Drawing::Point(603, 426);
			this->Modifier->Margin = System::Windows::Forms::Padding(4);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(160, 55);
			this->Modifier->TabIndex = 13;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &CommandeForm::Modifier_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Ajouter->Location = System::Drawing::Point(435, 426);
			this->Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(160, 55);
			this->Ajouter->TabIndex = 12;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &CommandeForm::Ajouter_Click);
			// 
			// IDArticleTxT
			// 
			this->IDArticleTxT->AutoSize = true;
			this->IDArticleTxT->Location = System::Drawing::Point(26, 31);
			this->IDArticleTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IDArticleTxT->Name = L"IDArticleTxT";
			this->IDArticleTxT->Size = System::Drawing::Size(50, 13);
			this->IDArticleTxT->TabIndex = 2;
			this->IDArticleTxT->Text = L"ID Article";
			// 
			// IDArticle
			// 
			this->IDArticle->Location = System::Drawing::Point(26, 48);
			this->IDArticle->Margin = System::Windows::Forms::Padding(4);
			this->IDArticle->Name = L"IDArticle";
			this->IDArticle->ReadOnly = true;
			this->IDArticle->Size = System::Drawing::Size(380, 20);
			this->IDArticle->TabIndex = 1;
			// 
			// ArticleTxT
			// 
			this->ArticleTxT->AutoSize = true;
			this->ArticleTxT->Location = System::Drawing::Point(26, 75);
			this->ArticleTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ArticleTxT->Name = L"ArticleTxT";
			this->ArticleTxT->Size = System::Drawing::Size(36, 13);
			this->ArticleTxT->TabIndex = 4;
			this->ArticleTxT->Text = L"Article";
			// 
			// QuantiteTxT
			// 
			this->QuantiteTxT->AutoSize = true;
			this->QuantiteTxT->Location = System::Drawing::Point(26, 122);
			this->QuantiteTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->QuantiteTxT->Name = L"QuantiteTxT";
			this->QuantiteTxT->Size = System::Drawing::Size(47, 13);
			this->QuantiteTxT->TabIndex = 6;
			this->QuantiteTxT->Text = L"Quantite";
			// 
			// Quantite
			// 
			this->Quantite->Location = System::Drawing::Point(26, 139);
			this->Quantite->Margin = System::Windows::Forms::Padding(4);
			this->Quantite->Name = L"Quantite";
			this->Quantite->Size = System::Drawing::Size(380, 20);
			this->Quantite->TabIndex = 5;
			this->Quantite->TextChanged += gcnew System::EventHandler(this, &CommandeForm::Quantite_TextChanged);
			// 
			// Article
			// 
			this->Article->FormattingEnabled = true;
			this->Article->Location = System::Drawing::Point(27, 91);
			this->Article->Name = L"Article";
			this->Article->Size = System::Drawing::Size(379, 21);
			this->Article->TabIndex = 6;
			this->Article->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::Article_SelectedIndexChanged);
			// 
			// DateLivraisonTxT
			// 
			this->DateLivraisonTxT->AutoSize = true;
			this->DateLivraisonTxT->Location = System::Drawing::Point(26, 172);
			this->DateLivraisonTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateLivraisonTxT->Name = L"DateLivraisonTxT";
			this->DateLivraisonTxT->Size = System::Drawing::Size(90, 13);
			this->DateLivraisonTxT->TabIndex = 19;
			this->DateLivraisonTxT->Text = L"Date de Livraison";
			// 
			// DateLivraison
			// 
			this->DateLivraison->Location = System::Drawing::Point(26, 189);
			this->DateLivraison->Margin = System::Windows::Forms::Padding(4);
			this->DateLivraison->Name = L"DateLivraison";
			this->DateLivraison->Size = System::Drawing::Size(380, 20);
			this->DateLivraison->TabIndex = 18;
			// 
			// DateEmissionTxT
			// 
			this->DateEmissionTxT->AutoSize = true;
			this->DateEmissionTxT->Location = System::Drawing::Point(26, 227);
			this->DateEmissionTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateEmissionTxT->Name = L"DateEmissionTxT";
			this->DateEmissionTxT->Size = System::Drawing::Size(120, 13);
			this->DateEmissionTxT->TabIndex = 21;
			this->DateEmissionTxT->Text = L"Date d\'emission estime :";
			// 
			// DateEmission
			// 
			this->DateEmission->Location = System::Drawing::Point(26, 244);
			this->DateEmission->Margin = System::Windows::Forms::Padding(4);
			this->DateEmission->Name = L"DateEmission";
			this->DateEmission->ReadOnly = true;
			this->DateEmission->Size = System::Drawing::Size(380, 20);
			this->DateEmission->TabIndex = 20;
			this->DateEmission->Text = "";
			// 
			// Client
			// 
			this->Client->FormattingEnabled = true;
			this->Client->Location = System::Drawing::Point(26, 296);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(380, 21);
			this->Client->TabIndex = 23;
			this->Client->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::Client_SelectedIndexChanged);
			// 
			// ClientTxT
			// 
			this->ClientTxT->AutoSize = true;
			this->ClientTxT->Location = System::Drawing::Point(25, 280);
			this->ClientTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ClientTxT->Name = L"ClientTxT";
			this->ClientTxT->Size = System::Drawing::Size(60, 13);
			this->ClientTxT->TabIndex = 22;
			this->ClientTxT->Text = L"Vous etes :";
			// 
			// MoyenPaiement
			// 
			this->MoyenPaiement->FormattingEnabled = true;
			this->MoyenPaiement->Location = System::Drawing::Point(26, 346);
			this->MoyenPaiement->Name = L"MoyenPaiement";
			this->MoyenPaiement->Size = System::Drawing::Size(380, 21);
			this->MoyenPaiement->TabIndex = 25;
			// 
			// MoyenPaiementTxT
			// 
			this->MoyenPaiementTxT->AutoSize = true;
			this->MoyenPaiementTxT->Location = System::Drawing::Point(25, 330);
			this->MoyenPaiementTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MoyenPaiementTxT->Name = L"MoyenPaiementTxT";
			this->MoyenPaiementTxT->Size = System::Drawing::Size(95, 13);
			this->MoyenPaiementTxT->TabIndex = 24;
			this->MoyenPaiementTxT->Text = L"Vous payez avec :";
			// 
			// DatePaiementTxT
			// 
			this->DatePaiementTxT->AutoSize = true;
			this->DatePaiementTxT->Location = System::Drawing::Point(26, 378);
			this->DatePaiementTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DatePaiementTxT->Name = L"DatePaiementTxT";
			this->DatePaiementTxT->Size = System::Drawing::Size(90, 13);
			this->DatePaiementTxT->TabIndex = 27;
			this->DatePaiementTxT->Text = L"Vous payez le :";
			// 
			// DatePaiement
			// 
			this->DatePaiement->Location = System::Drawing::Point(26, 395);
			this->DatePaiement->Margin = System::Windows::Forms::Padding(4);
			this->DatePaiement->Name = L"DatePaiement";
			this->DatePaiement->Size = System::Drawing::Size(380, 20);
			this->DatePaiement->TabIndex = 26;
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1112, 711);
			this->Controls->Add(this->DatePaiementTxT);
			this->Controls->Add(this->DatePaiement);
			this->Controls->Add(this->MoyenPaiement);
			this->Controls->Add(this->MoyenPaiementTxT);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->ClientTxT);
			this->Controls->Add(this->DateEmissionTxT);
			this->Controls->Add(this->DateEmission);
			this->Controls->Add(this->DateLivraisonTxT);
			this->Controls->Add(this->DateLivraison);
			this->Controls->Add(this->Article);
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
			this->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Name = L"CommandeForm";
			this->Text = L"CommandeForm";
			this->Load += gcnew System::EventHandler(this, &CommandeForm::CommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void iniDataSet(System::String^ table){
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
	System::String^ sql = "SELECT Article, Quantite_Article_Commande FROM " + table;
	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
	DataSet^ ds = gcnew DataSet();
	connection->Open();
	dataadapter->Fill(ds, table + "_table");
	connection->Close();
	dataGridView1->DataSource = ds;
	dataGridView1->DataMember = table + "_table";
}
private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	iniDataSet("Commande");
	index = 0;
	mode = "RIEN";
	ds = gcnew Data::DataSet();
	processusCommande = gcnew NS_Svc::CL_svc_gestionCommande();
	loadData(index);
	MessageTxT->Text = "Data chargées";
	this->DateEmission->Text = DateTime::Now.ToString();
	this->MoyenPaiement->Items->Add(moyenDePaiement::Avoir);
	this->MoyenPaiement->Items->Add(moyenDePaiement::CB);
	this->MoyenPaiement->Items->Add(moyenDePaiement::Cheque);
	this->MoyenPaiement->Items->Add(moyenDePaiement::Coupon);
	this->MoyenPaiement->Items->Add(moyenDePaiement::Crypto);
	this->MoyenPaiement->Items->Add(moyenDePaiement::Fiduciaire);
	this->MoyenPaiement->Items->Add(moyenDePaiement::Paypal);
	System::String^ connectionStringArticle = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
	System::String^ sqlArticle = "SELECT Nom_Article FROM Article;";
	System::Data::SqlClient::SqlConnection^ connectionArticle = gcnew System::Data::SqlClient::SqlConnection(connectionStringArticle);
	System::Data::SqlClient::SqlDataAdapter^ dataadapterArticle = gcnew System::Data::SqlClient::SqlDataAdapter(sqlArticle, connectionArticle);
	DataSet^ dsArticle = gcnew DataSet();
	connectionArticle->Open();
	dataadapterArticle->Fill(dsArticle, Article + "_table");
	connectionArticle->Close();
	for (int i = 0; i < (dsArticle->Tables->Count - 1) ; i++)
	{
		this->Article->Items->Add(Convert::ToString(dsArticle->Tables["Article_table"]->Rows[this->index]->ItemArray[i]));
	}
	System::String^ connectionStringClient = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
	System::String^ sqlClient = "SELECT Personne.Nom_Personne, Personne.Prenom_Personne FROM Client LEFT JOIN Personne ON Client.ID_Personne = Personne.ID;";
	System::Data::SqlClient::SqlConnection^ connectionClient = gcnew System::Data::SqlClient::SqlConnection(connectionStringClient);
	System::Data::SqlClient::SqlDataAdapter^ dataadapterClient = gcnew System::Data::SqlClient::SqlDataAdapter(sqlClient, connectionClient);
	DataSet^ dsClient = gcnew DataSet();
	connectionClient->Open();
	dataadapterClient->Fill(dsClient, Client + "_table");
	connectionClient->Close();
	for (int i = 0; i < (dsClient->Tables->Count - 1); i++)
	{
		this->Article->Items->Add(Convert::ToString(dsClient->Tables["Client_table"]->Rows[this->index]->ItemArray[i]));
	}
}
private:void loadData(int index){
	ds->Clear();
	ds = processusCommande->listeCommande("liste");
	IDArticle->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	ArticleTxT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	QuantiteTxT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "ajout";
	this->MessageTxT->Text = "Pour confirmer l'ajout de cet article, appuyez sur le bouton Enregistrer";
}
private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->MessageTxT->Text = "Pour confirmer la modification de la quantité de cet article, appuyez sur le bouton enregister";
}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "suppr";
	this->MessageBox->Text = "Pour confirmer la suppression de cet Article dans la commande, appuyez sur le bouton Enregistrer";
}
private: System::Void Enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode = "ajout")
	{
		int id;
		id = this->processusCommande->ajouter();
		this->MessageTxT->Text = "L'ID généré est le : " + id + ".";
	}
	else if (this->mode = "maj")
	{
		this->processusCommande->modifier();
	}
	else if (this->mode = "suppr")
	{
		this->processusCommande->supprimer(Convert::ToInt32(this->IDArticle->Text));
	}
}
private: System::Void Quantite_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Article_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Client_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
