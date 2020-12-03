#include "CL_svc_gestionClient.h"

DataSet^ NS_Svc::CL_svc_gestionClient::listeClient(String^ dataTableName)
{
	Cdonnee->Clear();
	Cdonnee = Ccad->getRows(client->SELECT(), dataTableName);

	return Cdonnee;
}

int NS_Svc::CL_svc_gestionClient::ajouter(int positionL, int positionF, String^ naissanceDate)
{
	int numClient;
	client->modifierdateNaissance(naissanceDate);
	client->modifierAdresseLivraison(positionL);
	client->modifierAdresseFacturation(positionF);
	numClient = Ccad->actionRowsID(client->INSERT());
	return numClient;
}

void NS_Svc::CL_svc_gestionClient::modifier(int position, int n_client, String^ Dnaissance)
{
	client->modifierAdresseLivraison(position);
	client->modifierAdresseFacturation(position);
	client->modifierdateNaissance(Dnaissance);
	client->modifierReferenceClient(n_client);

	Ccad->actionRows(client->UPDATE());
}

void NS_Svc::CL_svc_gestionClient::supprimer(int IDc)
{
	client->modifierReferenceClient(IDc);

	Ccad->actionRows(client->DELETE());
}