#pragma once
#include "Commande.h"
#include "Societe.h"

ref class Facture : public Commande
{
private:
	int reference;
	Client^ m_client;
	Societe^ m_societe;

public:
	Facture() {
		m_client = gcnew Client();
		m_societe = gcnew Societe();
	}
	int obtenirReference() { return m_reference; }
	Client^ obtenirClient() { return m_client; }
	Societe^ obtenirSociete() { return m_societe; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

