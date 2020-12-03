#include "Client.h"

System::String^ Client::SELECT(){
	return "SELECT ID, Date_Naissance, ID_Personne FROM Client;";
}

System::String^ Client::INSERT(){
	return "INSERT INTO Client (Date_Naissance, ID_Personne)" 
		+" VALUES ('" + this->obtenirDateNaissance() + "', " + this->obtenirReferencePersonne() 
		+ "');SELECT @@IDENTITY;";
}

System::String^ Client::UPDATE(){
	return "UPDATE Client SET Date_Naissance = '" + this->obtenirDateNaissance() 
		+ "', ID_Personne = '" + this->obtenirReferencePersonne() 
		+ "' WHERE(ID = " + this->obtenirReferenceClient() + ");";
}

System::String^ Client::DELETE(){
	return "DELETE FROM Client WHERE(ID = " + this->obtenirReferenceClient() + ");";
}