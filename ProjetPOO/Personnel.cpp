#include "Personnel.h"

System::String^ Personnel::SELECT(){
    return "SELECT ID, Date_Embauche, ID_Personne, ID_Societe, ID_Personnel FROM Personnel;";
}

System::String^ Personnel::INSERT(){
    return "INSERT INTO Personne (Nom_Personne, Prenom_Personne)"
        +" VALUES ('" + this->obtenirPNom() + "', '" + this->obtenirPPrenom()
        + "'); SELECT @@IDENTITY;"
        +" INSERT INTO Personnel (Date_Embauche, ID_Societe, ID_Personne, ID_Personnel)" 
        +" VALUES ('" + this->obtenirDateEmbauche() + "', (SELECT TOP 1 Societe.ID FROM Societe WHERE Societe.Nom_Societe = 'Plancton Mania'), (SELECT TOP 1 Personne.ID FROM Personne WHERE Personne.Nom_Personne = '" + this->obtenirPNom() + "'), '" + System::Convert::ToString(this->obtenirSuperieur())
        + "'); SELECT @@IDENTITY;";
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
    return "DELETE FROM Personne WHERE(Personne.ID = Personnel.ID_Personne);"
        + " DELETE FROM Personnel WHERE(ID = '" + this->obtenirReferencePersonnel() + "');";
}
