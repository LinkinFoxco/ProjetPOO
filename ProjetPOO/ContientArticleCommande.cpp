#include "ContientArticleCommande.h"

System::String^ ContientArticleCommande::SELECT() {
	return "SELECT ID, ID_Commande FROM contient;";
}

System::String^ ContientArticleCommande::INSERT() {
	return "INSERT INTO contient (ID, ID_Commande) VALUES ('" + this->obtenirArticle() + "', '" + this->obtenirCommande() + "');";
}

System::String^ ContientArticleCommande::UPDATE() {
	return "UPDATE contient SET ID_Commande = '" + this->obtenirCommande() + "', ID = '" + this->obtenirArticle() + "');";
}

System::String^ ContientArticleCommande::DELETE() {
	return "DELETE FROM contient WHERE(ID = " + this->obtenirArticle() + " AND ID_Comande = " + this->obtenirCommande() + ");";
}