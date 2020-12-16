#pragma once

ref class PossedeClientAdresses
{
private:
	int m_referenceLivraison;
	int m_referenceFacturation;
	int m_referenceClient;

public:
	PossedeClientAdresses() {
		m_referenceLivraison = -1;
		m_referenceFacturation = -1;
		m_referenceClient = -1;
	}

	int obtenirAdresseLivraison() { return m_referenceLivraison; }
	int obtenirAdresseFacturation() { return m_referenceFacturation; }
	int obtenirClient() { return m_referenceClient; }

	void modifierReferenceAdresseLivraison(int adr) { m_referenceLivraison = adr; }
	void modifierReferenceAdresseFacturation(int adr) { m_referenceFacturation = adr; }
	void modifierReferenceClient(int client) { m_referenceClient = client; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};