#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Personnel() {
		referencePersonnel = -1;
		m_dateEmbauche = "RIEN";
		m_Superieur = "";
	}
	int obtenirAdresseDomicile() { return m_idAdresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	System::String^ obtenirSuperieur() { return m_Superieur; }
	int obtenirReferencePersonnel() { return referencePersonnel; }
	void modifierAdresseDomicile(int newAdresse) { m_idAdresseDomicile = newAdresse; }
	void modifierDateEmbauche(System::String^ dateEnbauche) { m_dateEmbauche = dateEnbauche; }
	void modifierSuperieur(System::String^ idSuperieurHierarchique) { m_Superieur = idSuperieurHierarchique; }
	void modifierReferencePersonnel(int Nref) { referencePersonnel = Nref; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	int referencePersonnel;
	int m_idAdresseDomicile;
	System::String^ m_dateEmbauche;
	System::String^ m_Superieur;

};

