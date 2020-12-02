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
		int ajouter(String^, Adresse^, Adresse^, Personne^);
		void modifier(int, String^, Adresse^, Adresse^, Personne^);
		void supprimer(int);
	};
}
/*const int numClient;
	System::String^ dateNaissance;
	Adresse m_adresseLivraison;
	Adresse m_adresseFacturation;
	Personne m_client;
*/
