#pragma once
#include "CL_svc_gestionArticle.h"
#include "CL_CAD.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ArticleForm
	/// </summary>
	public ref class ArticleForm : public System::Windows::Forms::Form
	{
	public:
		ArticleForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArticleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ IDArticle;

	private: System::Windows::Forms::Label^ IDArticleLBL;
	private: System::Windows::Forms::Label^ NomArticleLBL;
	private: System::Windows::Forms::TextBox^ NomArticle;


	private: System::Windows::Forms::Button^ LeftPlus;

	private: System::Windows::Forms::Button^ LeftButton;

	private: System::Windows::Forms::Button^ RightButton;
	private: System::Windows::Forms::Button^ RightPlus;



	private: System::Windows::Forms::Button^ Nouveau;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Enregistrer;
	private: System::Windows::Forms::TextBox^ DescriptionArticleBox;

	private: System::Windows::Forms::Label^ DescriptionArticleTxT;






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
	private: System::Windows::Forms::TextBox^ QuantiteArticle;
	private: System::Windows::Forms::Label^ QuantiteArticleLBL;
		   NS_Svc::CL_svc_gestionArticle^ processusArticle;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->IDArticle = (gcnew System::Windows::Forms::TextBox());
			   this->IDArticleLBL = (gcnew System::Windows::Forms::Label());
			   this->NomArticleLBL = (gcnew System::Windows::Forms::Label());
			   this->NomArticle = (gcnew System::Windows::Forms::TextBox());
			   this->LeftPlus = (gcnew System::Windows::Forms::Button());
			   this->LeftButton = (gcnew System::Windows::Forms::Button());
			   this->RightButton = (gcnew System::Windows::Forms::Button());
			   this->RightPlus = (gcnew System::Windows::Forms::Button());
			   this->Nouveau = (gcnew System::Windows::Forms::Button());
			   this->Modifier = (gcnew System::Windows::Forms::Button());
			   this->Supprimer = (gcnew System::Windows::Forms::Button());
			   this->Enregistrer = (gcnew System::Windows::Forms::Button());
			   this->DescriptionArticleBox = (gcnew System::Windows::Forms::TextBox());
			   this->DescriptionArticleTxT = (gcnew System::Windows::Forms::Label());
			   this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			   this->QuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			   this->QuantiteArticleLBL = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(562, 13);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(478, 160);
			   this->dataGridView1->TabIndex = 0;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ArticleForm::dataGridView1_CellContentClick);
			   // 
			   // IDArticle
			   // 
			   this->IDArticle->Location = System::Drawing::Point(27, 49);
			   this->IDArticle->Margin = System::Windows::Forms::Padding(4);
			   this->IDArticle->Name = L"IDArticle";
			   this->IDArticle->ReadOnly = true;
			   this->IDArticle->Size = System::Drawing::Size(235, 22);
			   this->IDArticle->TabIndex = 1;
			   this->IDArticle->TextChanged += gcnew System::EventHandler(this, &ArticleForm::IDPersonne_TextChanged);
			   // 
			   // IDArticleLBL
			   // 
			   this->IDArticleLBL->AutoSize = true;
			   this->IDArticleLBL->Location = System::Drawing::Point(23, 31);
			   this->IDArticleLBL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->IDArticleLBL->Name = L"IDArticleLBL";
			   this->IDArticleLBL->Size = System::Drawing::Size(64, 17);
			   this->IDArticleLBL->TabIndex = 2;
			   this->IDArticleLBL->Text = L"ID Article";
			   this->IDArticleLBL->Click += gcnew System::EventHandler(this, &ArticleForm::IDPersonneTxT_Click);
			   // 
			   // NomArticleLBL
			   // 
			   this->NomArticleLBL->AutoSize = true;
			   this->NomArticleLBL->Location = System::Drawing::Point(23, 86);
			   this->NomArticleLBL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->NomArticleLBL->Name = L"NomArticleLBL";
			   this->NomArticleLBL->Size = System::Drawing::Size(80, 17);
			   this->NomArticleLBL->TabIndex = 4;
			   this->NomArticleLBL->Text = L"Nom Article";
			   // 
			   // NomArticle
			   // 
			   this->NomArticle->Location = System::Drawing::Point(27, 105);
			   this->NomArticle->Margin = System::Windows::Forms::Padding(4);
			   this->NomArticle->Name = L"NomArticle";
			   this->NomArticle->Size = System::Drawing::Size(235, 22);
			   this->NomArticle->TabIndex = 3;
			   // 
			   // LeftPlus
			   // 
			   this->LeftPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LeftPlus->Location = System::Drawing::Point(562, 194);
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
			   this->LeftButton->Location = System::Drawing::Point(650, 194);
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
			   this->Nouveau->Click += gcnew System::EventHandler(this, &ArticleForm::Nouveau_Click);
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
			   this->Modifier->Click += gcnew System::EventHandler(this, &ArticleForm::Modifier_Click);
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
			   // DescriptionArticleBox
			   // 
			   this->DescriptionArticleBox->Location = System::Drawing::Point(23, 366);
			   this->DescriptionArticleBox->Margin = System::Windows::Forms::Padding(4);
			   this->DescriptionArticleBox->Multiline = true;
			   this->DescriptionArticleBox->Name = L"DescriptionArticleBox";
			   this->DescriptionArticleBox->ReadOnly = true;
			   this->DescriptionArticleBox->Size = System::Drawing::Size(669, 173);
			   this->DescriptionArticleBox->TabIndex = 16;
			   // 
			   // DescriptionArticleTxT
			   // 
			   this->DescriptionArticleTxT->AutoSize = true;
			   this->DescriptionArticleTxT->Location = System::Drawing::Point(20, 345);
			   this->DescriptionArticleTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->DescriptionArticleTxT->Name = L"DescriptionArticleTxT";
			   this->DescriptionArticleTxT->Size = System::Drawing::Size(122, 17);
			   this->DescriptionArticleTxT->TabIndex = 17;
			   this->DescriptionArticleTxT->Text = L"Description Article";
			   // 
			   // QuantiteArticle
			   // 
			   this->QuantiteArticle->Location = System::Drawing::Point(27, 166);
			   this->QuantiteArticle->Margin = System::Windows::Forms::Padding(4);
			   this->QuantiteArticle->Name = L"QuantiteArticle";
			   this->QuantiteArticle->Size = System::Drawing::Size(235, 22);
			   this->QuantiteArticle->TabIndex = 5;
			   this->QuantiteArticle->TextChanged += gcnew System::EventHandler(this, &ArticleForm::PrenomPersonne_TextChanged);
			   // 
			   // QuantiteArticleLBL
			   // 
			   this->QuantiteArticleLBL->AutoSize = true;
			   this->QuantiteArticleLBL->Location = System::Drawing::Point(23, 148);
			   this->QuantiteArticleLBL->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->QuantiteArticleLBL->Name = L"QuantiteArticleLBL";
			   this->QuantiteArticleLBL->Size = System::Drawing::Size(105, 17);
			   this->QuantiteArticleLBL->TabIndex = 6;
			   this->QuantiteArticleLBL->Text = L"Quantite Article";
			   // 
			   // ArticleForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1112, 711);
			   this->Controls->Add(this->DescriptionArticleTxT);
			   this->Controls->Add(this->DescriptionArticleBox);
			   this->Controls->Add(this->Enregistrer);
			   this->Controls->Add(this->Supprimer);
			   this->Controls->Add(this->Modifier);
			   this->Controls->Add(this->Nouveau);
			   this->Controls->Add(this->RightPlus);
			   this->Controls->Add(this->RightButton);
			   this->Controls->Add(this->LeftButton);
			   this->Controls->Add(this->LeftPlus);
			   this->Controls->Add(this->QuantiteArticleLBL);
			   this->Controls->Add(this->QuantiteArticle);
			   this->Controls->Add(this->NomArticleLBL);
			   this->Controls->Add(this->NomArticle);
			   this->Controls->Add(this->IDArticleLBL);
			   this->Controls->Add(this->IDArticle);
			   this->Controls->Add(this->dataGridView1);
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"ArticleForm";
			   this->Text = L"Application POO";
			   this->Load += gcnew System::EventHandler(this, &ArticleForm::ArticleForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: void iniDataSet(System::String^ table, System::String^ Query)
	{
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

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void IDPersonneTxT_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ArticleForm_Load(System::Object^ sender, System::EventArgs^ e) {
		iniDataSet("Article", "SELECT Cout.Cout_HT, Cout.Cout_TVA, Cout.Cout_TTC FROM Article LEFT JOIN Cout ON Article.ID_Cout = Cout.ID");
		index = 0;
		mode = "RIEN";
		ds = gcnew Data::DataSet();
		processusArticle = gcnew NS_Svc::CL_svc_gestionArticle();
		loadData(index);
		DescriptionArticleBox->Text = "Data chargees";

	}
	private:void loadData(int index)
	{
		this->ds->Clear();
		this->ds = processusArticle->listeArticle("liste");
		this->IDArticle->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->NomArticle->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->QuantiteArticle->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);

	}
	private: System::Void Nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
		IDArticle->Clear();
		NomArticle->Clear();
		QuantiteArticle->Clear();
		mode = "nouveau";
		DescriptionArticleBox->Text = "Veuillez saisir les informations du personnel et enregistrer.";
	}
	private: System::Void LeftPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		index = 0;
		loadData(index);
		DescriptionArticleBox->Text = "Enregistrement n :" + (index + 1);
	}
	private: System::Void LeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index > 0)
		{
			index--;
			loadData(index);
			DescriptionArticleBox->Text = "Enregistrement n :" + (index + 1);
		}
	}
	private: System::Void RightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		index++;
		loadData(index);
		DescriptionArticleBox->Text = "Enregistrement n :" + (index + 1);
	}
	private: System::Void RightPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		index = ds->Tables["liste"]->Rows->Count - 1;
		loadData(index);
		DescriptionArticleBox->Text = "Enregistrement n : " + (index + 1);
	}


	private: System::Void IDPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PrenomPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	
	
	};
}
