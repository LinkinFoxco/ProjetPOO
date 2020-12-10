#include "CL_svc_gestionPersonnel.h"
#include "Personne.h"



DataSet^ NS_Svc::CL_svc_gestionPersonnel::listePersonnel(String^ dataTableName)
{
	donneePersonnel->Clear();
	donneePersonnel = Pcad->getRows(personnel->SELECT(), dataTableName);

	return donneePersonnel;
}

int NS_Svc::CL_svc_gestionPersonnel::ajouter(int position, String^ dateEmbauche, int Sup)
{
	int reference;
	personnel->modifierAdresseDomicile(position);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Sup);
	reference = Pcad->actionRowsID(personnel->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionPersonnel::modifier(int position, String^ dateEmbauche, int Super)
{
	personnel->modifierAdresseDomicile(position);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Super);

	Pcad->actionRows(personnel->UPDATE());
}

void NS_Svc::CL_svc_gestionPersonnel::supprimer(int P_reference)
{
	personnel->modifierReferencePersonnel(P_reference);

	Pcad->actionRows(personnel->DELETE());
}

