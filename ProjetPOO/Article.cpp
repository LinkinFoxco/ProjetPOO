#include "Article.h"

System::String^ Article::SELECT(){
	throw gcnew System::NotImplementedException();
	return "SELECT ID, Nom_Article, Quantite_Article_Stock, ID_Cout FROM Article";
}

System::String^ Article::INSERT(){
	throw gcnew System::NotImplementedException();
	return "INSERT INTO Article (Nom_Article, Quantite_Article_Stock, ID_Cout) VALUES ('" + this->obtenirNomArticle() + "', '" + this->obtenirStock() + "', '" + this->obtenirCoutArticle() + "');SELECT @@IDENTITY;";
}

System::String^ Article::UPDATE(){
	throw gcnew System::NotImplementedException();
	return "UPDATE Article SET Nom_Article = '" + this->obtenirNomArticle() + "', Quantite_Article_Stock = '" + this->obtenirStock() + "', ID_Cout = '" + this->obtenirCoutArticle() + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Article::DELETE(){
	throw gcnew System::NotImplementedException();
	return "DELETE FROM Article WHERE(ID = " + this->obtenirReference() + ");";
}
