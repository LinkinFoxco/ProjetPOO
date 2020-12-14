#include "CL_CAD.h"
#include"Commande.h"

#pragma once

using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionCommande
	{
	private:
		CL_CAD^ cadCommande;
		DataSet^ donneeCommande;
	public:
		CL_svc_gestionCommande() {
			cadCommande = gcnew CL_CAD();
			commande = gcnew Commande();
			donneeCommande = gcnew DataSet();
		};
		Commande^ commande;
		DataSet^ listeCommande(String^);
		int ajouter(Article^ article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement);
		void modifier(int referenceCommande, Article^ article, int qtt, Client^ client, moyenDePaiement^ moyPaiement, String^ dateLivraison, String^ dateEmission, String^ datePaiement);
		void supprimer(int);
	};
}
