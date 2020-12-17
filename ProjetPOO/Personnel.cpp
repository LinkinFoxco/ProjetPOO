#include "Personnel.h"

System::String^ Personnel::SELECT(){
    return "SELECT ID, Date_Embauche, ID_Personne, ID_Societe, ID_Personnel FROM Personnel;";
}

System::String^ Personnel::INSERT(){
    return "INSERT INTO Personne (Nom_Personne, Prenom_Personne)"
        + " VALUES ('" + this->obtenirPNom() + "', '" + this->obtenirPPrenom()
        + "'); SELECT @@IDENTITY;"
        + " INSERT INTO Personnel (Date_Embauche, ID_Societe, ID_Personne, ID_Personnel)"
        + " SELECT '" + this->obtenirDateEmbauche() + "', '2', Personne.ID, '" + System::Convert::ToString(this->obtenirSuperieur())
        + "' FROM Personne WHERE Prenom_Personne = '" + this->obtenirPPrenom() + "' AND Nom_Personne = '" + this->obtenirPNom() + "';";
}

System::String^ Personnel::UPDATE(){
    return "UPDATE Personne SET Nom_Personne = '" + this->obtenirPNom()
        + "', Prenom_Personne = '" + this->obtenirPPrenom()
        + "' WHERE(Personne.ID = '" + this->obtenirReferencePersonne()
        + "'); UPDATE Personnel SET Date_Embauche = '" + this->obtenirDateEmbauche()
        + "', ID_Personnel = '" + this->obtenirSuperieur()
        + "' WHERE(ID = '" + this->obtenirReferencePersonnel() + "');";
}

System::String^ Personnel::DELETE(){
    return "DELETE FROM Personne WHERE(ID = '" + this->obtenirReferencePersonne() + "');"
        + " DELETE FROM Personnel WHERE(ID = '" + this->obtenirReferencePersonnel() + "');";
}
