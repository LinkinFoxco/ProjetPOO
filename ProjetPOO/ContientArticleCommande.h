#pragma once
ref class ContientArticleCommande
{
private:
	int m_referenceArticle;
	int m_referenceCommande;

public:
	ContientArticleCommande() {
		m_referenceArticle = -1;
		m_referenceCommande = -1;
	}
	int obtenirArticle() { return m_referenceArticle; }
	int obtenirCommande() { return m_referenceCommande; }

	void modifierArticle(int art) { m_referenceArticle = art; }
	void modifierCommande(int com) { m_referenceCommande = com; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};