#include "PossedeClientAdresses.h"

System::String^ PossedeClientAdresses::SELECT() {
	return "SELECT ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ PossedeClientAdresses::INSERT() {
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->obtenirClient() + "', '" + this->obtenirAdresseFacturation() + "', '" + this->obtenirAdresseLivraison() + "');";
}

System::String^ PossedeClientAdresses::UPDATE() {
	return "UPDATE possede_ SET Adresse_Facturation = '" + this->obtenirAdresseFacturation() + "', Adresse_Livraison = '" + this->obtenirAdresseLivraison() + "' WHERE(ID_Client = " + this->obtenirClient() + ");";
}

System::String^ PossedeClientAdresses::DELETE() {
	return "DELETE FROM possede_ WHERE(ID = " + this->obtenirClient() + ");";
}