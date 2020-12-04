#pragma once
#include "ClientForm.h"
#include "PersonnelForm.h"
#include "CommandeForm.h"

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



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int index;
		DataSet^ ds;
	private: System::Windows::Forms::Button^ GestionClients;
	private: System::Windows::Forms::Button^ GestionsPersonnels;

	private: System::Windows::Forms::Button^ GestionsCommandes;


		   String^ mode;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GestionClients = (gcnew System::Windows::Forms::Button());
			this->GestionsPersonnels = (gcnew System::Windows::Forms::Button());
			this->GestionsCommandes = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// GestionClients
			// 
			this->GestionClients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestionClients->Location = System::Drawing::Point(126, 139);
			this->GestionClients->Name = L"GestionClients";
			this->GestionClients->Size = System::Drawing::Size(560, 75);
			this->GestionClients->TabIndex = 0;
			this->GestionClients->Text = L"Gestion Clients";
			this->GestionClients->UseVisualStyleBackColor = true;
			this->GestionClients->Click += gcnew System::EventHandler(this, &AdminForm::GestionClients_Click);
			// 
			// GestionsPersonnels
			// 
			this->GestionsPersonnels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GestionsPersonnels->Location = System::Drawing::Point(126, 239);
			this->GestionsPersonnels->Name = L"GestionsPersonnels";
			this->GestionsPersonnels->Size = System::Drawing::Size(560, 75);
			this->GestionsPersonnels->TabIndex = 1;
			this->GestionsPersonnels->Text = L"Gestions Personnel";
			this->GestionsPersonnels->UseVisualStyleBackColor = true;
			this->GestionsPersonnels->Click += gcnew System::EventHandler(this, &AdminForm::GestionsPersonnels_Click);
			// 
			// GestionsCommandes
			// 
			this->GestionsCommandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GestionsCommandes->Location = System::Drawing::Point(126, 339);
			this->GestionsCommandes->Name = L"GestionsCommandes";
			this->GestionsCommandes->Size = System::Drawing::Size(560, 75);
			this->GestionsCommandes->TabIndex = 2;
			this->GestionsCommandes->Text = L"Gestions Commandes";
			this->GestionsCommandes->UseVisualStyleBackColor = true;
			this->GestionsCommandes->Click += gcnew System::EventHandler(this, &AdminForm::GestionsCommandes_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 578);
			this->Controls->Add(this->GestionsCommandes);
			this->Controls->Add(this->GestionsPersonnels);
			this->Controls->Add(this->GestionClients);
			this->Name = L"AdminForm";
			this->Text = L"Application POO";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GestionClients_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientForm^ ClientPannel = gcnew ClientForm();
		ClientPannel->Show();
	}
	private: System::Void GestionsPersonnels_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonnelForm^ PersonnelPannel = gcnew PersonnelForm();
		PersonnelPannel->Show();
	}
	private: System::Void GestionsCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		CommandeForm^ CommandePannel = gcnew CommandeForm();
		CommandePannel->Show();
	}
	};
}
