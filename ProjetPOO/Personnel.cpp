#include "Personnel.h"

System::String^ Personnel::SELECT(){
    return "SELECT ID, Date_Embauche, ID_Personne, ID_Societe, ID_Personnel, ID_Adresse FROM Personnel;";
}

System::String^ Personnel::INSERT(){
    return "INSERT INTO Personnel (Date_Embauche, ID_Personne, ID_Societe, ID_Personnel, ID_Adresse) VALUES ('" + this->obtenirDateEmbauche() + "', '" + this->obtenirReference() + "', '" + this->obtenirSociete() + "', '" + this->obtenirSuperieur() + "', '" + this->obtenirAdresseDomicile() + "');SELECT @@IDENTITY;";
}

System::String^ Personnel::UPDATE(){
    return "UPDATE Personnel SET Date_Embauche = '" + this->obtenirDateEmbauche() + "', ID_Personne = '" + this->obtenirReferencePersonnel() + "', ID_Societe = '" + this->obtenirSociete() + "', ID_Personnel = '" + this->obtenirSuperieur() + "', ID_Adresse = '" + this->obtenirAdresseDomicile() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Personnel::DELETE(){
    return "DELETE FROM Personnel WHERE(ID = " + this->obtenirReferencePersonnel() + ");";
}
