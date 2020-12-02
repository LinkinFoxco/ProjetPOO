#include "CL_svc_gestionPersonne.h"

NS_Svc::CL_svc_gestionPersonne::CL_svc_gestionPersonne()
{
	cad = gcnew CL_CAD();
	personne = gcnew Personne();
	donnee = gcnew DataSet();
}

DataSet^ NS_Svc::CL_svc_gestionPersonne::listePersonne(String^ dataTableName)
{
	donnee->Clear();
	donnee = cad->getRows(personne->SELECT(), dataTableName);

	return donnee;
}

int NS_Svc::CL_svc_gestionPersonne::ajouter(String^, String^)
{
	int id_personne;

	personne->modifierPNom
	return 0;
}
