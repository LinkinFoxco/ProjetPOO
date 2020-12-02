#include "CL_svc_gestionPersonne.h"
#include "CL_CAD.h"
#include "Client.h"
#pragma once

using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionClient
	{
	private:
		CL_CAD^ Ccad;
		Client^ client;
		DataSet^ donnee;
	public:
		CL_svc_gestionClient();
		DataSet^ listeClient(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};
}
