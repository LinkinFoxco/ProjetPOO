#include "PossedeClientAdresses.h"

System::String^ PossedeClientAdresses::SELECT() {
	return "SELECT ID, ID_Client, Adresse_Facturation, Adresse_Livraison FROM possede_;";
}

System::String^ PossedeClientAdresses::INSERT() {
	return "INSERT INTO possede_ (ID_Client, Adresse_Facturation, Adresse_Livraison) VALUES ('" + this->m_Client->obtenirReferenceClient() + "', '" + (this->m_AdresseFacturation->obtenirNumAdresse() + " " + this->m_AdresseFacturation->obtenirRue() + ", " + this->m_AdresseFacturation->obtenirCodePostal() + " " + this->m_AdresseFacturation->obtenirVille()) + "', '" + (this->m_AdresseLivraison->obtenirNumAdresse() + " " + this->m_AdresseLivraison->obtenirRue() + ", " + this->m_AdresseLivraison->obtenirCodePostal() + " " + this->m_AdresseLivraison->obtenirVille()) + "');SELECT @@IDENTITY;";
}

System::String^ PossedeClientAdresses::UPDATE() {
	return "UPDATE possede_ SET ID_Client = '" + this->m_Client->obtenirReferenceClient() + "', Adresse_Facturation = '" + (this->m_AdresseFacturation->obtenirNumAdresse() + " " + this->m_AdresseFacturation->obtenirRue() + ", " + this->m_AdresseFacturation->obtenirCodePostal() + " " + this->m_AdresseFacturation->obtenirVille()) + "', Adresse_Livraison = '" + (this->m_AdresseLivraison->obtenirNumAdresse() + " " + this->m_AdresseLivraison->obtenirRue() + ", " + this->m_AdresseLivraison->obtenirCodePostal() + " " + this->m_AdresseLivraison->obtenirVille()) + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ PossedeClientAdresses::DELETE() {
	return "DELETE FROM possede_ WHERE(ID = " + this->m_Client->obtenirReferenceClient() + ");";
}