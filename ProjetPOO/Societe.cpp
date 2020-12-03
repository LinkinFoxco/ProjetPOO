#include "Societe.h"

System::String^ Societe::SELECT(){
	return "SELECT ID, Nom_Societe, Numero_Service_Client, Logo, Adresse_Societe, ID_Adresse FROM Societe;";
}

System::String^ Societe::INSERT(){
	return "INSERT INTO Societe (Nom_Societe, Numero_Service_Client, Logo, Adresse_Societe, ID_Adresse)" 
		+" VALUES ('" + this->obtenirNomSociete() + "', '" + this->obtenirNumServiceClient() + "', '" + this->obtenirLogo() + "', '" + this->obtenirAdresseSociete() + "', '" + this->m_adresseSociete->obtenirReferenceAdresse() 
		+ "');SELECT @@IDENTITY;";
}

System::String^ Societe::UPDATE(){
	return "UPDATE Societe SET Nom_Societe = '" + this->obtenirNomSociete() 
		+ "', Numero_Service_Client = '" + this->obtenirNumServiceClient() 
		+ "', Logo = '" + this->obtenirLogo() 
		+ "', Adresse_Societe = '" + this->obtenirAdresseSociete() 
		+ "', ID_Adresse = '" + this->m_adresseSociete->obtenirReferenceAdresse() 
		+ "' WHERE(ID = " + this->obtenirReferenceSociete() + ");";
}

System::String^ Societe::DELETE(){
	return "DELETE FROM Societe WHERE(ID = " + this->obtenirReferenceSociete() + ");";
}
