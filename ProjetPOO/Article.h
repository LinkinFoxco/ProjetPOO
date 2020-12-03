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
	void modifierCoutArticle(Cout^ coutArticle) { m_coutArticle = coutArticle; }
	void modifierRefArticle(int reference) { m_reference = reference; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();
};

