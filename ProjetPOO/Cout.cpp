#include "Cout.h"

int Cout::TVA[]{ 0, 10, 15, 20 };
int Cout::Marge[]{ 0, 5, 10, 15 };
int Cout::Remise[]{ 0, 5, 6 };
int Cout::Demarque[]{ 0, 2, 3, 5 };

void Cout::calculerCoutTTC(int margePosition, int remisePosition, int demarquePosition)
{
	CoutTTC = CoutTVA + CoutTVA * Marge[margePosition]/100 + CoutTVA * Remise[remisePosition]/100 + CoutTVA * Demarque[demarquePosition]/100;
}

System::String^ Cout::SELECT()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ Cout::INSERT()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ Cout::UPDATE()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ Cout::DELETE()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

