#pragma once
#include <iostream>
#include "Cout.h"

class Article
{
public:
	int obtenirReference() { return m_reference; }
	int obtenirStocke() { return m_stocke; }
	std::string obtenirNomArticle() { return m_nomArticle; }
	Cout obtenirCoutArticle() { return m_coutArticle; }

	void modifierStocke(int nombre) { m_stocke += nombre; }
	void modifierNomArticle(std::string NNom) { m_nomArticle = NNom; }

private:
	const int m_reference;
	int m_stocke;
	std::string m_nomArticle;
	Cout m_coutArticle;
};

