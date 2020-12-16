#include "ContientArticleCommande.h"

System::String^ ContientArticleCommande::SELECT() {
	return "SELECT ID, ID_Commande, Quantite FROM contient;";
}

System::String^ ContientArticleCommande::INSERT() {
	return "INSERT INTO contient (ID, ID_Commande, Quantite) VALUES ('" + this->obtenirArticle() + "', '" + this->obtenirCommande() + "', '" + this->obtenirQuantite() + "');";
}

System::String^ ContientArticleCommande::UPDATE() {
	return "UPDATE contient SET ID = '" + this->obtenirArticle() + "', Quantite = '" + this->obtenirQuantite() + "');";
}

System::String^ ContientArticleCommande::DELETE() {
	return "DELETE FROM contient WHERE(ID = " + this->obtenirArticle() + " AND ID_Comande = " + this->obtenirCommande() + ");";
}