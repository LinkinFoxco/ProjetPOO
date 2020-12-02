#include "Personne.h"

void Personne::retirerAdresse(Adresse^ Oadrs)
{
	int position(0);
	for (int i = 0; i < m_adresse->Count; i++)
	{
		if (m_adresse[i]->obtenirReference() != Oadrs->obtenirReference())
			position++;
	}
	m_adresse->Remove(m_adresse[position]);
}
