#include "Personne.h"

void Personne::retirerAdresse(Adresse^ Oadrs)
{
	int position(0);
	for (int i = 0; i < m_adresse->Count; i++)
	{
		if (m_adresse[i]->obtenirReferenceAdresse() != Oadrs->obtenirReferenceAdresse())
			position++;
	}
	m_adresse->Remove(m_adresse[position]);
}

int Personne::obtenirPositionAdresse(Adresse^ Wadrs)
{
	int position(0);
	for (int i = 0; i < m_adresse->Count; i++)
	{
		if (m_adresse[i]->obtenirReferenceAdresse() != Wadrs->obtenirReferenceAdresse())
			position++;
	}
	return position;
}

System::String^ Personne::SELECT()
{
	return "SELECT ID, Nom_Personne, Prenom_Personne FROM Personne;";
}

System::String^ Personne::INSERT()
{
	return "INSERT INTO Personne (Nom_Personne, Prenom_Personne)" 
		+" VALUES ('" + this->obtenirPNom() + "', '" + this->obtenirPPrenom() 
		+ "');SELECT @@IDENTITY;";
}

System::String^ Personne::UPDATE()
{
	return "UPDATE Personne SET Nom_Personne = '" + this->obtenirPNom() 
		+ "', Prenom_Personne = '" + this->obtenirPPrenom() 
		+ "' WHERE(ID = " + this->obtenirReferencePersonne() + ");";
}

System::String^ Personne::DELETE()
{
	return "DELETE FROM Personne WHERE(ID = '" + this->obtenirReferencePersonne() + ");";
}