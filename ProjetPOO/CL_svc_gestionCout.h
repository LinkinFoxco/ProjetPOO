#include "CL_CAD.h"
#include "Cout.h"
#pragma once

using namespace NS_Composants;

namespace NS_Svc
{

	ref class CL_svc_gestionCout
	{
	private:
		CL_CAD^ cadCout;
		Cout^ cout;
		DataSet^ donneeCout;
	public:
		CL_svc_gestionCout() {
			cadCout = gcnew CL_CAD();
			cout = gcnew Cout();
			donneeCout = gcnew DataSet();
		};
		DataSet^ listeCout(String^);
		int ajouter(int, int, int);
		void modifier(int, int, int, int);
		void supprimer(int);
	};
}