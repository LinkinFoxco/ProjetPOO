#include "CL_svc_gestionPossedeClientAdresse.h"

DataSet^ NS_Svc::CL_svc_gestionPossedeClientAdresse::listePCA(String^ dataTableName)
{
	donneePCA->Clear();
	donneePCA = cadPCA->getRows(pca->SELECT(), dataTableName);

	return donneePCA;
}

void NS_Svc::CL_svc_gestionPossedeClientAdresse::ajouter(int refLivraison, int refFacture, int refCLient)
{
	pca->modifierReferenceAdresseLivraison(refLivraison);
	pca->modifierReferenceAdresseFacturation(refFacture);
	pca->modifierReferenceClient(refCLient);
	cadPCA->actionRowsID(pca->INSERT());
}

void NS_Svc::CL_svc_gestionPossedeClientAdresse::modifier(int refLivraison, int refFacture, int refCLient)
{
	pca->modifierReferenceAdresseLivraison(refLivraison);
	pca->modifierReferenceAdresseFacturation(refFacture);
	pca->modifierReferenceClient(refCLient);

	cadPCA->actionRows(pca->UPDATE());
}

void NS_Svc::CL_svc_gestionPossedeClientAdresse::supprimer(int refLivraison, int refFacture, int refCLient)
{
	pca->modifierReferenceAdresseLivraison(refLivraison);
	pca->modifierReferenceAdresseFacturation(refFacture);
	pca->modifierReferenceClient(refCLient);

	cadPCA->actionRows(pca->DELETE());
}
