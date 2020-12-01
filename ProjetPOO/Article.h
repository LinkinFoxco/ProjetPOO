#pragma once
#include <iostream>
#include "Cout.h"

ref class Article
{
private:
	int m_reference;
	int m_stocke;
	System::String^ m_nomArticle;
	Cout m_coutArticle;

public:
	int obtenirReference() { return m_reference; }
	int obtenirStocke() { return m_stocke; }
	System::String^ obtenirNomArticle() { return m_nomArticle; }
	Cout obtenirCoutArticle() { return m_coutArticle; }

	void modifierStocke(int nombre) { m_stocke += nombre; }
	void modifierNomArticle(System::String^ NNom) { m_nomArticle = NNom; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

