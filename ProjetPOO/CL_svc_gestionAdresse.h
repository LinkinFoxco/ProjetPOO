#include "CL_CAD.h"
#include "Adresse.h"
#pragma once
using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionAdresse
	{
	private:
		CL_CAD^ Adcad;
		Adresse^ adresse;
		DataSet^ Adrdonnee;
	public:
		CL_svc_gestionAdresse() {
			Adcad = gcnew CL_CAD();
			adresse = gcnew Adresse();
			Adrdonnee = gcnew DataSet();
		};
		DataSet^ listeAdresse(String^);
		int ajouter(int, int, int, int, int, int, String^, String^, String^);
		void modifier(int, String^, String^, String^);
		void supprimer(int);
};
}