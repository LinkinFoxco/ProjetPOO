#include "Commande.h"

void Commande::calculPanier()
{
	for (int i = 0; i < m_articles.Count; i++)
	{
		m_totalPrixHT += m_articles[i]->m_article->obtenirCoutArticle()->obtenirCoutHT() * m_articles[i]->quantite;
		m_totalPrixTVA += m_articles[i]->m_article->obtenirCoutArticle()->obtenirCoutTVA() * m_articles[i]->quantite;
		m_totalPrixTTC += m_articles[i]->m_article->obtenirCoutArticle()->obtenirCoutTTC() * m_articles[i]->quantite;
		m_totalArticle += m_articles[i]->quantite;
	}
}

void Commande::modifierArticles(qttArticle^ art)
{
	int position(0);
	for (int i = 0; i < m_articles.Count; i++)
	{
		if (m_articles[i] != art)
			position++;
	}
	m_articles[position] = art;
	m_articles[position]->quantite = 1;
}

void Commande::ajouterArticles(Article^ art, int qtt)
{
	qttArticle^ buff = gcnew qttArticle();
	buff->m_article = art;
	buff->quantite = qtt;
	m_articles.Add(buff);
};

void Commande::modifier3LVille()
{
	if (m_client->obtenirAdresseLivraison()->obtenirVille()->Length - 1 >= 3)
	{
		m_3Lville = System::Convert::ToString(m_client->obtenirAdresseLivraison()->obtenirVille()[0])
			+ System::Convert::ToString(m_client->obtenirAdresseLivraison()->obtenirVille()[1])
			+ System::Convert::ToString(m_client->obtenirAdresseLivraison()->obtenirVille()[2]);
	}
	else
	{
		m_3Lville = m_client->obtenirAdresseLivraison()->obtenirVille();
	}
}

System::String^ Commande::SELECT()
{
	return "SELECT ID, L2_Nom, L2_Prenom, L3_Ville, Annee_Commande, Date_Emission, Date_Livraison, Date_Paiement, Moyen_Paiement, Nb_Total_Article, Prix_Total_HT, Prix_Total_TVA, Prix_Total_TTC, Quantite_Article_Commande, ID_Client FROM Commande;";
}

System::String^ Commande::INSERT()
{
	System::String^ buff = obtenirMoyenDePaiement()->ToString();
	return "INSERT INTO Commande (L2_Nom, L2_Prenom, L3_Ville, Date_Emission, Date_Livraison, Date_Paiement, Moyen_Paiement, Nb_Total_Article, Prix_Total_HT, Prix_Total_TVA, Prix_Total_TTC, Quantite_Article_Commande, ID_Client) " +
		"VALUES ('" + this->obtenir2LNom() + "', '" 
		+ this->obtenir2LPrenom() + "', '" 
		+ this->obtenir3LVille() + "', '" 
		+ this->obtenirDateEmission() + "', '" 
		+ this->obtenirDateLivraison() + "', '" 
		+ this->obtenirDatePaiement() + "', '" 
		+ buff + "', '" 
		+ this->obtenirTotalArticle() + "', '" 
		+ this->obtenirTotalPrixHT() + "', '" 
		+ this->obtenirTotalPrixTVA() + "', '" 
		+ this->obtenirTotalPrixTTC() + "', '" 
		+ this->obtenirTotalArticle() + "', '" 
		+ this->obtenirClient() 
		+ "');SELECT @@IDENTITY;";
}

System::String^ Commande::UPDATE()
{
	System::String^ buff = obtenirMoyenDePaiement()->ToString();
	return "UPDATE Commande SET L2_Nom = '" + this->obtenir2LNom() 
		+ "', L2_Prenom = '" + this->obtenir2LPrenom() 
		+ "', L3_Ville = '" + this->obtenir3LVille() 
		+ "', Date_Emission = '" + this->obtenirDateEmission() 
		+ "', Date_Livraison = '" + this->obtenirDateLivraison() 
		+ "', Date_Paiement = '" + this->obtenirDatePaiement() 
		+ "', Moyen_Paiement = '" + buff 
		+ "', Nb_Total_Article = '" + this->obtenirTotalArticle() 
		+ "', Prix_Total_HT = '" + this->obtenirTotalPrixHT() 
		+ "', Prix_Total_TVA = '" + this->obtenirTotalPrixTVA() 
		+ "', Prix_Total_TTC = '" + this->obtenirTotalPrixTTC() 
		+ "', Quantite_Article_Commande = '" + this->obtenirTotalArticle() 
		+ "', ID_Client = '" + this->obtenirClient() 
		+ "' WHERE(ID = " + this->obtenirReferenceCommande() + ");";
}

System::String^ Commande::DELETE()
{
	return "DELETE FROM Commande WHERE(ID = " + this->obtenirReferenceCommande() + ");";
}
