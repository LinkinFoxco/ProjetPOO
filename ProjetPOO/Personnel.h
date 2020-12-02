#pragma once
#include "Personne.h"
using namespace NS_Composants;

using namespace NS_Composants;

	ref class Personnel : public Personne
	{
	public:
		Adresse obtenirAdresseDomicile() { return m_adresseDomicile; }
		void modifierAdresseDomicile(int position) { m_adresseDomicile = m_adresse[position]; }

	private:
		Adresse m_adresseDomicile;
		std::string m_dateEmbauche;
		Personnel& superieur;
	};
