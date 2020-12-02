#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Adresse^ obtenirAdresseDomicile() { return m_adresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	Personnel^ obtenirSuperieur() { return superieur; }
	void modifierAdresseDomicile(int position) { m_adresseDomicile = m_adresse[position]; }
	void modifierDateEmbauche(String^ dateEnbauche) { m_dateEmbauche = dateEnbauche; }
	void modifierSuperieur(Personnel^ superieurHierarchique) { superieur = superieurHierarchique; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	int reference;
	int id_personne;
	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ superieur;
};

