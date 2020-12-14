#pragma once

ref class Cout
{
public:
	Cout();
	void calculerCoutTVA(int TVAValeur) { 
		CoutTVA = TVAValeur/100 * CoutHT + CoutHT;
	}
	void calculerCoutTVA() { CoutTVA =  CoutHT; }
	void calculerCoutTTC(int margePosition, int remisePosition, int demarquePosition);
	void calculerCoutTTC() { CoutTTC = CoutTVA; }

	int obtenirCoutHT() { return CoutHT; }
	int obtenirCoutTVA() { return CoutTVA; }
	int obtenirCoutDifferenceTVA() { return CoutTVA-CoutHT; }
	int obtenirCoutTTC() { return CoutTTC; }
	int obtenirCoutDifferenceTTC() { return CoutTTC-CoutTVA; }
	int obtenirReferenceCout() { return referenceCout; }
	int obtenirTVA(int position) { return TVA[position]; }
	int obtenirMarge(int position) { return Marge[position]; }
	int obtenirRemise(int position) { return Remise[position]; }
	int obtenirDemarque(int position) { return Demarque[position]; }

	void modifierCoutHT(int NCoutHT) { CoutHT = NCoutHT; }
	void modifierCoutTVA(int NCoutTVA) { CoutTVA = NCoutTVA; }
	void modifierCoutTTC(int NCoutTTC) { CoutTTC = NCoutTTC; }
	void modifierTVA(int valeur, int position) { TVA[position] = valeur; }
	void modifierMarge(int valeur, int position) { Marge[position] = valeur; }
	void modifierRemise(int valeur, int position) { Remise[position] = valeur; }
	void modifierDemarque(int valeur, int position) { Demarque[position] = valeur; }
	void modifierReferenceCout(int reference) { referenceCout = reference; }

	System::String^ SELECT();
	System::String^ INSERT();
	System::String^ UPDATE();
	System::String^ DELETE();

private:
	int referenceCout;
	int CoutHT = 0;
	int CoutTVA = 0;
	int CoutTTC = 0;
	System::Collections::Generic::List<int>^ TVA; //{ 0, 10, 15, 20 }
	System::Collections::Generic::List<int>^ Marge; //{ 0, 5, 10, 15 };
	System::Collections::Generic::List<int>^ Remise; //{ 0, 5, 6 };
	System::Collections::Generic::List<int>^ Demarque; //{ 0, 2, 3, 5 };
};
