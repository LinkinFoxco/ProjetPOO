#include "CL_svc_gestionClient.h"

DataSet^ NS_Svc::CL_svc_gestionClient::listeClient(String^ dataTableName)
{
	donnee->Clear();
	donnee = Ccad->getRows(client->SELECT(), dataTableName);

	return donnee;
}

int NS_Svc::CL_svc_gestionClient::ajouter(String^ naissanceDate, Adresse^ adresseLivraison, Adresse^ adresseFacturation, client^ Pclient)
{
	client->
	client->modifierAdresseLivraison(m_adresseLivraison);
	client->modifierAdresseFacturation(m_adresseFacturation);
	numClient = Ccad->actionRowsID(client->INSERT());
	return numClient;
}

void NS_Svc::CL_svc_gestionClient::modifier(int n_client, String^ Dnaissance, Adresse^ , Adresse^, client^)
{
	client->modifierAdresseLivraison();
	client->modifierPPrenom(m_prenom);

	cad->actionRows(client->UPDATE());
}


/*const int numClient;
	System::String^ dateNaissance;
	Adresse m_adresseLivraison;
	Adresse m_adresseFacturation;
	client m_client;
	modifierAdresseLivraison
	void modifierAdresseFacturation(int position) { m_adresseFacturation = m_adresse[position]; }

*/