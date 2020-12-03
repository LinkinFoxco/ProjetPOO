#pragma once
#include "Commande.h"
#include "Societe.h"

ref class Facture : public Commande
{
private:
	int referenceFacture;
	Client^ m_client;
	Societe^ m_societe;

public:
	Facture() {
		referenceFacture = -1;
		m_client = gcnew Client();
		m_societe = gcnew Societe();
	}
	int obtenirReferenceFacture() { return referenceFacture; }
	Client^ obtenirClient() { return m_client; }
	Societe^ obtenirSociete() { return m_societe; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

