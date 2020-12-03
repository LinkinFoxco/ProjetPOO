#include "CL_svc_gestionSociete.h"

DataSet^ NS_Svc::CL_svc_gestionSociete::listeSociete(String^ dataTableName)
{
	donneeSociete->Clear();
	donneeSociete = cadSociete->getRows(societe->SELECT(), dataTableName);

	return donneeSociete;
}

int NS_Svc::CL_svc_gestionSociete::ajouter(String^ nomSociete, String^ numServiceClient, String^ logo, Adresse^ adresseSociete)
{
	int reference;
	societe->modifierNomSociete(nomSociete);
	societe->modifierNumServiceClient(numServiceClient);
	societe->modifierLogo(logo);
	societe->modifierAdresseSociete(adresseSociete);
	reference = cadSociete->actionRowsID(societe->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionSociete::modifier(int reference, String^ nomSociete, String^ numServiceClient, String^ logo, Adresse^ adresseSociete)
{
	societe->modifierRefSociete(reference);
	societe->modifierNomSociete(nomSociete);
	societe->modifierNumServiceClient(numServiceClient);
	societe->modifierLogo(logo);
	societe->modifierAdresseSociete(adresseSociete);

	cadSociete->actionRows(societe->UPDATE());
}

void NS_Svc::CL_svc_gestionSociete::supprimer(int reference)
{
	societe->modifierRefSociete(reference);

	cadSociete->actionRows(societe->DELETE());
}
