#pragma once

ref class Adresse
{
private:
	int referencePersonne;
	int referenceAdresse;
	int referenceClient;
	int m_numAdresse;
	int m_adresseFacturation;
	int m_adresseLivraison;
	int m_adresseSociete;
	System::String^ m_ville;
	System::String^ m_codePostal;
	System::String^ m_rue;

public:
	Adresse() {
		referencePersonne = -1;
		referenceAdresse = -1;
		m_numAdresse = -1;
		m_ville = "RIEN";
		m_codePostal = "RIEN";
		m_rue = "RIEN";
	}
	Adresse(int, int, System::String^, System::String^, System::String^);
	Adresse(Adresse^ Nadresse);

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

	int obtenirPersonne() { return referencePersonne; }
	int obtenirNumAdresse() { return this->m_numAdresse; };
	int obtenirReferenceAdresse() { return this->referenceAdresse; };
	int obtenirAdresseFacturation() { return this->m_adresseFacturation; }
	int obtenirAdresseLivraison() { return this->m_adresseLivraison; };
	int obtenirAdresseSociete() { return this->m_adresseSociete; };
	int obtenirReferenceClient() { return this->referenceClient; };
	System::String^ obtenirVille() { return this->m_ville; };
	System::String^ obtenirCodePostal() { return this->m_codePostal; };
	System::String^ obtenirRue() { return this->m_rue; };

	void modifierPersonne(int Pers) { referencePersonne = Pers; }
	void modifierNumAdresse(int Nnum) { m_numAdresse = Nnum; }
	void modifierAdresseFacturation(int adr) { m_adresseFacturation = adr; }
	void modifierAdresseLivraison(int adr) { m_adresseLivraison = adr; };
	void modifierAdresseSociete(int adr) { m_adresseSociete = adr; };
	void modifierReferenceClient(int client) { referenceClient = client; };
	void modifierVille(System::String^ Nville) { m_ville = Nville; }
	void modifierCodePostal(System::String^ NcodePostal) { m_codePostal = NcodePostal; }
	void modifierRue(System::String^ Nrue) { m_rue = Nrue; }
	void modifierReferenceAdresse(int Nref) { referenceAdresse = Nref; }
};