#include "CL_svc_gestionAdresse.h"
#include "Adresse.h"

DataSet^ NS_Svc::CL_svc_gestionAdresse::listeAdresse(String^ dataTableName)
{
	Adrdonnee->Clear();
	Adrdonnee = Adcad->getRows(adresse->SELECT(), dataTableName);

	return Adrdonnee;
}

int NS_Svc::CL_svc_gestionAdresse::ajouter(int adrfact, int adrlivr, int adrsoc, int refclient, int num, String^ ville, String^ codePostal, String^ rue)
{
	int reference;
	adresse->modifierNumAdresse(num);
	adresse->modifierVille(ville);
	adresse->modifierCodePostal(codePostal);
	adresse->modifierRue(rue);
	adresse->modifierAdresseFacturation(adrfact);
	adresse->modifierAdresseLivraison(adrlivr);
	adresse->modifierAdresseSociete(adrsoc);
	adresse->modifierReferenceClient(refclient);
	reference = Adcad->actionRowsID(adresse->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionAdresse::modifier(int num, String^ ville, String^ codePostal, String^ rue)
{
	adresse->modifierNumAdresse(num);
	adresse->modifierVille(ville);
	adresse->modifierCodePostal(codePostal);
	adresse->modifierRue(rue);

	Adcad->actionRows(adresse->UPDATE());
}

void NS_Svc::CL_svc_gestionAdresse::supprimer(int reference)
{
	adresse->modifierReferenceAdresse(reference);

	Adcad->actionRows(adresse->DELETE());
}

