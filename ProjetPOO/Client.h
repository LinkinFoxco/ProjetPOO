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
	void modifierdateNaissance(System::String^ DateN) { dateNaissance = DateN; }
	void modifierIDclient(int idC) { numClient = idC; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

