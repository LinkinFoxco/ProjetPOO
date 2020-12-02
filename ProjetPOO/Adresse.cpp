#include "Adresse.h"

Adresse::Adresse(){
	referenceAdresse = -1;
	m_numAdresse = 0;
	m_ville = "";
	m_codePostal = "";
	m_rue = "";
}

Adresse::Adresse(int ref, int num, System::String^ ville, System::String^ codePostal, System::String^ rue){
	this->referenceAdresse = ref;
	this->m_numAdresse = num;
	this->m_ville = ville;
	this->m_codePostal = codePostal;
	this->m_rue = rue;
}

System::String^ Adresse::SELECT(void){
	return "SELECT ID, Numero_De_Rue, Rue, Code_Postal, Ville FROM Adresse;";
}

System::String^ Adresse::INSERT(void){
	return "INSERT INTO Adresse (Numero_De_Rue, Rue, Code_Postal, Ville) VALUES('" + this->obtenirNumAdresse() + "', '" + this->obtenirRue() + "', '" + this->obtenirCodePostal() + "', '" + this->obtenirVille() + "');SELECT @@IDENTITY;";
}

System::String^ Adresse::UPDATE(void){
	return "UPDATE Adresse SET Numero_De_Rue = '" + this->obtenirNumAdresse() + "', Rue = '" + this->obtenirRue() + "', Code_Postal = '" + this->obtenirCodePostal() + "', Ville = '" + this->obtenirVille() + "' WHERE(ID = " + this->obtenirReferenceAdresse() + ");";
}

System::String^ Adresse::DELETE(void){
	return "DELETE FROM Adresse WHERE(ID = " + this->obtenirReferenceAdresse() + ");";
}