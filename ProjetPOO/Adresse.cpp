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

System::String^ Adresse::SELECTAdresse(void){
	return "SELECT ID, Numero_De_Rue, Rue, Code_Postal, Ville FROM Adresse;";
}

System::String^ Adresse::INSERTAdresse(void){
	return "INSERT INTO Adresse (Numero_De_Rue, Rue, Code_Postal, Ville) VALUES('" + this->obtenirNumAdresse() + "', '" + this->obtenirRue() + "', '" + this->obtenirCodePostal() + "', '" + this->obtenirVille() + "');SELECT @@IDENTITY;";
}

System::String^ Adresse::UPDATEAdresse(void){
	return "UPDATE Adresse SET Numero_De_Rue = '" + this->obtenirNumAdresse() + "', Rue = '" + this->obtenirRue() + "', Code_Postal = '" + this->obtenirCodePostal() + "', Ville = '" + this->obtenirVille() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Adresse::DELETEAdresse(void){
	return "DELETE FROM Adresse WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Adresse::SELECTPossede() {
	return "SELECT ID, ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ Adresse::INSERTPossede() {
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->obtenirCReference() + "', '" + (this->obtenirNumAdresse() + " " + this->obtenirRue() + ", " + this->obtenirCodePostal() + " " + this->obtenirVille()) + "', '" + this->obtenirAdresseLivraison() + "');SELECT @@IDENTITY;";
}

System::String^ Adresse::UPDATEPossede() {
	return "UPDATE possede_ SET ID_Client = '" + this->obtenirCReference() + "', Adresse_Facturation = '" + (this->obtenirNumAdresse() + " " + this->obtenirRue() + ", " + this->obtenirCodePostal() + " " + this->obtenirVille()) + "', Adresse_Livraison = '" + this->obtenirAdresseLivraison() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Adresse::DELETEPossede() {
	return "DELETE FROM possede_ WHERE(ID = " + this->obtenirReference() + ");";
}