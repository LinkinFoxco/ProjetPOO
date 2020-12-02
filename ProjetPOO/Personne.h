#pragma once
#include "Adresse.h"
#include <cliext/vector>

ref class Personne
{
public:
	std::string m_nom;
	std::string m_prenom;
	std::vector<Adresse> m_adresse;

	void ajouterAdresse(Adresse NAdresse) { m_adresse.push_back(NAdresse); }
	void retirerAdresse(Adresse);

	System::String^ obtenirPNom() { return m_nom; }
	System::String^ obtenirPPrenom() { return m_prenom; }
	Adresse obtenirPAdresse(int position) { return m_adresse[position]; }
	cliext::vector<Adresse> obtenirPAdresseTout() { return m_adresse; }

	void modifierPNom(std::string Nnom) { m_nom = Nnom; }
	void modifierPPrenom(std::string Nprenom) { m_prenom = Nprenom; }
};