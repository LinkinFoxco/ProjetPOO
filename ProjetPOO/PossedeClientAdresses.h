#pragma once

ref class PossedeClientAdresses
{
private:
	int m_referenceLivraison;
	int m_referenceFacturation;
	int m_referenceClient;

public:
	int obtenirAdresseLivraison() { return m_referenceLivraison; }
	int obtenirAdresseFacturation() { return m_referenceFacturation; }
	int obtenirClient() { return m_referenceClient; }

	void modifierAdresseLivraison(int adr) { m_referenceLivraison = adr; }
	void modifierAdresseFacturation(int adr) { m_referenceFacturation = adr; }
	void modifierClient(int client) { m_referenceClient = client; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};