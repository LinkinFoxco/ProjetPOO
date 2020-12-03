#include "Facture.h"

System::String^ Facture::SELECT(){
    return "SELECT ID, ID_Client, ID_Societe FROM Facture;";
}

System::String^ Facture::INSERT(){
    return "INSERT INTO Facture (ID_Client, ID_Societe)" 
        +" VALUES ('" + this->obtenirClient() + "', '" + this->obtenirSociete() 
        + "');SELECT @@IDENTITY;";
}

System::String^ Facture::UPDATE(){
    return "UPDATE Facture SET ID_Client = '" + this->obtenirClient() 
        + "', ID_Societe = '" + this->obtenirSociete() 
        + "' WHERE(ID = " + this->obtenirReferenceFacture() + ");";
}

System::String^ Facture::DELETE(){
    return "DELETE FROM Facture WHERE(ID = " + this->obtenirReferenceFacture() + ");";
}
