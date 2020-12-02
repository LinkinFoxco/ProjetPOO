#include "Article.h"

System::String^ Article::SELECTArticle(){
	return "SELECT ID, Nom_Article, Quantite_Article_Stock, ID_Cout FROM Article;";
}

System::String^ Article::INSERTArticle(){
	return "INSERT INTO Article (Nom_Article, Quantite_Article_Stock, ID_Cout) VALUES ('" + this->obtenirNomArticle() + "', '" + this->obtenirStock() + "', '" + this->obtenirCoutArticle() + "');SELECT @@IDENTITY;";
}

System::String^ Article::UPDATEArticle(){
	return "UPDATE Article SET Nom_Article = '" + this->obtenirNomArticle() + "', Quantite_Article_Stock = '" + this->obtenirStock() + "', ID_Cout = '" + this->obtenirCoutArticle() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Article::DELETEArticle(){
	return "DELETE FROM Article WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Article::SELECTContient(){
	return "SELECT ID, ID_Commande FROM contient;";
}

System::String^ Article::INSERTContient(){
	return "INSERT INTO contient (ID_Commande) VALUES ('" + this->obtenirCommande() + "');SELECT @@IDENTITY;";
}

System::String^ Article::UPDATEContient(){
	return "UPDATE contient SET ID_Commande = '" + this->obtenirCommande() + "' WHERE(ID = '" + this->obtenirReference() + "');";
}

System::String^ Article::DELETEContient(){
	return "DELETE FROM contient WHERE(ID = '" + this->obtenirReference() + "');";
}
