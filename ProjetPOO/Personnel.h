#pragma once
#include "Personne.h"
#include "Societe.h"

ref class Personnel : public Personne
{
public:
	Personnel() {
		referencePersonnel = -1;
		m_adresseDomicile = gcnew Adresse();
		m_dateEmbauche = gcnew String("RIEN");
		m_superieur = gcnew Personnel();
	}
	Adresse^ obtenirAdresseDomicile() { return m_adresseDomicile; }
	System::String^ obtenirDateEmbauche() { return m_dateEmbauche; }
	Personnel^ obtenirSuperieur() { return m_superieur; }
	int obtenirReferencePersonnel() { return referencePersonnel; }
	void modifierAdresseDomicile(int position) { m_adresseDomicile = obtenirPAdresse(position); }
	void modifierDateEmbauche(System::String^ dateEnbauche) { m_dateEmbauche = dateEnbauche; }
	void modifierSuperieur(Personnel^ superieurHierarchique) { m_superieur = superieurHierarchique; }
	void modifierReferencePersonnel(int Nref) { referencePersonnel = Nref; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private :
	int referencePersonnel;
	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ m_superieur;

};

