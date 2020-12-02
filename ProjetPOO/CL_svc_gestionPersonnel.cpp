#include "CL_svc_gestionClient.h"
#include "CL_svc_gestionPersonnel.h"

DataSet^ NS_Svc::CL_svc_gestionClient::listeClient(String^ dataTableName)
{
	Pdonnee->Clear();
	Pdonnee = Ccad->getRows(client->SELECTPersonnel(), dataTableName);

	return Pdonnee;
}

int NS_Svc::CL_svc_gestionPersonnel::ajouter(int position, String^ dateEmbauche, Personnel^ Sup)
{
	int reference;
	int id_personne;
	personnel->modifierAdresseDomicile(position);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Sup);
	reference = Pcad->actionRowsID(personnel->INSERTPersonnel());
	return reference, id_personne;
}

void NS_Svc::CL_svc_gestionClient::modifier(int position, int n_client, String^ Dnaissance, Adresse^, Adresse^)
{
	client->modifierAdresseLivraison(position);
	client->modifierAdresseFacturation(position);
	client->modifierdateNaissance(Dnaissance);
	client->modifierIDclient(n_client);

	Ccad->actionRows(client->UPDATEClient());
}

void NS_Svc::CL_svc_gestionClient::supprimer(int IDc)
{
	client->modifierIDclient(IDc);

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
