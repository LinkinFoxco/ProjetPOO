#include "Cout.h"

void Cout::calculerCoutTTC(int margePosition, int remisePosition, int demarquePosition)
{
	CoutTTC = CoutTVA + CoutTVA * Marge[margePosition]/100 + CoutTVA * Remise[remisePosition]/100 + CoutTVA * Demarque[demarquePosition]/100;
}

System::String^ Cout::SELECT(){
	return "SELECT ID, Cout_HT, Cout_TVA, Cout_TTC, TVA, Marge, Remise, Demarque FROM Cout;";
}

System::String^ Cout::INSERT(){
	return "INSERT INTO Cout (Cout_HT, Cout_TVA, Cout_TTC, TVA, Marge, Remise, Demarque) VALUES ('" + this->obtenirCoutHT() + "', '" + this->obtenirCoutTVA() + "', '" + this->obtenirCoutTTC() + "', '" + this->obtenirTVA(2) + "', '" + this->obtenirMarge(0) + "', '" + this->obtenirRemise(0) + "', '" + this->obtenirDemarque(0) + "');SELECT @@IDENTITY;";
}

System::String^ Cout::UPDATE(){
	return "UPDATE Cout SET Cout_HT = '" + this->obtenirCoutHT() + "', Cout_TVA = '" + this->obtenirCoutTVA() + "', Cout_TTC = '" + this->obtenirCoutTTC() + "', TVA = '" + this->obtenirTVA(2) + "', Marge = '" + this->obtenirMarge(0) + "', Remise = '" + this->obtenirRemise(0) + "', Demarque = '" + this->obtenirDemarque(0) + "' WHERE(ID = " + this->obtenirReference() + ");";
}

System::String^ Cout::DELETE(){
	return "DELETE FROM Cout WHERE(ID = " + this->obtenirReference() + ");";
}

