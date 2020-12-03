#include "CL_CAD.h"
#include "Societe.h"
#pragma once
using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionSociete
	{
	private:
		CL_CAD^ cadSociete;
		Societe^ societe;
		DataSet^ donneeSociete;
	public:
		CL_svc_gestionSociete() {
			cadSociete = gcnew CL_CAD();
			societe = gcnew Societe();
			donneeSociete = gcnew DataSet();
		};
		DataSet^ listeSociete(String^);
		int ajouter(String^, String^, String^, Adresse^);
		void modifier(int, String^, String^, String^, Adresse^);
		void supprimer(int);
	};
}