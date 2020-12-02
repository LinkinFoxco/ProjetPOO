#include "CL_svc_gestionPersonnel.h"
#include "Personne.h"



DataSet^ NS_Svc::CL_svc_gestionPersonnel::listePersonnel(String^ dataTableName)
{
	Pdonnee->Clear();
	Pdonnee = Pcad->getRows(personnel->SELECT(), dataTableName);

	return Pdonnee;
}

int NS_Svc::CL_svc_gestionPersonnel::ajouter(int position, String^ dateEmbauche, Personnel^ Sup)
{
	int reference;
	int id_personne;
	personnel->modifierAdresseDomicile(position);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Sup);
	reference = Pcad->actionRowsID(personnel->INSERT());
	return reference, id_personne;
}

void NS_Svc::CL_svc_gestionPersonnel::modifier(int position, String^ dateEmbauche, Personnel^ Super)
{
	personnel->modifierAdresseDomicile(position);
	personnel->modifierDateEmbauche(dateEmbauche);
	personnel->modifierSuperieur(Super);

	Pcad->actionRows(personnel->UPDATE());
}

void NS_Svc::CL_svc_gestionPersonnel::supprimer(int P_reference)
{
	personnel->modifierReference(P_reference);

	Pcad->actionRows(personnel->DELETE());
}

