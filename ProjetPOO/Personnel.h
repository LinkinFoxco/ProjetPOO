#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Adresse^ obtenirAdresseDomicile() { return m_adresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	Personnel^ obtenirSuperieur() { return superieur; }
	Societe^ obtenirSociete() { return m_societe; }
	void modifierAdresseDomicile(int position) { m_adresseDomicile = m_adresse[position]; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ superieur;
	Societe^ m_societe;
};

