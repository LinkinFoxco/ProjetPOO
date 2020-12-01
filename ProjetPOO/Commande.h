#pragma once
#include <vector>
#include "Article.h"
#include "Client.h"

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

typedef struct qttArticle {
	Article m_article;
	int quantite;
};

class Commande
{
public:
	void calculPanier(); //calcul totalArticle; totalPrixHT; totalPrixTVA; totalPrixTTC;
	void ajouterArticles(qttArticle Nqttarticle) { m_articles.push_back(Nqttarticle); }
	void retirerArticles(Article);
	void modifierAnnee(int NAnnee) { m_annee = NAnnee; }
	void modifier(qttArticle art) { m_articles.push_back(art); }
	void modifierDateLivraison(std::string date) { m_dateLivraison = date; }
	void modifierDateEmission(std::string date) { m_dateEmission = date; }
	void modifierDatePaiement(std::string date) { m_datePaiement = date; }
	void modifierMoyenDePaiement(moyenDePaiement mdpaiment) { m_moyenPaiement = mdpaiment; }
	void modifier2LPrenom() { m_2Lprenom = m_client.m_prenom[0] + m_client.m_prenom[1]; }
	void modifier2LNom() { m_2Lprenom = m_client.m_nom[0] + m_client.m_nom[1]; }
	void modifier3LVille();

protected:
	int m_annee;
	std::vector<qttArticle> m_articles;
	std::string m_dateLivraison;
	std::string m_dateEmission;
	std::string m_datePaiement;
	moyenDePaiement m_moyenPaiement;
	int m_totalArticle;
	int m_totalPrixHT;
	int m_totalPrixTVA;
	int m_totalPrixTTC;
	std::string m_2Lprenom;
	std::string m_2Lnom;
	std::string m_3Lville;
	Client m_client;

};

