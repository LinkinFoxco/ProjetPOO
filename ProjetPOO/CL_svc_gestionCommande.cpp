#include "CL_svc_gestionCommande.h"

DataSet^ NS_Svc::CL_svc_gestionCommande::listeCommande(String^ dataTableName)
{
	donneeCommande->Clear();
	donneeCommande = cadCommande->getRows(commande->SELECT(), dataTableName);

	return donneeCommande;
}

int NS_Svc::CL_svc_gestionCommande::ajouter(Article^ article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement)
{
	int reference;
	commande->ajouterArticles(qtt);
	commande->calculPanier();
	
	reference = cadCommande->actionRowsID(commande->INSERT());
	return reference;
}
