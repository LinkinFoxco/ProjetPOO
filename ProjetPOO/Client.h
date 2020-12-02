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

	Client(System::String^ NdateNaissance) {
		m_dateNaissance = NdateNaissance;
	}
	int obtenirCReference() { return referenceClient; }
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

