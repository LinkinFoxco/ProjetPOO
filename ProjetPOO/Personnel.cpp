#include "Personnel.h"

System::String^ Personnel::SELECT()
{
    throw gcnew System::NotImplementedException();
    return "SELECT ID, Date_Embauche, ID_Personne, ID_Societe, ID_Personnel, ID_Adresse FROM Personnel;"
}

System::String^ Personnel::INSERT()
{
    throw gcnew System::NotImplementedException();
    return "INSERT INTO Personnel (Date_Embauche, ID_Personne, ID_Societe, ID_Personnel, ID_Adresse) VALUES ('" + this->obtenirDateEmbauche() + "', '" + this->obtenirReference() + "', '" + this->obtenirSociete() + "', '" + this->obtenirSuperieur() + "', '" + this->obtenirAdresseDomicile() + "');SELECT @@IDENTITY;";
}

System::String^ Personnel::UPDATE()
{
    throw gcnew System::NotImplementedException();
    return "UPDATE Personnel SET Date_Embauche = '" + this->obtenirDateEmbauche() + "', ID_Personne = '" + this->obtenirReference() + "', ID_Societe = '" + this->obtenirSociete() + "', ID_Personnel = '" + this->obtenirSuperieur() + "', ID_Adresse = '" + this->obtenirAdresseDomicile() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Personnel::DELETE()
{
    throw gcnew System::NotImplementedException();
    return "DELETE FROM Personel WHERE(ID = " + this->obtenirReference() + ");";
}
