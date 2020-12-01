#pragma once
#include "Personne.h"

class Client : public Personne
{
public:
	int obtenirNumClient() { return numClient; }
	std::string obtenirDateNaissance() { return dateNaissance; }
	Adresse obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = m_adresse[position]; }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = m_adresse[position]; }

private:
	const int numClient;
	std::string dateNaissance;
	Adresse m_adresseLivraison;
	Adresse m_adresseFacturation;
};

