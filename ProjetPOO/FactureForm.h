#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FactureForm
	/// </summary>
	public ref class FactureForm : public System::Windows::Forms::Form
	{
	public:
		FactureForm(void)
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
		~FactureForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ FactureTxT;
	private: System::Windows::Forms::Label^ NomSociete;
	private: System::Windows::Forms::Label^ RueSociete;
	private: System::Windows::Forms::Label^ CodePostalVille;
	private: System::Windows::Forms::Label^ Telephone;
	private: System::Windows::Forms::Label^ DateTxt;
	private: System::Windows::Forms::Label^ NFactureTxt;
	private: System::Windows::Forms::Label^ NFacture;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ RefClient;
	private: System::Windows::Forms::Label^ RefClientTxT;
	private: System::Windows::Forms::Label^ PaiementTxt;
	private: System::Windows::Forms::Label^ Paiement;
	private: System::Windows::Forms::Label^ FacturerTxt;
	private: System::Windows::Forms::Label^ FacturerNomClient;
	private: System::Windows::Forms::Label^ FacturerSocieteTxT;
	private: System::Windows::Forms::Label^ FacturerRueClient;
	private: System::Windows::Forms::Label^ FacturerCodePostalVille;
	private: System::Windows::Forms::Label^ FacturerTel;
	private: System::Windows::Forms::Label^ FacturerMail;
	private: System::Windows::Forms::DataGridView^ FactureGrid;
	private: System::Windows::Forms::Label^ SousTotalTxT;
	private: System::Windows::Forms::Label^ PrixHT;
	private: System::Windows::Forms::Label^ TVATxT;
	private: System::Windows::Forms::Label^ TVA;
	private: System::Windows::Forms::Label^ TaxeTxT;
	private: System::Windows::Forms::Label^ DifHT;
	private: System::Windows::Forms::Label^ TotalTxT;
	private: System::Windows::Forms::Label^ TotalPrix;
	private: System::Windows::Forms::Label^ PhraseTxT;



	protected:





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
			this->FactureTxT = (gcnew System::Windows::Forms::Label());
			this->NomSociete = (gcnew System::Windows::Forms::Label());
			this->RueSociete = (gcnew System::Windows::Forms::Label());
			this->CodePostalVille = (gcnew System::Windows::Forms::Label());
			this->Telephone = (gcnew System::Windows::Forms::Label());
			this->DateTxt = (gcnew System::Windows::Forms::Label());
			this->NFactureTxt = (gcnew System::Windows::Forms::Label());
			this->NFacture = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->RefClient = (gcnew System::Windows::Forms::Label());
			this->RefClientTxT = (gcnew System::Windows::Forms::Label());
			this->PaiementTxt = (gcnew System::Windows::Forms::Label());
			this->Paiement = (gcnew System::Windows::Forms::Label());
			this->FacturerTxt = (gcnew System::Windows::Forms::Label());
			this->FacturerNomClient = (gcnew System::Windows::Forms::Label());
			this->FacturerSocieteTxT = (gcnew System::Windows::Forms::Label());
			this->FacturerRueClient = (gcnew System::Windows::Forms::Label());
			this->FacturerCodePostalVille = (gcnew System::Windows::Forms::Label());
			this->FacturerTel = (gcnew System::Windows::Forms::Label());
			this->FacturerMail = (gcnew System::Windows::Forms::Label());
			this->FactureGrid = (gcnew System::Windows::Forms::DataGridView());
			this->SousTotalTxT = (gcnew System::Windows::Forms::Label());
			this->PrixHT = (gcnew System::Windows::Forms::Label());
			this->TVATxT = (gcnew System::Windows::Forms::Label());
			this->TVA = (gcnew System::Windows::Forms::Label());
			this->TaxeTxT = (gcnew System::Windows::Forms::Label());
			this->DifHT = (gcnew System::Windows::Forms::Label());
			this->TotalTxT = (gcnew System::Windows::Forms::Label());
			this->TotalPrix = (gcnew System::Windows::Forms::Label());
			this->PhraseTxT = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FactureGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// FactureTxT
			// 
			this->FactureTxT->AutoSize = true;
			this->FactureTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FactureTxT->ForeColor = System::Drawing::Color::RoyalBlue;
			this->FactureTxT->Location = System::Drawing::Point(706, 14);
			this->FactureTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FactureTxT->Name = L"FactureTxT";
			this->FactureTxT->Size = System::Drawing::Size(208, 58);
			this->FactureTxT->TabIndex = 0;
			this->FactureTxT->Text = L"Facture";
			// 
			// NomSociete
			// 
			this->NomSociete->AutoSize = true;
			this->NomSociete->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomSociete->ForeColor = System::Drawing::Color::RoyalBlue;
			this->NomSociete->Location = System::Drawing::Point(18, 23);
			this->NomSociete->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NomSociete->Name = L"NomSociete";
			this->NomSociete->Size = System::Drawing::Size(339, 49);
			this->NomSociete->TabIndex = 1;
			this->NomSociete->Text = L"Plancton Mania";
			this->NomSociete->Click += gcnew System::EventHandler(this, &FactureForm::label1_Click);
			// 
			// RueSociete
			// 
			this->RueSociete->AutoSize = true;
			this->RueSociete->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RueSociete->ForeColor = System::Drawing::Color::Black;
			this->RueSociete->Location = System::Drawing::Point(21, 74);
			this->RueSociete->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RueSociete->Name = L"RueSociete";
			this->RueSociete->Size = System::Drawing::Size(138, 29);
			this->RueSociete->TabIndex = 2;
			this->RueSociete->Text = L"Rue Societe";
			// 
			// CodePostalVille
			// 
			this->CodePostalVille->AutoSize = true;
			this->CodePostalVille->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CodePostalVille->ForeColor = System::Drawing::Color::Black;
			this->CodePostalVille->Location = System::Drawing::Point(21, 103);
			this->CodePostalVille->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CodePostalVille->Name = L"CodePostalVille";
			this->CodePostalVille->Size = System::Drawing::Size(194, 29);
			this->CodePostalVille->TabIndex = 3;
			this->CodePostalVille->Text = L"Code Postal, Ville";
			// 
			// Telephone
			// 
			this->Telephone->AutoSize = true;
			this->Telephone->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone->ForeColor = System::Drawing::Color::Black;
			this->Telephone->Location = System::Drawing::Point(21, 132);
			this->Telephone->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Telephone->Name = L"Telephone";
			this->Telephone->Size = System::Drawing::Size(123, 29);
			this->Telephone->TabIndex = 4;
			this->Telephone->Text = L"Téléphone";
			// 
			// DateTxt
			// 
			this->DateTxt->AutoSize = true;
			this->DateTxt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateTxt->ForeColor = System::Drawing::Color::Black;
			this->DateTxt->Location = System::Drawing::Point(852, 132);
			this->DateTxt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateTxt->Name = L"DateTxt";
			this->DateTxt->Size = System::Drawing::Size(63, 29);
			this->DateTxt->TabIndex = 5;
			this->DateTxt->Text = L"Date";
			// 
			// NFactureTxt
			// 
			this->NFactureTxt->AutoSize = true;
			this->NFactureTxt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NFactureTxt->ForeColor = System::Drawing::Color::Black;
			this->NFactureTxt->Location = System::Drawing::Point(690, 132);
			this->NFactureTxt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NFactureTxt->Name = L"NFactureTxt";
			this->NFactureTxt->Size = System::Drawing::Size(128, 29);
			this->NFactureTxt->TabIndex = 6;
			this->NFactureTxt->Text = L"N° Facture";
			// 
			// NFacture
			// 
			this->NFacture->AutoSize = true;
			this->NFacture->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NFacture->ForeColor = System::Drawing::Color::Black;
			this->NFacture->Location = System::Drawing::Point(690, 162);
			this->NFacture->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NFacture->Name = L"NFacture";
			this->NFacture->Size = System::Drawing::Size(120, 29);
			this->NFacture->TabIndex = 7;
			this->NFacture->Text = L"N°Facture";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::Color::Black;
			this->Date->Location = System::Drawing::Point(852, 162);
			this->Date->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(63, 29);
			this->Date->TabIndex = 8;
			this->Date->Text = L"Date";
			// 
			// RefClient
			// 
			this->RefClient->AutoSize = true;
			this->RefClient->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefClient->ForeColor = System::Drawing::Color::Black;
			this->RefClient->Location = System::Drawing::Point(690, 240);
			this->RefClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RefClient->Name = L"RefClient";
			this->RefClient->Size = System::Drawing::Size(107, 29);
			this->RefClient->TabIndex = 11;
			this->RefClient->Text = L"RefClient";
			// 
			// RefClientTxT
			// 
			this->RefClientTxT->AutoSize = true;
			this->RefClientTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefClientTxT->ForeColor = System::Drawing::Color::Black;
			this->RefClientTxT->Location = System::Drawing::Point(690, 211);
			this->RefClientTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RefClientTxT->Name = L"RefClientTxT";
			this->RefClientTxT->Size = System::Drawing::Size(115, 29);
			this->RefClientTxT->TabIndex = 10;
			this->RefClientTxT->Text = L"Réf Client";
			// 
			// PaiementTxt
			// 
			this->PaiementTxt->AutoSize = true;
			this->PaiementTxt->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaiementTxt->ForeColor = System::Drawing::Color::Black;
			this->PaiementTxt->Location = System::Drawing::Point(818, 211);
			this->PaiementTxt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PaiementTxt->Name = L"PaiementTxt";
			this->PaiementTxt->Size = System::Drawing::Size(111, 29);
			this->PaiementTxt->TabIndex = 9;
			this->PaiementTxt->Text = L"Paiement";
			// 
			// Paiement
			// 
			this->Paiement->AutoSize = true;
			this->Paiement->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Paiement->ForeColor = System::Drawing::Color::Black;
			this->Paiement->Location = System::Drawing::Point(818, 240);
			this->Paiement->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Paiement->Name = L"Paiement";
			this->Paiement->Size = System::Drawing::Size(111, 29);
			this->Paiement->TabIndex = 12;
			this->Paiement->Text = L"Paiement";
			// 
			// FacturerTxt
			// 
			this->FacturerTxt->AutoSize = true;
			this->FacturerTxt->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerTxt->ForeColor = System::Drawing::Color::Black;
			this->FacturerTxt->Location = System::Drawing::Point(52, 211);
			this->FacturerTxt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerTxt->Name = L"FacturerTxt";
			this->FacturerTxt->Size = System::Drawing::Size(167, 35);
			this->FacturerTxt->TabIndex = 13;
			this->FacturerTxt->Text = L"Facturer À";
			// 
			// FacturerNomClient
			// 
			this->FacturerNomClient->AutoSize = true;
			this->FacturerNomClient->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerNomClient->ForeColor = System::Drawing::Color::Black;
			this->FacturerNomClient->Location = System::Drawing::Point(21, 246);
			this->FacturerNomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerNomClient->Name = L"FacturerNomClient";
			this->FacturerNomClient->Size = System::Drawing::Size(120, 29);
			this->FacturerNomClient->TabIndex = 14;
			this->FacturerNomClient->Text = L"NomClient";
			// 
			// FacturerSocieteTxT
			// 
			this->FacturerSocieteTxT->AutoSize = true;
			this->FacturerSocieteTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerSocieteTxT->ForeColor = System::Drawing::Color::Black;
			this->FacturerSocieteTxT->Location = System::Drawing::Point(21, 275);
			this->FacturerSocieteTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerSocieteTxT->Name = L"FacturerSocieteTxT";
			this->FacturerSocieteTxT->Size = System::Drawing::Size(173, 29);
			this->FacturerSocieteTxT->TabIndex = 15;
			this->FacturerSocieteTxT->Text = L"Plancton Mania";
			// 
			// FacturerRueClient
			// 
			this->FacturerRueClient->AutoSize = true;
			this->FacturerRueClient->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerRueClient->ForeColor = System::Drawing::Color::Black;
			this->FacturerRueClient->Location = System::Drawing::Point(21, 305);
			this->FacturerRueClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerRueClient->Name = L"FacturerRueClient";
			this->FacturerRueClient->Size = System::Drawing::Size(112, 29);
			this->FacturerRueClient->TabIndex = 16;
			this->FacturerRueClient->Text = L"RueClient";
			// 
			// FacturerCodePostalVille
			// 
			this->FacturerCodePostalVille->AutoSize = true;
			this->FacturerCodePostalVille->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerCodePostalVille->ForeColor = System::Drawing::Color::Black;
			this->FacturerCodePostalVille->Location = System::Drawing::Point(21, 334);
			this->FacturerCodePostalVille->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerCodePostalVille->Name = L"FacturerCodePostalVille";
			this->FacturerCodePostalVille->Size = System::Drawing::Size(186, 29);
			this->FacturerCodePostalVille->TabIndex = 17;
			this->FacturerCodePostalVille->Text = L"CodePostal, Ville";
			// 
			// FacturerTel
			// 
			this->FacturerTel->AutoSize = true;
			this->FacturerTel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerTel->ForeColor = System::Drawing::Color::Black;
			this->FacturerTel->Location = System::Drawing::Point(21, 363);
			this->FacturerTel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerTel->Name = L"FacturerTel";
			this->FacturerTel->Size = System::Drawing::Size(45, 29);
			this->FacturerTel->TabIndex = 18;
			this->FacturerTel->Text = L"Tel";
			// 
			// FacturerMail
			// 
			this->FacturerMail->AutoSize = true;
			this->FacturerMail->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturerMail->ForeColor = System::Drawing::Color::Black;
			this->FacturerMail->Location = System::Drawing::Point(21, 392);
			this->FacturerMail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FacturerMail->Name = L"FacturerMail";
			this->FacturerMail->Size = System::Drawing::Size(55, 29);
			this->FacturerMail->TabIndex = 19;
			this->FacturerMail->Text = L"Mail";
			// 
			// FactureGrid
			// 
			this->FactureGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FactureGrid->Location = System::Drawing::Point(27, 426);
			this->FactureGrid->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->FactureGrid->Name = L"FactureGrid";
			this->FactureGrid->RowHeadersWidth = 62;
			this->FactureGrid->Size = System::Drawing::Size(886, 302);
			this->FactureGrid->TabIndex = 20;
			// 
			// SousTotalTxT
			// 
			this->SousTotalTxT->AutoSize = true;
			this->SousTotalTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SousTotalTxT->ForeColor = System::Drawing::Color::Black;
			this->SousTotalTxT->Location = System::Drawing::Point(690, 732);
			this->SousTotalTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SousTotalTxT->Name = L"SousTotalTxT";
			this->SousTotalTxT->Size = System::Drawing::Size(141, 29);
			this->SousTotalTxT->TabIndex = 21;
			this->SousTotalTxT->Text = L"Sous-Total";
			// 
			// PrixHT
			// 
			this->PrixHT->AutoSize = true;
			this->PrixHT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrixHT->ForeColor = System::Drawing::Color::Black;
			this->PrixHT->Location = System::Drawing::Point(831, 732);
			this->PrixHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PrixHT->Name = L"PrixHT";
			this->PrixHT->Size = System::Drawing::Size(82, 29);
			this->PrixHT->TabIndex = 22;
			this->PrixHT->Text = L"PrixHT";
			// 
			// TVATxT
			// 
			this->TVATxT->AutoSize = true;
			this->TVATxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVATxT->ForeColor = System::Drawing::Color::Black;
			this->TVATxT->Location = System::Drawing::Point(690, 762);
			this->TVATxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TVATxT->Name = L"TVATxT";
			this->TVATxT->Size = System::Drawing::Size(60, 29);
			this->TVATxT->TabIndex = 23;
			this->TVATxT->Text = L"TVA";
			// 
			// TVA
			// 
			this->TVA->AutoSize = true;
			this->TVA->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVA->ForeColor = System::Drawing::Color::Black;
			this->TVA->Location = System::Drawing::Point(831, 762);
			this->TVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(55, 29);
			this->TVA->TabIndex = 24;
			this->TVA->Text = L"TVA";
			// 
			// TaxeTxT
			// 
			this->TaxeTxT->AutoSize = true;
			this->TaxeTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TaxeTxT->ForeColor = System::Drawing::Color::Black;
			this->TaxeTxT->Location = System::Drawing::Point(690, 791);
			this->TaxeTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TaxeTxT->Name = L"TaxeTxT";
			this->TaxeTxT->Size = System::Drawing::Size(71, 29);
			this->TaxeTxT->TabIndex = 25;
			this->TaxeTxT->Text = L"Taxe";
			// 
			// DifHT
			// 
			this->DifHT->AutoSize = true;
			this->DifHT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DifHT->ForeColor = System::Drawing::Color::Black;
			this->DifHT->Location = System::Drawing::Point(831, 791);
			this->DifHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DifHT->Name = L"DifHT";
			this->DifHT->Size = System::Drawing::Size(66, 29);
			this->DifHT->TabIndex = 26;
			this->DifHT->Text = L"DifHt";
			// 
			// TotalTxT
			// 
			this->TotalTxT->AutoSize = true;
			this->TotalTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalTxT->ForeColor = System::Drawing::Color::Black;
			this->TotalTxT->Location = System::Drawing::Point(690, 820);
			this->TotalTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TotalTxT->Name = L"TotalTxT";
			this->TotalTxT->Size = System::Drawing::Size(74, 29);
			this->TotalTxT->TabIndex = 27;
			this->TotalTxT->Text = L"Total";
			// 
			// TotalPrix
			// 
			this->TotalPrix->AutoSize = true;
			this->TotalPrix->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalPrix->ForeColor = System::Drawing::Color::Black;
			this->TotalPrix->Location = System::Drawing::Point(831, 820);
			this->TotalPrix->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TotalPrix->Name = L"TotalPrix";
			this->TotalPrix->Size = System::Drawing::Size(66, 29);
			this->TotalPrix->TabIndex = 28;
			this->TotalPrix->Text = L"Total";
			// 
			// PhraseTxT
			// 
			this->PhraseTxT->AutoSize = true;
			this->PhraseTxT->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhraseTxT->ForeColor = System::Drawing::Color::Black;
			this->PhraseTxT->Location = System::Drawing::Point(18, 965);
			this->PhraseTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PhraseTxT->Name = L"PhraseTxT";
			this->PhraseTxT->Size = System::Drawing::Size(656, 24);
			this->PhraseTxT->TabIndex = 29;
			this->PhraseTxT->Text = L"Pour toute question convernant cette facture, contactez le service client.";
			// 
			// FactureForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1088, 1008);
			this->Controls->Add(this->PhraseTxT);
			this->Controls->Add(this->TotalPrix);
			this->Controls->Add(this->TotalTxT);
			this->Controls->Add(this->DifHT);
			this->Controls->Add(this->TaxeTxT);
			this->Controls->Add(this->TVA);
			this->Controls->Add(this->TVATxT);
			this->Controls->Add(this->PrixHT);
			this->Controls->Add(this->SousTotalTxT);
			this->Controls->Add(this->FactureGrid);
			this->Controls->Add(this->FacturerMail);
			this->Controls->Add(this->FacturerTel);
			this->Controls->Add(this->FacturerCodePostalVille);
			this->Controls->Add(this->FacturerRueClient);
			this->Controls->Add(this->FacturerSocieteTxT);
			this->Controls->Add(this->FacturerNomClient);
			this->Controls->Add(this->FacturerTxt);
			this->Controls->Add(this->Paiement);
			this->Controls->Add(this->RefClient);
			this->Controls->Add(this->RefClientTxT);
			this->Controls->Add(this->PaiementTxt);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->NFacture);
			this->Controls->Add(this->NFactureTxt);
			this->Controls->Add(this->DateTxt);
			this->Controls->Add(this->Telephone);
			this->Controls->Add(this->CodePostalVille);
			this->Controls->Add(this->RueSociete);
			this->Controls->Add(this->NomSociete);
			this->Controls->Add(this->FactureTxT);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FactureForm";
			this->Text = L"FactureForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FactureGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
