#pragma once
#include "CL_CAD.h"
#include "Personne.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionPersonne
	{
	protected:
	CL_CAD^ cad;
	Personne^ personne;
	DataSet^ donnee;

	public:
		CL_svc_gestionPersonne();
		DataSet^ listePersonne(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};
}
