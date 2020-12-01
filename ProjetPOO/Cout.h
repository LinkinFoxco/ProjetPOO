#pragma once

class Cout
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

	int obtenirTVA(int position) { return TVA[position]; }
	int obtenirMarge(int position) { return Marge[position]; }
	int obtenirRemise(int position) { return Remise[position]; }
	int obtenirDemarque(int position) { return Demarque[position]; }

	void modifierCoutHT(int NCoutHT) { CoutHT = NCoutHT; }
	void modifierTVA(int valeur, int position) { TVA[position] = valeur; }
	void modifierMarge(int valeur, int position) { Marge[position] = valeur; }
	void modifierRemise(int valeur, int position) { Marge[position] = valeur; }
	void modifierDemarque(int valeur, int position) { Marge[position] = valeur; }

private:
	int CoutHT = 0;
	int CoutTVA = 0;
	int CoutTTC = 0;
	static int TVA[4];
	static int Marge[4];
	static int Remise[3];
	static int Demarque[4];
};
