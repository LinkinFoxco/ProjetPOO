#include "Adresse.h"

Adresse::Adresse(int ref, int num, System::String^ ville, System::String^ codePostal, System::String^ rue){
	this->referenceAdresse = ref;
	this->m_numAdresse = num;
	this->m_ville = ville;
	this->m_codePostal = codePostal;
	this->m_rue = rue;
}

Adresse::Adresse(Adresse^ Nadresse)
{
	this->referenceAdresse = Nadresse->referenceAdresse;
	this->m_numAdresse = Nadresse->m_numAdresse;
	this->m_ville = Nadresse->m_ville;
	this->m_codePostal = Nadresse->m_codePostal;
	this->m_rue = Nadresse->m_rue;
}

System::String^ Adresse::SELECT(void){
	return "SELECT ID, Numero_De_Rue, Rue, Code_Postal, Ville, ID_Personne, Adresse_facturation, Adresse_Livraison, Adresse_Societe, ID_Client, FROM Adresse;";
}

System::String^ Adresse::INSERT(void){
	return "INSERT INTO Adresse (Numero_De_Rue, Rue, Code_Postal, Ville, ID_Personne, Adresse_facturation, Adresse_Livraison, Adresse_Societe, ID_Client)"
		+ "VALUES('" + this->obtenirNumAdresse() + "', '" + this->obtenirRue() + "', '" + this->obtenirCodePostal() + "', '" + this->obtenirVille()
		+ "', '" + this->obtenirPersonne() + "', '" + this->obtenirAdresseFacturation() + "', '" + this->obtenirAdresseLivraison()
		+ "', '" + this->obtenirAdresseSociete() + "', '" + this->obtenirReferenceClient() + "');SELECT @@IDENTITY;";
}

System::String^ Adresse::UPDATE(void){
	return "UPDATE Adresse SET Numero_De_Rue = '" + this->obtenirNumAdresse()
		+ "', Rue = '" + this->obtenirRue()
		+ "', Code_Postal = '" + this->obtenirCodePostal()
		+ "', Ville = '" + this->obtenirVille()
		+ "' WHERE(ID = " + this->obtenirReferenceAdresse()
		+ " AND ID_Personne = " + this->obtenirPersonne() + ");";
}

System::String^ Adresse::DELETE(void){
	return "DELETE FROM Adresse WHERE(ID = " + this->obtenirReferenceAdresse() + " AND ID_Personne = " + this->obtenirPersonne() + ");";
}