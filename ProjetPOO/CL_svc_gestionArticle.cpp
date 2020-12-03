#include "CL_svc_gestionArticle.h"
#include "Article.h"

DataSet^ NS_Svc::CL_svc_gestionArticle::listeArticle(String^ dataTableName)
{
	donneeArticle->Clear();
	donneeArticle = cadArticle->getRows(article->SELECT(), dataTableName);

	return donneeArticle;
}
int NS_Svc::CL_svc_gestionArticle::ajouter(int stock, String^ nomArticle, Cout^ coutArticle)
{
	int reference;
	article->modifierStocke(stock);
	article->modifierNomArticle(nomArticle);
	article->modifierCoutArticle(coutArticle);
	reference = cadArticle->actionRowsID (article->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionArticle::modifier(int stock, String^ nomArticle, Cout^ coutArticle)
{
	article->modifierStocke(stock);
	article->modifierNomArticle(nomArticle);
	article->modifierCoutArticle(coutArticle);

	cadArticle->actionRows(article->UPDATE());
}

void NS_Svc::CL_svc_gestionArticle::supprimer(int reference)
{
	article->modifierRefArticle(reference);

	cadArticle->actionRows(article->DELETE());
}