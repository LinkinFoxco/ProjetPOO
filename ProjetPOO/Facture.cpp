#include "Facture.h"

System::String^ Facture::SELECT()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, ID_Client, ID_Societe FROM Facture";
}

System::String^ Facture::INSERT()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Facture (ID_Client, ID_Societe) VALUES ('" + this->obtenirClient() + "', " + this->obtenirSociete() + "');SELECT @@IDENTITY;";
}

System::String^ Facture::UPDATE()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE Facture SET ID_Client = '" + this->obtenirClient() + "', ID_Societe = '" + this->obtenirSociete() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Facture::DELETE()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Facture WHERE(ID = " + this->obtenirReference() + ");";
}
