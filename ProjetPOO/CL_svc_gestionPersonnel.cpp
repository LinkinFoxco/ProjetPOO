#include "CL_svc_gestionPersonnel.h"
#include "Personne.h"



DataSet^ NS_Svc::CL_svc_gestionPersonnel::listePersonnel(String^ dataTableName)
{
	donneePersonnel->Clear();
	donneePersonnel = Pcad->getRows(personnel->SELECT(), dataTableName);

	return donneePersonnel;
}

int NS_Svc::CL_svc_gestionPersonnel::ajouter(String^ Nom, String^ Prenom, String^ dateEmbauche, String^ Sup)
{
	int reference;
	personnel->modifierPNom(Nom);
	personnel->modifierPPrenom(Prenom);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Sup);
	reference = Pcad->actionRowsID(personnel->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionPersonnel::modifier(int id, String^ Pre, String^ Nom, String^ dateEmbauche, String^ Super)
{
	personnel->modifierPPrenom(Pre);
	personnel->modifierPNom(Nom);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Super);
	personnel->modifierReferencePersonnel(id);

	Pcad->actionRows(personnel->UPDATE());
}

void NS_Svc::CL_svc_gestionPersonnel::supprimer(int P_reference)
{
	personnel->modifierReferencePersonnel(P_reference);

	Pcad->actionRows(personnel->DELETE());
}

