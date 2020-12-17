#pragma once
#include "CL_svc_gestionCommande.h"
#include "CL_svc_gestionContient.h"
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




	private: System::Windows::Forms::Label^ IDCommandeTxT;
	private: System::Windows::Forms::TextBox^ IDCommande;

	private: System::Windows::Forms::Label^ ArticleTxT;

	private: System::Windows::Forms::Label^ QuantiteTxT;
	private: System::Windows::Forms::TextBox^ Quantite;
	private: System::Windows::Forms::ComboBox^ ArticleCBox;



	protected:

	private: 
		NS_Svc::CL_svc_gestionCommande^ processusCommande;
		NS_Svc::CL_svc_gestionContient^ processusContient;
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
	private: System::Windows::Forms::ComboBox^ BoxTVA;
	private: System::Windows::Forms::ComboBox^ BoxMarge;
	private: System::Windows::Forms::ComboBox^ BoxRemise;
	private: System::Windows::Forms::ComboBox^ BoxDemarque;
	private: System::Windows::Forms::Button^ AjouteArticle;





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
			this->IDCommandeTxT = (gcnew System::Windows::Forms::Label());
			this->IDCommande = (gcnew System::Windows::Forms::TextBox());
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
			this->BoxTVA = (gcnew System::Windows::Forms::ComboBox());
			this->BoxMarge = (gcnew System::Windows::Forms::ComboBox());
			this->BoxRemise = (gcnew System::Windows::Forms::ComboBox());
			this->BoxDemarque = (gcnew System::Windows::Forms::ComboBox());
			this->AjouteArticle = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(435, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(667, 215);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeForm::dataGridView1_CellClick);
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
			this->MessageBox->Size = System::Drawing::Size(1047, 111);
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
			// IDCommandeTxT
			// 
			this->IDCommandeTxT->AutoSize = true;
			this->IDCommandeTxT->Location = System::Drawing::Point(26, 31);
			this->IDCommandeTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IDCommandeTxT->Name = L"IDCommandeTxT";
			this->IDCommandeTxT->Size = System::Drawing::Size(74, 13);
			this->IDCommandeTxT->TabIndex = 2;
			this->IDCommandeTxT->Text = L"ID Commande";
			// 
			// IDCommande
			// 
			this->IDCommande->Location = System::Drawing::Point(26, 48);
			this->IDCommande->Margin = System::Windows::Forms::Padding(4);
			this->IDCommande->Name = L"IDCommande";
			this->IDCommande->ReadOnly = true;
			this->IDCommande->Size = System::Drawing::Size(380, 20);
			this->IDCommande->TabIndex = 1;
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
			// ArticleCBox
			// 
			this->ArticleCBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ArticleCBox->FormattingEnabled = true;
			this->ArticleCBox->Location = System::Drawing::Point(27, 91);
			this->ArticleCBox->Name = L"ArticleCBox";
			this->ArticleCBox->Size = System::Drawing::Size(379, 21);
			this->ArticleCBox->TabIndex = 6;
			this->ArticleCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::ArticleCBox_SelectedIndexChanged);
			// 
			// DateLivraisonTxT
			// 
			this->DateLivraisonTxT->AutoSize = true;
			this->DateLivraisonTxT->Location = System::Drawing::Point(26, 172);
			this->DateLivraisonTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateLivraisonTxT->Name = L"DateLivraisonTxT";
			this->DateLivraisonTxT->Size = System::Drawing::Size(139, 13);
			this->DateLivraisonTxT->TabIndex = 19;
			this->DateLivraisonTxT->Text = L"Date de Livraison souhaite :";
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
			// 
			// ClientCBox
			// 
			this->ClientCBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ClientCBox->FormattingEnabled = true;
			this->ClientCBox->Location = System::Drawing::Point(26, 296);
			this->ClientCBox->Name = L"ClientCBox";
			this->ClientCBox->Size = System::Drawing::Size(380, 21);
			this->ClientCBox->TabIndex = 23;
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
			this->MoyenPaiement->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->MoyenPaiement->FormattingEnabled = true;
			this->MoyenPaiement->ImeMode = System::Windows::Forms::ImeMode::NoControl;
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
			this->DatePaiementTxT->Size = System::Drawing::Size(79, 13);
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
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &CommandeForm::folderBrowserDialog1_HelpRequest);
			// 
			// Facture
			// 
			this->Facture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Facture->Location = System::Drawing::Point(267, 426);
			this->Facture->Margin = System::Windows::Forms::Padding(4);
			this->Facture->Name = L"Facture";
			this->Facture->Size = System::Drawing::Size(160, 55);
			this->Facture->TabIndex = 28;
			this->Facture->Text = L"Facture";
			this->Facture->UseVisualStyleBackColor = true;
			this->Facture->Click += gcnew System::EventHandler(this, &CommandeForm::Facture_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(837, 238);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(265, 174);
			this->dataGridView2->TabIndex = 29;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CommandeForm::dataGridView2_CellMouseDoubleClick);
			// 
			// BoxTVA
			// 
			this->BoxTVA->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BoxTVA->FormattingEnabled = true;
			this->BoxTVA->Location = System::Drawing::Point(37, 432);
			this->BoxTVA->Margin = System::Windows::Forms::Padding(2);
			this->BoxTVA->Name = L"BoxTVA";
			this->BoxTVA->Size = System::Drawing::Size(82, 21);
			this->BoxTVA->TabIndex = 30;
			this->BoxTVA->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::BoxTVA_SelectedIndexChanged);
			// 
			// BoxMarge
			// 
			this->BoxMarge->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BoxMarge->FormattingEnabled = true;
			this->BoxMarge->Location = System::Drawing::Point(37, 454);
			this->BoxMarge->Margin = System::Windows::Forms::Padding(2);
			this->BoxMarge->Name = L"BoxMarge";
			this->BoxMarge->Size = System::Drawing::Size(82, 21);
			this->BoxMarge->TabIndex = 31;
			this->BoxMarge->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::BoxMarge_SelectedIndexChanged);
			// 
			// BoxRemise
			// 
			this->BoxRemise->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BoxRemise->FormattingEnabled = true;
			this->BoxRemise->Location = System::Drawing::Point(122, 432);
			this->BoxRemise->Margin = System::Windows::Forms::Padding(2);
			this->BoxRemise->Name = L"BoxRemise";
			this->BoxRemise->Size = System::Drawing::Size(82, 21);
			this->BoxRemise->TabIndex = 32;
			this->BoxRemise->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::BoxRemise_SelectedIndexChanged);
			// 
			// BoxDemarque
			// 
			this->BoxDemarque->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BoxDemarque->FormattingEnabled = true;
			this->BoxDemarque->Location = System::Drawing::Point(122, 454);
			this->BoxDemarque->Margin = System::Windows::Forms::Padding(2);
			this->BoxDemarque->Name = L"BoxDemarque";
			this->BoxDemarque->Size = System::Drawing::Size(82, 21);
			this->BoxDemarque->TabIndex = 33;
			this->BoxDemarque->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::BoxDemarque_SelectedIndexChanged);
			// 
			// AjouteArticle
			// 
			this->AjouteArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AjouteArticle->Location = System::Drawing::Point(435, 244);
			this->AjouteArticle->Name = L"AjouteArticle";
			this->AjouteArticle->Size = System::Drawing::Size(385, 73);
			this->AjouteArticle->TabIndex = 34;
			this->AjouteArticle->Text = L"Ajouter Article";
			this->AjouteArticle->UseVisualStyleBackColor = true;
			this->AjouteArticle->Click += gcnew System::EventHandler(this, &CommandeForm::AjouteArticle_Click);
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1112, 630);
			this->Controls->Add(this->AjouteArticle);
			this->Controls->Add(this->BoxDemarque);
			this->Controls->Add(this->BoxRemise);
			this->Controls->Add(this->BoxMarge);
			this->Controls->Add(this->BoxTVA);
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
			this->Controls->Add(this->IDCommandeTxT);
			this->Controls->Add(this->IDCommande);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void UpdatePrixMoy() {
		if (dataGridView1->SelectedRows[0]->Cells[0]->Selected == true)
		{
			CL_CAD^ buff = gcnew CL_CAD();
			buff->actionRows(
				"UPDATE Commande SET Prix_Total_TVA = (SELECT SUM((Cout.Cout_HT * " + 1 + Convert::ToInt32(this->BoxTVA->SelectedItem)/100 + ") * contient.quantite) FROM Commande FULL JOIN (contient FULL JOIN (Article FULL JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON Commande.ID = contient.ID_Commande WHERE (Commande.ID = " + Convert::ToInt32(this->IDCommande->Text) + ")) WHERE (Commande.ID = " + Convert::ToInt32(this->IDCommande->Text) + ");\
			UPDATE Commande SET Prix_Total_TTC = (SELECT Prix_Total_TVA + (Prix_Total_TVA * " + Convert::ToInt32(this->BoxMarge->SelectedItem)/100 + ") - (Prix_Total_TVA * " + Convert::ToInt32(this->BoxRemise->SelectedItem)/100 + ") - (Prix_Total_TVA * " + Convert::ToInt32(this->BoxDemarque->SelectedItem)/100 + ") FROM Commande WHERE(Commande.ID = " + Convert::ToInt32(this->IDCommande->Text) + ")) WHERE(Commande.ID = " + Convert::ToInt32(this->IDCommande->Text) + ")"
			);
			iniDataSetPanier();
		}
	}
	private: void iniDataSet(System::String^ table, System::String^ Query) {
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
		System::String^ sql = "SELECT SUM(Prix_Total_TTC) FROM Commande WHERE (SELECT LEFT(Date_Paiement, 5), RIGHT(Date_Paiement, 5)) = ";// + this + ;
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds, "chiffreDaffaire");
		connection->Close();
		dataGridView2->DataSource = ds;
		dataGridView2->DataMember = "chiffreDaffaire";
	}

	private: void iniComboBoxArticles() {
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

	private: void iniComboBoxClient() {
		System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
		System::String^ sql = "SELECT Nom_Personne, Client.ID FROM Client LEFT JOIN Personne ON Client.ID_Personne = Personne.ID";
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		System::Data::SqlClient::SqlDataAdapter^ dataadapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, connection);
		DataSet^ ds = gcnew DataSet();
		connection->Open();
		dataadapter->Fill(ds);
		connection->Close();
		ClientCBox->DataSource = ds->Tables[0];
		ClientCBox->DisplayMember = "Nom_Personne";
		ClientCBox->ValueMember = "Client.ID";
	}

	private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("Commande", "SELECT Commande.ID, Article.Nom_Article AS Article, contient.quantite, Cout.Cout_HT AS Cout_HT_Par_Article, Commande.Prix_Total_TTC FROM Commande RIGHT JOIN (contient INNER JOIN (Article LEFT JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON contient.ID_Commande = Commande.ID");
		index = 0;
		mode = "RIEN";
		ds = gcnew Data::DataSet();
		processusCommande = gcnew NS_Svc::CL_svc_gestionCommande();
		processusContient = gcnew NS_Svc::CL_svc_gestionContient();
		MessageTxT->Text = "Data chargees";
		this->DateEmission->Text = DateTime::Now.ToString();
		this->MoyenPaiement->Items->Add(moyenDePaiement::Avoir);
		this->MoyenPaiement->Items->Add(moyenDePaiement::CB);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Cheque);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Coupon);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Crypto);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Fiduciaire);
		this->MoyenPaiement->Items->Add(moyenDePaiement::Paypal);

		iniComboBoxArticles();
		iniComboBoxClient();

		Cout^ buff = gcnew Cout();
		for (int i = 0; i <= 3; i++)
		{
			BoxTVA->Items->Add(buff->obtenirTVA(i));
			BoxMarge->Items->Add(buff->obtenirMarge(i));
			BoxDemarque->Items->Add(buff->obtenirDemarque(i));

			if (i < 3)
			{
				BoxRemise->Items->Add(buff->obtenirRemise(i));
			}
		}
		int indextest = 0;
		BoxTVA->SelectedIndex = indextest;
		BoxMarge->SelectedIndex = indextest;
		BoxDemarque->SelectedIndex = indextest;
		BoxRemise->SelectedIndex = indextest;
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
		if (this->mode == "ajout")
		{
			int id = this->processusCommande->ajouter(Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->Quantite->Text), Convert::ToInt32(ClientCBox->SelectedValue), (moyenDePaiement)this->MoyenPaiement->SelectedItem, this->DateLivraison->Text, this->DateEmission->Text, this->DatePaiement->Text);
			
			CL_CAD^ buff = gcnew CL_CAD();
			/*
			System::String^ connectionStringCout = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
			System::Data::SqlClient::SqlConnection^ connectionCout = gcnew System::Data::SqlClient::SqlConnection(connectionStringCout);
			System::String^ sqlCout = "SELECT Cout_HT FROM Cout LEFT JOIN Article ON Article.ID_Cout = Cout.ID WHERE (Article.Nom_Article = '" + ArticleCBox->SelectedText + "')";
			System::Data::SqlClient::SqlDataAdapter^ dataadapterCout = gcnew System::Data::SqlClient::SqlDataAdapter(sqlCout, connectionCout);
			DataSet^ dsCout = gcnew DataSet();
			connectionCout->Open();
			dataadapterCout->Fill(dsCout);
			connectionCout->Close();

			Cout^ buffCout = gcnew Cout();
			buffCout->modifierCoutHT(Convert::ToInt32(dsCout->Tables["Cout_HT"]));
			Article^ buffArticle = gcnew Article();
			buffArticle->modifierCoutArticle(buffCout);
			buffArticle->modifierNomArticle(ArticleCBox->SelectedText);
			processusCommande->commande->ajouterArticles(buffArticle, Convert::ToInt32(this->Quantite->Text));
			processusCommande->commande->calculArticles(Convert::ToInt32(BoxTVA->SelectedItem), Convert::ToInt32(BoxMarge->SelectedItem), Convert::ToInt32(BoxRemise->SelectedItem), Convert::ToInt32(BoxDemarque->SelectedItem));
			processusCommande->commande->calculPanier();
			System::String^ sqlPrix = "UPDATE Commande SET Commande.Prix_Total_TTC = '" + processusCommande->commande->obtenirTotalPrixTTC() + "' WHERE (Commande.ID = '" + id + "' )";
			*/
			this->processusContient->ajouter(Convert::ToInt32(ArticleCBox->SelectedValue), id, Convert::ToInt32(this->Quantite->Text));
			this->MessageTxT->Text = "L'ID genere est le : " + id + ".";
			buff->actionRows("UPDATE Commande SET Prix_Total_TVA = (SELECT SUM((Cout.Cout_HT * " + 1 + Convert::ToInt32(this->BoxTVA->SelectedItem) / 100 + ") * contient.quantite) FROM Commande FULL JOIN (contient FULL JOIN (Article FULL JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON Commande.ID = contient.ID_Commande WHERE (Commande.ID = " + id + ")) WHERE (Commande.ID = " + id + ");\
				UPDATE Commande SET Prix_Total_TTC = (SELECT Prix_Total_TVA + (Prix_Total_TVA * " + Convert::ToInt32(this->BoxMarge->SelectedItem) / 100 + ") - (Prix_Total_TVA * " + Convert::ToInt32(this->BoxRemise->SelectedItem) / 100 + ") - (Prix_Total_TVA * " + Convert::ToInt32(this->BoxDemarque->SelectedItem) / 100 + ") FROM Commande WHERE(Commande.ID = " + id + ")) WHERE(Commande.ID = " + id + ")");
		}
		else if (this->mode == "maj")
		{
			this->processusCommande->modifier(Convert::ToInt32(this->IDCommande->Text), Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->Quantite->Text), Convert::ToInt32(ClientCBox->SelectedValue), (moyenDePaiement)this->MoyenPaiement->SelectedItem, this->DateLivraison->Text, this->DateEmission->Text, this->DatePaiement->Text);
			this->processusContient->modifier(Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->IDCommande->Text), Convert::ToInt32(this->Quantite->Text));
		}
		else if (this->mode == "suppr")
		{
			this->processusContient->supprimer(Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->IDCommande->Text));
			this->processusCommande->supprimer(Convert::ToInt32(this->IDCommande->Text));
		}
		iniDataSet("Commande", "SELECT Commande.ID, Article.Nom_Article AS Article, contient.quantite, Cout.Cout_HT AS Cout_HT_Par_Article, Commande.Prix_Total_TTC FROM Commande RIGHT JOIN (contient INNER JOIN (Article LEFT JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON contient.ID_Commande = Commande.ID");
		iniDataSetPanier();
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
	private: System::Void BoxTVA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdatePrixMoy();
	}
	private: System::Void BoxRemise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdatePrixMoy();
	}
	private: System::Void BoxMarge_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdatePrixMoy();
	}
	private: System::Void BoxDemarque_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdatePrixMoy();
	}
	private: System::Void ArticleCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dataGridView1->SelectedRows[0]->Cells[0]->Selected == true)
		{
			IDCommande->Text = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
			//int i = 0;
			ArticleCBox->SelectedIndex = ArticleCBox->FindStringExact(Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value));
			/*
			while (ArticleCBox->Items[i]->ToString() != Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value))
			{
				i++;
			}
			ArticleCBox->SelectedItem = ArticleCBox->Items[i];
			ArticleCBox->SelectedText = ArticleCBox->SelectedItem->ToString();
			ArticleCBox->SelectedValue = ArticleCBox->SelectedIndex.ToString();
			*/
		}

	}
	private: System::Void AjouteArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->processusContient->ajouter(Convert::ToInt32(ArticleCBox->SelectedValue), Convert::ToInt32(this->IDCommande->Text), Convert::ToInt32(this->Quantite->Text));
		UpdatePrixMoy();
		iniDataSet("Commande", "SELECT Commande.ID, Article.Nom_Article AS Article, contient.quantite, Cout.Cout_HT AS Cout_HT_Par_Article, Commande.Prix_Total_TTC FROM Commande RIGHT JOIN (contient INNER JOIN (Article LEFT JOIN Cout ON Article.ID_Cout = Cout.ID) ON contient.ID = Article.ID) ON contient.ID_Commande = Commande.ID");
	}
};
}
