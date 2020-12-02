#pragma once
#include "Personne.h"

ref class Client : public Personne
{
protected:
	int numClient;
	System::String^ dateNaissance;
	Adresse^ m_adresseLivraison;
	Adresse^ m_adresseFacturation;

public:

	Client(System::String^ NdateNaissance, Adresse^ NadresseLivraison, Adresse^ NadresseFacturation, Personne^ NClient) {
		dateNaissance = NdateNaissance;
		m_adresseLivraison = NadresseLivraison;
		m_adresseFacturation = NadresseFacturation;
	}
	int obtenirNumClient() { return numClient; }
	System::String^ obtenirDateNaissance() { return dateNaissance; }
	Adresse^ obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse^ obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = obtenirPAdresse(position); }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = obtenirPAdresse(position); }

	System::String^ SELECTClient();
	System::String^ SELECTPossede();
	System::String^ INSERTClient();
	System::String^ INSERTPossede();
	System::String^ UPDATEClient();
	System::String^ UPDATEPossede();
	System::String^ DELETEClient();
	System::String^ DELETEPossede();
};

