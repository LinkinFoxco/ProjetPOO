#pragma once
#include <iostream>
#include "Client.h"

ref class Adresse
{
private:
	int referenceAdresse;
	int m_numAdresse;
	System::String^ m_ville;
	System::String^ m_codePostal;
	System::String^ m_rue;

public:
	Adresse();
	Adresse(int, int, System::String^, System::String^, System::String^);

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

	int obtenirNumAdresse() { return this->m_numAdresse; };
	int obtenirReference() { return this->referenceAdresse; };
	System::String^ obtenirVille() { return this->m_ville; };
	System::String^ obtenirCodePostal() { return this->m_codePostal; };
	System::String^ obtenirRue() { return this->m_rue; };

	void modifierNumAdresse(int Nnum) { m_numAdresse = Nnum; }
	void modifierVille(System::String^ Nville) { m_ville = Nville; }
	void modifierCodePostal(System::String^ NcodePostal) { m_codePostal = NcodePostal; }
	void modifierRue(System::String^ Nrue) { m_rue = Nrue; }
};