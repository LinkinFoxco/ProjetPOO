#include "Client.h"

System::String^ Client::SELECTClient(){
	return "SELECT ID, Date_Naissance, ID_Personne FROM Client;";
}

System::String^ Client::SELECTPossede(){
	return "SELECT ID, ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ Client::INSERTClient(){
	return "INSERT INTO Client (Date_Naissance, ID_Personne) VALUES ('" + this->obtenirDateNaissance() + "', " + this->obtenirPReference() + "');SELECT @@IDENTITY;";
}

System::String^ Client::INSERTPossede(){
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->obtenirCReference() + "', '" + this->obtenirAdresseFacturation() + "', '" + this->obtenirAdresseLivraison() + "');SELECT @@IDENTITY;";
}

System::String^ Client::UPDATEClient(){
	return "UPDATE Client SET Date_Naissance = '" + this->obtenirDateNaissance() + "', ID_Personne = '" + this->obtenirPReference() + "' WHERE(ID = " + this->obtenirCReference() + ");";
}

System::String^ Client::UPDATEPossede(){
	return "UPDATE possede_ SET ID_Client = '" + this->obtenirCReference() + "', Adresse_Facturation = '" + this->obtenirAdresseFacturation() + "', Adresse_Livraison = '" + this->obtenirAdresseLivraison() + "' WHERE(ID = " + this->obtenirPReference() + ");";
}

System::String^ Client::DELETEClient(){
	return "DELETE FROM Client WHERE(ID = " + this->obtenirCReference() + ");";
}

System::String^ Client::DELETEPossede(){
	return "DELETE FROM possede_ WHERE(ID = " + this->obtenirReference() + ");";
}