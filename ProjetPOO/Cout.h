#pragma once

ref class Cout
{
public:
	void calculerCoutTVA(int position) { CoutTVA = TVA[position]/100 * CoutHT + CoutHT; }
	void calculerCoutTVA() { CoutTVA =  CoutHT; }
	void calculerCoutTTC(int margePosition, int remisePosition, int demarquePosition);
	void calculerCoutTTC() { CoutTTC = CoutTVA; }

	int obtenirCoutHT() { return CoutHT; }
	int obtenirCoutTVA() { return CoutTVA; }
	int obtenirCoutDifferenceTVA() { return CoutTVA-CoutHT; }
	int obtenirCoutTTC() { return CoutTTC; }
	int obtenirCoutDifferenceTTC() { return CoutTTC-CoutTVA; }
	int obtenirReference() { return m_reference; }

	int obtenirTVA(int position) { return TVA[position]; }
	int obtenirMarge(int position) { return Marge[position]; }
	int obtenirRemise(int position) { return Remise[position]; }
	int obtenirDemarque(int position) { return Demarque[position]; }

	void modifierCoutHT(int NCoutHT) { CoutHT = NCoutHT; }
	void modifierTVA(int valeur, int position) { TVA[position] = valeur; }
	void modifierMarge(int valeur, int position) { Marge[position] = valeur; }
	void modifierRemise(int valeur, int position) { Remise[position] = valeur; }
	void modifierDemarque(int valeur, int position) { Demarque[position] = valeur; }
	void modifierReference(int reference) { m_reference = reference; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private:
	int m_reference;
	int CoutHT = 0;
	int CoutTVA = 0;
	int CoutTTC = 0;
	array<int>^ TVA = gcnew array<int>(4) { 0, 10, 15, 20 };
	array<int>^ Marge = gcnew array<int>(4) { 0, 5, 10, 15 };
	array<int>^ Remise = gcnew array<int>(3) { 0, 5, 6 };
	array<int>^ Demarque = gcnew array<int>(4) { 0, 2, 3, 5 };
};