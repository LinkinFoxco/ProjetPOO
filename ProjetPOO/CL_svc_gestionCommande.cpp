#include "CL_svc_gestionCommande.h"

DataSet^ NS_Svc::CL_svc_gestionCommande::listeCommande(String^ dataTableName)
{
	donneeCommande->Clear();
	donneeCommande = cadCommande->getRows(commande->SELECT(), dataTableName);

	return donneeCommande;
}

int NS_Svc::CL_svc_gestionCommande::ajouter(int article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement)
{
	int reference;
	commande->calculPanier();
	commande->modifierMoyenDePaiement(moyPaiement);
	commande->modifierClient(client);
	commande->modifierDateEmission(dateEmission);
	commande->modifierDateLivraison(dateLivraison);
	commande->modifierDatePaiement(datePaiement);
	Contient->modifierArticle(article);
	Contient->modifierQuantite(qtt);
	Contient->modifierCommande(commande->obtenirReferenceCommande());
	
	reference = cadCommande->actionRowsID(commande->INSERT());
	cadContient->actionRowsID(Contient->INSERT());
	return reference;
}

void NS_Svc::CL_svc_gestionCommande::modifier(int referenceCommande, int article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement)
{
	commande->modifierReferenceCommande(referenceCommande);
	commande->calculPanier();
	commande->modifierMoyenDePaiement(moyPaiement);
	commande->modifierClient(client);
	commande->modifierDateEmission(dateEmission);
	commande->modifierDateLivraison(dateLivraison);
	commande->modifierDatePaiement(datePaiement);
	Contient->modifierArticle(article);
	Contient->modifierCommande(referenceCommande);
	Contient->modifierQuantite(qtt);

	cadCommande->actionRows(commande->UPDATE());
	cadContient->actionRows(Contient->UPDATE());
}

void NS_Svc::CL_svc_gestionCommande::supprimer(int referenceCommande)
{
	commande->modifierReferenceCommande(referenceCommande);
	Contient->modifierCommande(referenceCommande);

	cadCommande->actionRows(commande->DELETE());
	cadContient->actionRows(Contient->DELETE());
}
