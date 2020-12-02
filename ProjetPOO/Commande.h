#pragma once
#include <cliext/vector>
#include "Article.h"
#include "Client.h"
#include "Facture.h"

enum class moyenDePaiement {
	CB,
	Cheque,
	Fiduciaire,
	Paypal,
	Crypto,
	Coupon,
	Avoir,
	//Obelos_d_or,
};

ref struct qttArticle {
	Article^ m_article;
	int quantite;
};

ref class Commande
{
public:
	void calculPanier(); //calcul totalArticle; totalPrixHT; totalPrixTVA; totalPrixTTC;
	void ajouterArticles(qttArticle^ Nqttarticle) { m_articles.push_back(Nqttarticle); }
	void retirerArticles(Article);
	void modifierAnnee(int NAnnee) { m_annee = NAnnee; }
	void modifier(qttArticle^ art) { m_articles.push_back(art); }
	void modifierDateLivraison(System::String^ date) { m_dateLivraison = date; }
	void modifierDateEmission(System::String^ date) { m_dateEmission = date; }
	void modifierDatePaiement(System::String^ date) { m_datePaiement = date; }
	void modifierMoyenDePaiement(moyenDePaiement mdpaiment) { m_moyenPaiement = mdpaiment; }
	void modifier2LPrenom() { m_2Lprenom = m_client.obtenirPPrenom()[0] + m_client.obtenirPPrenom()[1]; }
	void modifier2LNom() { m_2Lprenom = m_client.obtenirPNom()[0] + m_client.obtenirPNom()[1]; }
	void modifier3LVille();

	int obtenirReference() { return m_reference; }
	int obtenirAnnee() { return m_annee; }
	System::String^ obtenirDateLivraison() { return m_dateLivraison; }
	System::String^ obtenirDateEmission() { return m_dateEmission; }
	System::String^ obtenirDatePaiement() { return m_datePaiement; }
	moyenDePaiement obtenirMoyenDePaiement() { return m_moyenPaiement; }
	int obtenirTotalArticle() { return m_totalArticle; }
	int obtenirTotalPrixHT() { return m_totalPrixHT; }
	int obtenirTotalPrixTVA() { return m_totalPrixTVA; }
	int obtenirTotalPrixTTC() { return m_totalPrixTTC; }
	System::String^ obtenir2LPrenom() { return m_2Lprenom; }
	System::String^ obtenir2LNom() { return m_2Lnom; }
	System::String^ obtenir3LVille() { return m_3Lville; }
	Client^ obtenirClient() { return m_client; }
	Facture^ obtenirFacture() { return m_facture; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

protected:
	int m_reference;
	int m_annee;
	cliext::vector<qttArticle^> m_articles;
	System::String^ m_dateLivraison;
	System::String^ m_dateEmission;
	System::String^ m_datePaiement;
	moyenDePaiement m_moyenPaiement;
	int m_totalArticle;
	int m_totalPrixHT;
	int m_totalPrixTVA;
	int m_totalPrixTTC;
	System::String^ m_2Lprenom;
	System::String^ m_2Lnom;
	System::String^ m_3Lville;
	Client^ m_client;
	Facture^ m_facture;
};

