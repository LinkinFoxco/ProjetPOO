#pragma once
#include "Personne.h"

class Personnel : public Personne
{
public:
	Adresse obtenirAdresseDomicile() { return m_adresseDomicile; }
	void modifierAdresseDomicile(int position) { m_adresseDomicile = m_adresse[position]; }

protected:
	Adresse m_adresseDomicile;
	std::string m_dateEmbauche;
	Personnel& superieur;
};

