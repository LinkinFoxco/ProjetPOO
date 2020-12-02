#include "CL_svc_gestionClient.h"

DataSet^ NS_Svc::CL_svc_gestionClient::listeClient(String^ dataTableName)
{
	Cdonnee->Clear();
	Cdonnee = Ccad->getRows(client->SELECTClient(), dataTableName);

	return Cdonnee;
}

int NS_Svc::CL_svc_gestionClient::ajouter(int position, String^ naissanceDate)
{
	int numClient;
	client->modifierdateNaissance(naissanceDate);
	client->modifierAdresseLivraison(position);
	client->modifierAdresseFacturation(position);
	numClient = Ccad->actionRowsID(client->INSERTClient());
	return numClient;
}

void NS_Svc::CL_svc_gestionClient::modifier(int position, int n_client, String^ Dnaissance)
{
	client->modifierAdresseLivraison(position);
	client->modifierAdresseFacturation(position);
	client->modifierdateNaissance(Dnaissance);
	client->modifierReferenceClient(n_client);

	Ccad->actionRows(client->UPDATEClient());
}

void NS_Svc::CL_svc_gestionClient::supprimer(int IDc)
{
	client->modifierReferenceClient(IDc);

	Ccad->actionRows(client->DELETEClient());
}



/*const int numClient;
	System::String^ dateNaissance;
	Adresse m_adresseLivraison;
	Adresse m_adresseFacturation;
	client m_client;
	modifierAdresseLivraison
	void modifierAdresseFacturation(int position) { m_adresseFacturation = m_adresse[position]; }

*/