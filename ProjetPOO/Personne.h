#pragma once
#include "Adresse.h"

using namespace System::Collections::Generic;

ref class Personne
{
private:
	System::String^ m_nom;
	System::String^ m_prenom;
	List<Adresse^>^ m_adresse = gcnew List<Adresse^>();

public:
	void ajouterAdresse(Adresse^ NAdresse) { m_adresse->Add(NAdresse); }
	void retirerAdresse(Adresse^);

	System::String^ obtenirPNom() { return m_nom; }
	System::String^ obtenirPPrenom() { return m_prenom; }
	Adresse^ obtenirPAdresse(int position) { return m_adresse[position]; }
	List<Adresse^>^ obtenirPAdresseTout() { return m_adresse; }

	void modifierPNom(System::String^ Nnom) { m_nom = Nnom; }
	void modifierPPrenom(System::String^ Nprenom) { m_prenom = Nprenom; }
};