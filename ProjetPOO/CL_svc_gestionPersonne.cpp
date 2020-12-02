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

	personne->modifierPNom(m_nom);
	personne->modifierPPrenom(m_prenom);
	id_personne = cad->actionRowsID(personne->INSERT());
	return id_personne;
}

void NS_Svc::CL_svc_gestionPersonne::modifier(int, String^, String^)
{
	personne->modifierP_Reference(m_reference);
	personne->modifierPNom(m_nom);
	personne->modifierPPrenom(m_prenom);

	cad->actionRows(personne->UPDATE());
}

void NS_Svc::CL_svc_gestionPersonne::supprimer(int)
{
	personne->modifierP_Reference(m_reference);

	cad->actionRows(personne->DELETE());
}
