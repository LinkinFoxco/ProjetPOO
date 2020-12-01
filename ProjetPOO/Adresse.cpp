#include "Adresse.h"

Adresse::Adresse(){
	m_reference = 0;
	m_numAdresse = 0;
	m_ville = "";
	m_codePostal = "";
	m_rue = "";
}

Adresse::Adresse(int ref, int num, System::String^ ville, System::String^ codePostal, System::String^ rue){
	this->m_reference = ref;
	this->m_numAdresse = num;
	this->m_ville = ville;
	this->m_codePostal = codePostal;
	this->m_rue = rue;
}

System::String^ Adresse::SELECT(void){
	throw gcnew System::NotImplementedException();
	return "SELECT ID, Numero_De_Rue, Rue, Code_Postal, Ville FROM Adresse";
}

System::String^ Adresse::INSERT(void){
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Adresse (Numero_De_Rue, Rue, Code_Postal, Ville) VALUES('" + this->getNumAdresse() + "', '" + this->getRue() + "', '" + this->getCodePostal() + "', '" + this->getVille() + "');SELECT @@IDENTITY;";
}

System::String^ Adresse::UPDATE(void){
	throw gcnew System::NotImplementedException();
	return "UPDATE Adresse SET Numero_De_Rue = '" + this->getNumAdresse() + "', Rue = '" + this->getRue() + "', Code_Postal = '" + this->getCodePostal() + "', Ville = '" + this->getVille() + "' WHERE(ID = " + this->getReference() + ");";
}

System::String^ Adresse::DELETE(void){
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Adresse WHERE(ID = " + this->getReference() + ");";
}