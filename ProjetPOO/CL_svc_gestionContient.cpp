#include "CL_svc_gestionContient.h"

DataSet^ NS_Svc::CL_svc_gestionContient::listeContient(String^ dataTableName)
{
	donneeContient = cadContient->getRows(contient->SELECT(), dataTableName);

	return donneeContient;
}

int NS_Svc::CL_svc_gestionContient::ajouter(int article, int commande, int quantite)
{
	contient->modifierArticle(article);
	contient->modifierCommande(commande);
	contient->modifierQuantite(quantite);
	cadContient->actionRowsID(contient->INSERT());
}

void NS_Svc::CL_svc_gestionContient::modifier(int article, int commande, int quantite)
{

	contient->modifierArticle(article);
	contient->modifierCommande(commande);
	contient->modifierQuantite(quantite);
	

	cadContient->actionRows(contient->UPDATE());
}

void NS_Svc::CL_svc_gestionContient::supprimer(int referenceArticle, int referenceCommande)
{
	contient->modifierArticle(referenceArticle);
	contient->modifierCommande(referenceCommande);

	cadContient->actionRows(contient->DELETE());
}
