#include "CL_svc_gestionAdresse.h"
#include "Adresse.h"

DataSet^ NS_Svc::CL_svc_gestionAdresse::listeAdresse(String^ dataTableName)
{
	Adrdonnee->Clear();
	Adrdonnee = Adcad->getRows(adresse->SELECT(), dataTableName);

	return Adrdonnee;
}

int NS_Svc::CL_svc_gestionAdresse::ajouter(int num, String^ ville, String^ codePostale, String^ rue)
{
	int reference;
	adresse->modifierNumAdresse(num);
	adresse->modifierVille(ville);
	adresse->modifierCodePostal(codePostale);
	adresse->modifierRue(rue);
	reference = Adcad->actionRowsID(adresse->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionAdresse::modifier(int num, String^ ville, String^ codePostale, String^ rue)
{
	adresse->modifierNumAdresse(num);
	adresse->modifierVille(ville);
	adresse->modifierCodePostal(codePostale);
	adresse->modifierRue(rue);

	Adcad->actionRows(adresse->UPDATE());
}

void NS_Svc::CL_svc_gestionAdresse::supprimer(int reference)
{
	adresse->modifierReferenceAdresse(reference);

	Adcad->actionRows(adresse->DELETE());
}

