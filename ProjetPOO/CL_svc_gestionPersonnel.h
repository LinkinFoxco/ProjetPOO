#pragma once
#include "CL_svc_gestionPersonne.h"
#include "CL_CAD.h"
#include "Personnel.h"

using namespace NS_Composants;
namespace NS_Svc {

	ref class CL_svc_gestionPersonnel 
	{
	protected:
		CL_CAD^ cad;
		Personnel^ personnel;
		DataSet^ donnee;

	public:
		CL_svc_gestionPersonnel();
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};

}


