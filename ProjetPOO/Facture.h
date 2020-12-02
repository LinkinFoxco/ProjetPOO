#pragma once
#include "Commande.h"
#include "Societe.h"

ref class Facture : public Commande
{
private:
	Client m_client;
	Societe m_societe;

public:
	Client obtenirClient() { return m_client; }				//A changer (en gros s�parer les donn�es aux lieu de faire un seul return 
	Societe obtenirSociete() { return m_societe; }			//same (comme � d'autres endroits)

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

