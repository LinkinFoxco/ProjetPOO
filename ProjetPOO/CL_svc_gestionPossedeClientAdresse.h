#include "CL_CAD.h"
#include "PossedeClientAdresses.h"
#pragma once

using namespace NS_Composants;

namespace NS_Svc
{
	ref class CL_svc_gestionPossedeClientAdresse
	{
	private:
		CL_CAD^ cadPCA;
		PossedeClientAdresses^ pca;
		DataSet^ donneePCA;
	public:
		CL_svc_gestionPossedeClientAdresse() {
			cadPCA = gcnew CL_CAD();
			pca = gcnew PossedeClientAdresses();
			donneePCA = gcnew DataSet();
		};
		DataSet^ listePCA(String^);
		void ajouter(int, int, int);
		void modifier(int, int, int);
		void supprimer(int, int, int);
	};
}