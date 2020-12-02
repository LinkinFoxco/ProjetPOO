#include "CL_CAD.h"
#include "Article.h"

#pragma once
using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionArticle
	{
	private:
		CL_CAD^ cadArticle;
		Article^ article;
		DataSet^ donneeArticle;
	public:
		CL_svc_gestionArticle() {
			cadArticle = gcnew CL_CAD();
			article = gcnew Article();
			donneeArticle = gcnew DataSet();
		};
		DataSet^ listeArticle(String^);
		int ajouter(int, String^, Cout^);
		void modifier(int, String^, Cout^);
		void supprimer(int);
	};
}
/*
* int m_reference;
	int m_stock;
	System::String^ m_nomArticle;
	Cout^ m_coutArticle;
*/
