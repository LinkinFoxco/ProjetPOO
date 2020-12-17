#include "CL_CAD.h"
#include "ContientArticleCommande.h"
#pragma once

using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionContient
	{
	private:
		CL_CAD^ cadContient;
		ContientArticleCommande^ contient;
		DataSet^ donneeContient;
	public:
		CL_svc_gestionContient()
		{
			cadContient = gcnew CL_CAD();
			contient = gcnew ContientArticleCommande();
			donneeContient = gcnew DataSet();
		};
		DataSet^ listeContient(String^);
		void ajouter(int, int, int);
		void modifier(int, int, int);
		void supprimer(int, int);
	};
}

