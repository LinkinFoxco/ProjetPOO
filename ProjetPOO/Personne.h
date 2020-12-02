#pragma once
#include "Adresse.h"
#include <cliext/vector>

ref class Personne
{
public:
	System::String^ m_nom;
	System::String^ m_prenom;
	cliext::vector<Adresse^> m_adresse;
	int m_reference;

	void ajouterAdresse(Adresse NAdresse) { m_adresse.push_back(NAdresse); }
	void retirerAdresse(Adresse);

	System::String^ obtenirPNom() { return m_nom; }
	System::String^ obtenirPPrenom() { return m_prenom; }
	Adresse^ obtenirPAdresse(int position) { return m_adresse[position]; }
	cliext::vector<Adresse^> obtenirPAdresseTout() { return m_adresse; }
	int obtenirReference() { return m_reference; }

	void modifierPNom(System::String^ Nnom) { m_nom = Nnom; }
	void modifierPPrenom(System::String^ Nprenom) { m_prenom = Nprenom; }
};