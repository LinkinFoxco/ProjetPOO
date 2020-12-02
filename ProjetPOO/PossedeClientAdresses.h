#pragma once
#include "Adresse.h"
#include "Client.h"

ref class PossedeClientAdresses
{
private:
	Adresse^ m_AdresseLivraison;
	Adresse^ m_AdresseFacturation;
	Client^ m_Client;

public:
	Adresse^ obtenirAdresseLivraison() { return m_AdresseLivraison; }
	Adresse^ obtenirAdresseFacturation() { return m_AdresseFacturation; }
	Client^ obtenirClient() { return m_Client; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};