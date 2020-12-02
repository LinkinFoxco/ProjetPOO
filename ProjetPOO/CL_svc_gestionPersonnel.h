#pragma once

#include "CL_CAD.h"
#include "Personnel.h"

using namespace NS_Composants;

namespace NS_Svc 
{

	ref class CL_svc_gestionPersonnel 
	{
	protected:
		CL_CAD^ Pcad;
		Personnel^ personnel;
		DataSet^ Pdonnee;

	public:
		CL_svc_gestionPersonnel();
		DataSet^ listePersonnel(String^);
		int ajouter(int, String^, Personnel^);
		void modifier(int, String^, Personnel^);
		void supprimer(int);
	};

}
/*	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ superieur;
*/


