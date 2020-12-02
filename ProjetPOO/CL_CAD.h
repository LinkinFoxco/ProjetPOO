#pragma once
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
namespace NS_Composants
{
	ref class CL_CAD
	{
	private:
		String^ connexionString;
		String^ requete;
		SqlConnection^ Connexion;
		SqlCommand^ Commande;
		SqlDataAdapter^ dataAdapter;
		DataSet^ data;
		void setSQL(String^);

	public:
		CL_CAD();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}