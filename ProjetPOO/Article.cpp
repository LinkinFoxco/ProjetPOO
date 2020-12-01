#include "Article.h"

System::String^ Article::SELECT(){
	throw gcnew System::NotImplementedException();
	return "SELECT ID, Nom_Article, Quantite_Article_Stock, ID_Cout FROM Article";
}

System::String^ Article::INSERT(){
	throw gcnew System::NotImplementedException();
	return ;
}

System::String^ Article::UPDATE(){
	throw gcnew System::NotImplementedException();
	return ;
}

System::String^ Article::DELETE(){
	throw gcnew System::NotImplementedException();
	return ;
}
