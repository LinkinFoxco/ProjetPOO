#include "Personne.h"

void Personne::retirerAdresse(Adresse Nadrs)
{
	int position(0);
	for (Adresse adrs : m_adresse)
	{
		if ( adrs.m_reference != Nadrs.m_reference )
			position++;
	}
	m_adresse.erase(m_adresse.begin() + position);
}
