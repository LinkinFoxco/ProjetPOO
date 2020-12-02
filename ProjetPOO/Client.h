#pragma once
#include "Personne.h"

ref class Client : public Personne
{
protected:
	const int numClient;
	System::String^ dateNaissance;
	Adresse^ m_adresseLivraison;
	Adresse^ m_adresseFacturation;
	Personne^ m_client;

public:
	int obtenirNumClient() { return numClient; }
	System::String^ obtenirDateNaissance() { return dateNaissance; }
	Adresse obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = m_adresse[position]; }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = m_adresse[position]; }

private:
	const int numClient;
	String^ dateNaissance;
	Adresse^ m_adresseLivraison;
	Adresse^ m_adresseFacturation;
};

