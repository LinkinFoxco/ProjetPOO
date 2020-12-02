#pragma once
#include "Personne.h"

ref class Client : public Personne
{
protected:
	int reference;
	System::String^ m_dateNaissance;

public:

	Client(System::String^ NdateNaissance) {
		m_dateNaissance = NdateNaissance;
	}
	int obtenirCReference() { return reference; }
	System::String^ obtenirDateNaissance() { return m_dateNaissance; }
	Adresse^ obtenirAdresseLivraison() { return m_adresseLivraison; }
	Adresse^ obtenirAdresseFacturation() { return m_adresseFacturation; }

	void modifierAdresseLivraison(int position) { m_adresseLivraison = obtenirPAdresse(position); }
	void modifierAdresseFacturation(int position) { m_adresseFacturation = obtenirPAdresse(position); }
	void modifierDateNaissance(System::String^ NDateNaissance) { m_dateNaissance = NDateNaissance; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

