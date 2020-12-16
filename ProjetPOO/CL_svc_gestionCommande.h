#include "CL_CAD.h"
#include"Commande.h"
#include "ContientArticleCommande.h"

#pragma once

using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionCommande
	{
	private:
		CL_CAD^ cadCommande;
		DataSet^ donneeCommande;
		CL_CAD^ cadContient;
	public:
		CL_svc_gestionCommande() {
			cadCommande = gcnew CL_CAD();
			commande = gcnew Commande();
			donneeCommande = gcnew DataSet();
		};
		Commande^ commande;
		ContientArticleCommande^ Contient;
		DataSet^ listeCommande(String^);
		int ajouter(int article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement);
		void modifier(int referenceCommande, int article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement);
		void supprimer(int);
	};
}
