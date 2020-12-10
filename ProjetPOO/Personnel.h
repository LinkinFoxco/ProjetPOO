#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Personnel() {
		referencePersonnel = -1;
		m_dateEmbauche = "RIEN";
		m_idSuperieur = -1;
	}
	int obtenirAdresseDomicile() { return m_idAdresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	int obtenirSuperieur() { return m_idSuperieur; }
	int obtenirReferencePersonnel() { return referencePersonnel; }
	void modifierAdresseDomicile(int newAdresse) { m_idAdresseDomicile = newAdresse; }
	void modifierDateEmbauche(System::String^ dateEnbauche) { m_dateEmbauche = dateEnbauche; }
	void modifierSuperieur(int idSuperieurHierarchique) { m_idSuperieur = idSuperieurHierarchique; }
	void modifierReferencePersonnel(int Nref) { referencePersonnel = Nref; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	int referencePersonnel;
	int m_idAdresseDomicile;
	System::String^ m_dateEmbauche;
	int m_idSuperieur;

};

