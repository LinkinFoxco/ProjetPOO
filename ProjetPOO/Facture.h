#pragma once
#include "Commande.h"
#include "Societe.h"

ref class Facture : public Commande
{
private:
	int m_reference;
	Client^ m_client;
	Societe^ m_societe;

public:
	int obtenirReference() { return m_reference; }
	Client^ obtenirClient() { return m_client; }
	Societe^ obtenirSociete() { return m_societe; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

