#pragma once

ref class Adresse
{
private:
	int referencePersonne;
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

	int obtenirPersonne() { return referencePersonne; }
	int obtenirNumAdresse() { return this->m_numAdresse; };
	int obtenirReferenceAdresse() { return this->referenceAdresse; };
	System::String^ obtenirVille() { return this->m_ville; };
	System::String^ obtenirCodePostal() { return this->m_codePostal; };
	System::String^ obtenirRue() { return this->m_rue; };

	void modifierPersonne(int Pers) { referencePersonne = Pers; }
	void modifierNumAdresse(int Nnum) { m_numAdresse = Nnum; }
	void modifierVille(System::String^ Nville) { m_ville = Nville; }
	void modifierCodePostal(System::String^ NcodePostal) { m_codePostal = NcodePostal; }
	void modifierRue(System::String^ Nrue) { m_rue = Nrue; }
	void modifierReferenceAdresse(int Nref) { referenceAdresse = Nref; }
};