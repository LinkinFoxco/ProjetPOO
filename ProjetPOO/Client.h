#pragma once
#include "Personne.h"

ref class Client : public Personne
{
protected:
	int referenceClient;
	System::String^ m_dateNaissance;
	Adresse^ m_adresseLivraison;
	Adresse^ m_adresseFacturation;

public:
	Client() {
		referenceClient = -1;
		m_dateNaissance = "00/00/00";
		m_adresseLivraison = gcnew Adresse();
		m_adresseFacturation = gcnew Adresse();
	}
	Client(System::String^ NdateNaissance) {
		m_dateNaissance = NdateNaissance;
	}
	int obtenirReferenceClient() { return referenceClient; }
	System::String^ obtenirDateNaissance() { return m_dateNaissance; }
	Adresse^ obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse^ obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = obtenirPAdresse(position); }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = obtenirPAdresse(position); }
	void modifierdateNaissance(System::String^ DateN) { m_dateNaissance = DateN; }
	void modifierReferenceClient(int idC) { referenceClient = idC; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

