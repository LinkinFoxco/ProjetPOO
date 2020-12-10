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
		DataSet^ donneePersonnel;

	public:
		CL_svc_gestionPersonnel() {
			Pcad = gcnew CL_CAD();
			personnel = gcnew Personnel();
			donneePersonnel = gcnew DataSet();
		};
		DataSet^ listePersonnel(String^);
		int ajouter(int, String^, int);
		void modifier(int, String^, int);
		void supprimer(int);
	};

}
/*	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ m_superieur;
*/


