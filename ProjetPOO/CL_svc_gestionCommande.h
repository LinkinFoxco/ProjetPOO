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
		Commande^ commande;
		DataSet^ donneeCommande;
	public:
		CL_svc_gestionCommande() {
			cadCommande = gcnew CL_CAD();
			commande = gcnew Commande();
			donneeCommande = gcnew DataSet();
		};
		DataSet^ listeCommande(String^);
		int ajouter(int, int , int , int, String^, String^, String^, String^, String^, moyenDePaiement^, Client^);
		void modifier(int, int, int, int, int, String^, String^, String^, String^, String^, moyenDePaiement^, Client^);
		void supprimer(int);
	};
}
/*
protected:
	int referenceCommande;
	int m_totalArticle;
	int m_totalPrixHT;
	int m_totalPrixTVA;
	int m_totalPrixTTC;
	List<qttArticle^> m_articles;
	System::String^ m_2Lprenom;
	System::String^ m_2Lnom;
	System::String^ m_3Lville;
	System::String^ m_dateLivraison;
	System::String^ m_dateEmission;
	System::String^ m_datePaiement;
	moyenDePaiement m_moyenPaiement;
	Client^ m_client;
	Facture^ m_facture;
*/