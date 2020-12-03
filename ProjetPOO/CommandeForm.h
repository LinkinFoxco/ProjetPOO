#pragma once

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
	private: System::Windows::Forms::Button^ RightPlus;
	private: System::Windows::Forms::Button^ RightButton;
	private: System::Windows::Forms::Button^ LeftButton;
	private: System::Windows::Forms::Button^ LeftPlus;
	private: System::Windows::Forms::Label^ IDArticleTxT;
	private: System::Windows::Forms::TextBox^ IDArticle;
	private: System::Windows::Forms::Label^ ArticleTxT;
	private: System::Windows::Forms::TextBox^ ArticleCase;
	private: System::Windows::Forms::Label^ QuantiteTxT;
	private: System::Windows::Forms::TextBox^ QuantiteCase;
	private: System::Windows::Forms::ComboBox^ ComboBoxArticle;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->MessageTxT = (gcnew System::Windows::Forms::Label());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->RightPlus = (gcnew System::Windows::Forms::Button());
			this->RightButton = (gcnew System::Windows::Forms::Button());
			this->LeftButton = (gcnew System::Windows::Forms::Button());
			this->LeftPlus = (gcnew System::Windows::Forms::Button());
			this->IDArticleTxT = (gcnew System::Windows::Forms::Label());
			this->IDArticle = (gcnew System::Windows::Forms::TextBox());
			this->ArticleTxT = (gcnew System::Windows::Forms::Label());
			this->ArticleCase = (gcnew System::Windows::Forms::TextBox());
			this->QuantiteTxT = (gcnew System::Windows::Forms::Label());
			this->QuantiteCase = (gcnew System::Windows::Forms::TextBox());
			this->ComboBoxArticle = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(750, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(352, 255);
			this->dataGridView1->TabIndex = 0;
			// 
			// MessageTxT
			// 
			this->MessageTxT->AutoSize = true;
			this->MessageTxT->Location = System::Drawing::Point(23, 577);
			this->MessageTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MessageTxT->Name = L"MessageTxT";
			this->MessageTxT->Size = System::Drawing::Size(50, 13);
			this->MessageTxT->TabIndex = 17;
			this->MessageTxT->Text = L"Message";
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(15, 565);
			this->MessageBox->Margin = System::Windows::Forms::Padding(4);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->ReadOnly = true;
			this->MessageBox->Size = System::Drawing::Size(1047, 133);
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
			// RightPlus
			// 
			this->RightPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightPlus->Location = System::Drawing::Point(1022, 300);
			this->RightPlus->Margin = System::Windows::Forms::Padding(4);
			this->RightPlus->Name = L"RightPlus";
			this->RightPlus->Size = System::Drawing::Size(80, 28);
			this->RightPlus->TabIndex = 10;
			this->RightPlus->Text = L">>";
			this->RightPlus->UseVisualStyleBackColor = true;
			this->RightPlus->Click += gcnew System::EventHandler(this, &CommandeForm::RightPlus_Click);
			// 
			// RightButton
			// 
			this->RightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightButton->Location = System::Drawing::Point(929, 300);
			this->RightButton->Margin = System::Windows::Forms::Padding(4);
			this->RightButton->Name = L"RightButton";
			this->RightButton->Size = System::Drawing::Size(80, 28);
			this->RightButton->TabIndex = 9;
			this->RightButton->Text = L">";
			this->RightButton->UseVisualStyleBackColor = true;
			this->RightButton->Click += gcnew System::EventHandler(this, &CommandeForm::RightButton_Click);
			// 
			// LeftButton
			// 
			this->LeftButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftButton->Location = System::Drawing::Point(841, 300);
			this->LeftButton->Margin = System::Windows::Forms::Padding(4);
			this->LeftButton->Name = L"LeftButton";
			this->LeftButton->Size = System::Drawing::Size(80, 28);
			this->LeftButton->TabIndex = 8;
			this->LeftButton->Text = L"<";
			this->LeftButton->UseVisualStyleBackColor = true;
			this->LeftButton->Click += gcnew System::EventHandler(this, &CommandeForm::LeftButton_Click);
			// 
			// LeftPlus
			// 
			this->LeftPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftPlus->Location = System::Drawing::Point(750, 300);
			this->LeftPlus->Margin = System::Windows::Forms::Padding(4);
			this->LeftPlus->Name = L"LeftPlus";
			this->LeftPlus->Size = System::Drawing::Size(80, 28);
			this->LeftPlus->TabIndex = 7;
			this->LeftPlus->Text = L"<<";
			this->LeftPlus->UseVisualStyleBackColor = true;
			this->LeftPlus->Click += gcnew System::EventHandler(this, &CommandeForm::LeftPlus_Click);
			// 
			// IDArticleTxT
			// 
			this->IDArticleTxT->AutoSize = true;
			this->IDArticleTxT->Location = System::Drawing::Point(23, 31);
			this->IDArticleTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->IDArticleTxT->Name = L"IDArticleTxT";
			this->IDArticleTxT->Size = System::Drawing::Size(50, 13);
			this->IDArticleTxT->TabIndex = 2;
			this->IDArticleTxT->Text = L"ID Article";
			// 
			// IDArticle
			// 
			this->IDArticle->Location = System::Drawing::Point(27, 49);
			this->IDArticle->Margin = System::Windows::Forms::Padding(4);
			this->IDArticle->Name = L"IDArticle";
			this->IDArticle->ReadOnly = true;
			this->IDArticle->Size = System::Drawing::Size(235, 20);
			this->IDArticle->TabIndex = 1;
			// 
			// ArticleTxT
			// 
			this->ArticleTxT->AutoSize = true;
			this->ArticleTxT->Location = System::Drawing::Point(23, 75);
			this->ArticleTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ArticleTxT->Name = L"ArticleTxT";
			this->ArticleTxT->Size = System::Drawing::Size(36, 13);
			this->ArticleTxT->TabIndex = 4;
			this->ArticleTxT->Text = L"Article";
			// 
			// ArticleCase
			// 
			this->ArticleCase->Location = System::Drawing::Point(26, 96);
			this->ArticleCase->Margin = System::Windows::Forms::Padding(4);
			this->ArticleCase->Name = L"ArticleCase";
			this->ArticleCase->Size = System::Drawing::Size(235, 20);
			this->ArticleCase->TabIndex = 18;
			// 
			// QuantiteTxT
			// 
			this->QuantiteTxT->AutoSize = true;
			this->QuantiteTxT->Location = System::Drawing::Point(26, 122);
			this->QuantiteTxT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->QuantiteTxT->Name = L"QuantiteTxT";
			this->QuantiteTxT->Size = System::Drawing::Size(47, 13);
			this->QuantiteTxT->TabIndex = 6;
			this->QuantiteTxT->Text = L"Quantité";
			// 
			// QuantiteCase
			// 
			this->QuantiteCase->Location = System::Drawing::Point(27, 143);
			this->QuantiteCase->Margin = System::Windows::Forms::Padding(4);
			this->QuantiteCase->Name = L"QuantiteCase";
			this->QuantiteCase->Size = System::Drawing::Size(235, 20);
			this->QuantiteCase->TabIndex = 5;
			this->QuantiteCase->TextChanged += gcnew System::EventHandler(this, &CommandeForm::QuantiteCase_TextChanged);
			// 
			// ComboBoxArticle
			// 
			this->ComboBoxArticle->FormattingEnabled = true;
			this->ComboBoxArticle->Location = System::Drawing::Point(290, 94);
			this->ComboBoxArticle->Name = L"ComboBoxArticle";
			this->ComboBoxArticle->Size = System::Drawing::Size(121, 21);
			this->ComboBoxArticle->TabIndex = 19;
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1112, 711);
			this->Controls->Add(this->ComboBoxArticle);
			this->Controls->Add(this->QuantiteTxT);
			this->Controls->Add(this->QuantiteCase);
			this->Controls->Add(this->ArticleTxT);
			this->Controls->Add(this->ArticleCase);
			this->Controls->Add(this->IDArticleTxT);
			this->Controls->Add(this->IDArticle);
			this->Controls->Add(this->RightPlus);
			this->Controls->Add(this->RightButton);
			this->Controls->Add(this->LeftButton);
			this->Controls->Add(this->LeftPlus);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LeftPlus_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RightButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RightPlus_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void QuantiteCase_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
