#include "PossedeClientAdresses.h"

System::String^ PossedeClientAdresses::SELECT() {
	return "SELECT ID, ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ PossedeClientAdresses::INSERT() {
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->obtenirCReference() + "', '" + (this->obtenirNumAdresse() + " " + this->obtenirRue() + ", " + this->obtenirCodePostal() + " " + this->obtenirVille()) + "', '" + (this->Livraison->obtenirNumAdresse() + " " + this->Livraison->obtenirRue() + ", " + this->Livraison->obtenirCodePostal() + " " + this->Livraison->obtenirVille()) + "');SELECT @@IDENTITY;";
}

System::String^ PossedeClientAdresses::UPDATE() {
	return "UPDATE possede_ SET ID_Client = '" + this->obtenirCReference() + "', Adresse_Facturation = '" + (this->obtenirNumAdresse() + " " + this->obtenirRue() + ", " + this->obtenirCodePostal() + " " + this->obtenirVille()) + "', Adresse_Livraison = '" + (this->Livraison->obtenirNumAdresse() + " " + this->Livraison->obtenirRue() + ", " + this->Livraison->obtenirCodePostal() + " " + this->Livraison->obtenirVille()) + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ PossedeClientAdresses::DELETE() {
	return "DELETE FROM possede_ WHERE(ID = " + this->obtenirCReference() + ");";
}