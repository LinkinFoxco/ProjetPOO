#pragma once
#include <iostream>
#include "Cout.h"

ref class Article
{
protected:
	int m_reference;
	int m_stock;
	System::String^ m_nomArticle;
	Cout^ m_coutArticle;

public:
	int obtenirReference() { return m_reference; }
	int obtenirStock() { return m_stock; }
	System::String^ obtenirNomArticle() { return m_nomArticle; }
	Cout^ obtenirCoutArticle() { return m_coutArticle; }

	void modifierStocke(int nombre) { m_stock += nombre; }
	void modifierNomArticle(System::String^ NNom) { m_nomArticle = NNom; }

	System::String^ SELECTArticle();
	System::String^ INSERTArticle();
	System::String^ UPDATEArticle();
	System::String^ DELETEArticle();
	System::String^ SELECTContient();
	System::String^ INSERTContient();
	System::String^ UPDATEContient();
	System::String^ DELETEContient();
};

