#include "CL_svc_gestionPersonnel.h"


NS_Svc::CL_svc_gestionPersonnel::CL_svc_gestionPersonnel() {
	cad = gcnew CL_CAD();
	personnel = gcnew Personnel();
	donnee = gcnew DataSet();
}
DataSet^ NS_Svc::CL_svc_gestionPersonnel::listePersonnel(String^ dataTableName) {

	donnee->Clear();
	donnee = cad->getRows(personnel->SELECT(), dataTableName);

	return donnee;
}

int NS_Svc::CL_svc_gestionPersonnel::ajouter(Adresse^, String^, Personnel^, Societe^) {
	Adresse^ m_adresseDomicile;
	System::String^ m_dateEmbauche;
	Personnel^ superieur;
	Societe^ m_societe;

}
void NS_Svc::CL_svc_gestionPersonnel::modifier(int, String^, String^) {

}
void NS_Svc::CL_svc_gestionPersonnel::supprimer(int) {

}