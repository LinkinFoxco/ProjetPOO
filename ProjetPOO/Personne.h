#pragma once
#include "Adresse.h"

using namespace System::Collections::Generic;

ref class Personne
{
protected:
	System::String^ m_nom;
	System::String^ m_prenom;
	List<Adresse^>^ m_adresse;
	int referencePersonne;

public:
	Personne() {
		m_nom = "RIEN";
		m_prenom = "RIEN";
		referencePersonne = -1;
	};

	void ajouterAdresse(Adresse^ NAdresse) { m_adresse->Add(NAdresse); }
	void retirerAdresse(Adresse^);

	int obtenirReferencePersonne() { return referencePersonne; }
	System::String^ obtenirPNom() { return m_nom; }
	System::String^ obtenirPPrenom() { return m_prenom; }
	Adresse^ obtenirPAdresse(int position) { return m_adresse[position]; }
	int obtenirPositionAdresse(Adresse^);
	List<Adresse^>^ obtenirPAdresseTout() { return m_adresse; }

	void modifierPNom(System::String^ Nnom) { m_nom = Nnom; }
	void modifierPPrenom(System::String^ Nprenom) { m_prenom = Nprenom; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};