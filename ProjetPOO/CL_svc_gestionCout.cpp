#include "CL_svc_gestionCout.h"

DataSet^ NS_Svc::CL_svc_gestionCout::listeCout(String^ dataTableName)
{
	donneeCout->Clear();
	donneeCout = cadCout->getRows(cout->SELECT(), dataTableName);

	return donneeCout;
}

int NS_Svc::CL_svc_gestionCout::ajouter(int coutHT, int coutTVA, int coutTTC)
{
	int reference;
	cout->modifierCoutHT(coutHT);
	cout->modifierCoutTVA(coutTVA);
	cout->modifierCoutTTC(coutTTC);
	reference = cadCout->actionRowsID(cout->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionCout::modifier(int reference, int coutHT, int coutTVA, int coutTTC)
{
	cout->modifierReferenceCout(reference);
	cout->modifierCoutHT(coutHT);
	cout->modifierCoutTVA(coutTVA);
	cout->modifierCoutTTC(coutTTC);

	cadCout->actionRows(cout->UPDATE());
}

void NS_Svc::CL_svc_gestionCout::supprimer(int reference)
{
	cout->modifierReferenceCout(reference);

	cadCout->actionRows(cout->DELETE());
}

