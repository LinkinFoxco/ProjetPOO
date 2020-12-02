#include "Personne.h"

void Personne::retirerAdresse(Adresse^ Nadrs)
{
	int position(0);
	for (Adresse^ adrs : m_adresse)
	{
		if ( adrs->m_reference != Nadrs->m_reference )
			position++;
	}
	m_adresse->erase(m_adresse->begin() + position);
}

System::String^ Personne::SELECTPersonne()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, Nom_Personne, Prenom_Personne FROM Personne;";
}

System::String^ Personne::INSERTPersonne()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Personne (Nom_Personne, Prenom_Personne) VALUES ('" + this->obtenirPNom() + "', '" + this->obtenirPPrenom() + "');;SELECT @@IDENTITY;";
}

System::String^ Personne::UPDATEPersonne()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE Personne SET Nom_Personne = '" + this->obtenirPNom() + "', Prenom_Personne = '" + this->obtenirPPrenom() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Personne::DELETEPersonne()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Personne WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Personne::SELECTPossedePersoLieu()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, ID_Lieu, Adresse_Personne FROM _possede;";
}

System::String^ Personne::INSERTPossedePersoLieu()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO _possede (ID_Lieu, Adresse_Personne) VALUES ('" + this->obtenirPAdresse(/*c pas la bonne fonction*/) + "', '" + this->obtenirPAdresse() + "');;SELECT @@IDENTITY;";
}

System::String^ Personne::UPDATEPossedePersoLieu()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE _possede SET ID_Lieu = '" + this->obtenirPAdresse(/*c pas la bonne fonction*/) + "', Adresse_Personne = '" + this->obtenirPAdresse() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Personne::DELETEPossedePersoLieu()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM _possede WHERE(ID = " + this->obtenirReference() + ");";
}
