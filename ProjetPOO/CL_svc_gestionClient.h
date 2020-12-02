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
		DataSet^ Cdonnee;
	public:
		CL_svc_gestionClient() {
			Ccad = gcnew CL_CAD();
			client = gcnew Client();
			Cdonnee = gcnew DataSet();
		};
		DataSet^ listeClient(String^);
		int ajouter(int, String^);
		void modifier(int, int, String^);
		void supprimer(int);
	};
}
/*const int numClient;
	System::String^ dateNaissance;
	Adresse m_adresseLivraison;
	Adresse m_adresseFacturation;
	Personne m_client;
*/
