#pragma once
#include "Adresse.h"

ref class Societe
{
private:
	System::String^ m_nomSociete;
	System::String^ m_numServiceClient;
	System::String^ m_logo;
	//Adresse m_adresseSociete;
public:
	System::String^ obtenirNomSociete() { return m_nomSociete; }
	System::String^ obtenirNumServiceClient() { return m_numServiceClient; }
	System::String^ obtenirLogo() { return m_logo; }
	//Adresse obtenirAdresseSociete() { return m_adresseSociete; }

	void modifierNomSociete(System::String^ Nnom) { m_nomSociete = Nnom; }
	void modifierNumServiceClient(System::String^ Nnum) { m_numServiceClient = Nnum; }
	void modifierLogo(System::String^ Nlogo) { m_logo = Nlogo; }
	//void modifierAdresseSociete(Adresse Nadresse) { m_adresseSociete = Nadresse; }
};