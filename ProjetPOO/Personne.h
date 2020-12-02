#pragma once
#include "Adresse.h"
#include <cliext/vector>

ref class Personne
{
public:
	int m_reference;
	System::String^ m_nom;
	System::String^ m_prenom;
	cliext::vector<Adresse> m_adresse;

	void ajouterAdresse(Adresse NAdresse) { m_adresse.push_back(NAdresse); }
	void retirerAdresse(Adresse);

	System::String^ obtenirPNom() { return m_nom; }
	System::String^ obtenirPPrenom() { return m_prenom; }
	Adresse obtenirPAdresse(int position) { return m_adresse[position]; }
	cliext::vector<Adresse> obtenirPAdresseTout() { return m_adresse; }

	void modifierPNom(System::String^ Nnom) { m_nom = Nnom; }
	void modifierPPrenom(System::String^ Nprenom) { m_prenom = Nprenom; }
	void modifierP_Reference(int Nreference) { m_reference = Nreference; }
};