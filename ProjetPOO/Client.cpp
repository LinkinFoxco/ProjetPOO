#include "Client.h"

System::String^ Client::SELECTClient()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, Date_Naissance, ID_Personne FROM Client;";
}

System::String^ Client::SELECTPossede()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ Client::INSERTClient()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Client (Date_Naissance, ID_Personne) VALUES ('" + this->obtenirDateNaissance() + "', " + this->obtenirPReference() + "');SELECT @@IDENTITY;";
}

System::String^ Client::INSERTPossede()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->obtenirNumClient() + "', '" + this->obtenirAdresseFacturation() + "', '" + this->obtenirAdresseLivraison() + "');SELECT @@IDENTITY;";
}

System::String^ Client::UPDATEClient()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE Client SET Date_Naissance = '" + this->obtenirDateNaissance() + "', ID_Personne = '" + this->obtenirPReference() + "' WHERE(ID = " + this->obtenirPReference() + ");";
}

System::String^ Client::UPDATEPossede()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE possede_ SET ID_Client = '" + this->obtenirDateNaissance() + "', Adresse_Facturation = '" + this->obtenirAdresseFacturation() + "', Adresse_Livraison = '" + this->obtenirAdresseLivraison() + "' WHERE(ID = " + this->obtenirPReference() + ");";
}

System::String^ Client::DELETEClient()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Client WHERE(ID = " + this->obtenirPReference() + ");";
}

System::String^ Client::DELETEPossede()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM possede_ WHERE(ID = " + this->obtenirReference() + ");";
}