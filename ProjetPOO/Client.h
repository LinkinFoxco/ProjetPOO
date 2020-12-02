#pragma once
#include "Personne.h"

ref class Client : public Personne
{
protected:
	int reference;
	System::String^ m_dateNaissance;
	Adresse^ m_adresseLivraison;
	Adresse^ m_adresseFacturation;

public:

	Client(System::String^ NdateNaissance, Adresse^ NadresseLivraison, Adresse^ NadresseFacturation) {
		m_dateNaissance = NdateNaissance;
		m_adresseLivraison = NadresseLivraison;
		m_adresseFacturation = NadresseFacturation;
	}
	int obtenirCReference() { return reference; }
	System::String^ obtenirDateNaissance() { return m_dateNaissance; }
	Adresse^ obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse^ obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = obtenirPAdresse(position); }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = obtenirPAdresse(position); }
	void modifierDateNaissance(System::String^ NDateNaissance) { m_dateNaissance = NDateNaissance; }

	System::String^ SELECTClient();
	System::String^ SELECTPossede();
	System::String^ INSERTClient();
	System::String^ INSERTPossede();
	System::String^ UPDATEClient();
	System::String^ UPDATEPossede();
	System::String^ DELETEClient();
	System::String^ DELETEPossede();
};

