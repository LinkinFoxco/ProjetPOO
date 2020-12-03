#include "CL_CAD.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


void NS_Composants::CL_CAD::setSQL(String^ Nrequete)
{
	if (Nrequete != "" || Nrequete != "RIEN")
	{
		requete = Nrequete;
	}
	else
	{
		requete = "RIEN";
	}
}

NS_Composants::CL_CAD::CL_CAD()
{
	requete = "RIEN";
	connexionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True;Pooling=False";
	Connexion = gcnew SqlConnection(connexionString);
	Commande = gcnew SqlCommand(requete,Connexion);
	Commande->CommandType = CommandType::Text;
}

int NS_Composants::CL_CAD::actionRowsID(String^ rqSql)
{
	int id = 0;
	setSQL(rqSql);
	Commande->CommandText = requete;
	Connexion->Open();
	id = Convert::ToInt32(Commande->ExecuteScalar());
	Connexion->Close();
	return id;
}

void NS_Composants::CL_CAD::actionRows(String^ rqSql)
{
	setSQL(rqSql);
	Commande->CommandText = requete;
	Connexion->Open();
	Commande->ExecuteNonQuery();
	Connexion->Close();
}

DataSet^ NS_Composants::CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
{
	setSQL(rq_sql);
	dataAdapter = gcnew SqlDataAdapter(Commande);
	Commande->CommandText = requete;
	data = gcnew DataSet();
	dataAdapter->Fill(data, dataTableName);
	return data;
}
