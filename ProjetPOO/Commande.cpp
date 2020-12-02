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
	if (m_client.obtenirAdresseLivraison().m_ville.length() - 1 >= 3)
		m_3Lville = m_client.obtenirAdresseLivraison().m_ville[0] + m_client.obtenirAdresseLivraison().m_ville[1] + m_client.obtenirAdresseLivraison().m_ville[3];
	else
		m_3Lville = m_client.obtenirAdresseLivraison().m_ville;
}

System::String^ Commande::SELECT()
{
	throw gcnew System::NotImplementedException();
	return "SELECT ID, L2_Nom, L2_Prenom, L3_Ville, Annee_Commande, Date_Emission, Date_Livraison, Date_Paiement, Moyen_Paiement, Nb_Total_Article, Prix_Total_HT, Prix_Total_TVA, Prix_Total_TTC, Quantite_Article_Commande, ID_Client, ID_Facture FROM Commande;";
}

System::String^ Commande::INSERT()
{
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Commande (L2_Nom, L2_Prenom, L3_Ville, Annee_Commande, Date_Emission, Date_Livraison, Date_Paiement, Moyen_Paiement, Nb_Total_Article, Prix_Total_HT, Prix_Total_TVA, Prix_Total_TTC, Quantite_Article_Commande, ID_Client, ID_Facture) " +
		"VALUES ('" + this->obtenir2LNom() + "', '" + this->obtenir2LPrenom() + "', '" + this->obtenir3LVille() + "', '" + this->obtenirAnnee() + "', '" + this->obtenirDateEmission() + "', '" + this->obtenirDateLivraison() + "', '" + this->obtenirDatePaiement() + "', '" + this->obtenirMoyenDePaiement() + "', '" + this->obtenirTotalArticle() + "', '" + this->obtenirTotalPrixHT() + "', '" + this->obtenirTotalPrixTVA() + "', '" + this->obtenirTotalPrixTTC() + "', '" + this->obtenirTotalArticle() + "', '" + this->obtenirClient() + "', '" + this->obtenirFacture() + "');SELECT @@IDENTITY;";
}

System::String^ Commande::UPDATE()
{
	throw gcnew System::NotImplementedException();
	return "UPDATE Commande SET L2_Nom = '" + this->obtenir2LNom() + "', L2_Prenom = '" + this->obtenir2LPrenom() + "', L3_Ville = '" + this->obtenir3LVille() + "', Annee_Commande = '" + this->obtenirAnnee() + "', Date_Emission = '" + this->obtenirDateEmission() + "', Date_Livraison = '" + this->obtenirDateLivraison() + "', Date_Paiement = '" + this->obtenirDatePaiement() + "', Moyen_Paiement = '" + this->obtenirMoyenDePaiement() + "', Nb_Total_Article = '" + this->obtenirTotalArticle() + "', Prix_Total_HT = '" + this->obtenirTotalPrixHT() +
		"', Prix_Total_TVA = '" + this->obtenirTotalPrixTVA() + "', Prix_Total_TTC = '" + this->obtenirTotalPrixTTC() + "', Quantite_Article_Commande = '" + this->obtenirTotalArticle() + "', ID_Client = '" + this->obtenirClient() + "', ID_Facture= '" + this->obtenirfacture() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Commande::DELETE()
{
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Commande WHERE(ID = " + this->obtenirReference() + ");";
}
