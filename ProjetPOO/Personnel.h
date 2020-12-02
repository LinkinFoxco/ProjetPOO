#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Adresse^ obtenirAdresseDomicile() { return m_adresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	Personnel^ obtenirSuperieur() { return superieur; }
	void modifierAdresseDomicile(int position) { m_adresseDomicile = obtenirPAdresse(position); }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ superieur;

};

