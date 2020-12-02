#include "Commande.h"

void Commande::calculPanier()
{
	for (qttArticle qttArt : m_articles)
	{
		m_totalPrixHT += qttArt.m_article.obtenirCoutArticle().obtenirCoutHT() * qttArt.quantite;
		m_totalPrixTVA += qttArt.m_article.obtenirCoutArticle().obtenirCoutTVA() * qttArt.quantite;
		m_totalPrixTTC += qttArt.m_article.obtenirCoutArticle().obtenirCoutTTC() * qttArt.quantite;
		m_totalArticle += qttArt.quantite;
	}
}

void Commande::retirerArticles(Article art)
{
	int position(0);
	for (qttArticle qttarticle : m_articles )
	{
		if (qttarticle.m_article.obtenirReference() != art.obtenirReference())
			position++;
	}
	m_articles.erase(m_articles.begin()+position);
}

void Commande::modifier3LVille()
{
	if (m_client.obtenirAdresseLivraison().obtenirVille().length() - 1 >= 3)
		m_3Lville = m_client.obtenirAdresseLivraison().obtenirVille()[0] + m_client.obtenirAdresseLivraison().obtenirVille()[1] + m_client.obtenirAdresseLivraison().obtenirVille()[2];
	else
		m_3Lville = m_client.obtenirAdresseLivraison().obtenirVille();
}
