#pragma once
#include <iostream>

ref class Adresse
{
private:
	int m_reference;
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
	int getNumAdresse() { return this->m_numAdresse; };
	int getReference() { return this->m_reference; };
	System::String^ getVille() { return this->m_ville; };
	System::String^ getCodePostal() { return this->m_codePostal; };
	System::String^ getRue() { return this->m_rue; };

};