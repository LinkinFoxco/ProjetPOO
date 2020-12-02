#include "CL_svc_gestionClient.h"

DataSet^ NS_Svc::CL_svc_gestionClient::listeClient(String^ dataTableName)
{
	donnee->Clear();
	donnee = Ccad->getRows(client->SELECT(), dataTableName);

	return donnee;
}

int NS_Svc::CL_svc_gestionClient::ajouter(String^, String^)
{
	client->modifierPNom(m_nom);
	client->modifierPPrenom(m_prenom);
	client->
		id_client = cad->actionRowsID(client->INSERT());
	return id_client;
	return 0;
}
