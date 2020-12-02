#include "Personne.h"

void Personne::retirerAdresse(Adresse^ Oadrs)
{
	int position(0);
	/*for (Adresse^ adrs : m_adresse)
	{
		Nadrs->obtenirReference();
		if ( adrs->obtenirReference() != Nadrs->obtenirReference())
			position++;
	}*/
	int buff = m_adresse->Count;
	for (int i = 0; i < buff; i++)
	{
		if (m_adresse[i]->obtenirReference() != Oadrs->obtenirReference())
			position++;
	}
	m_adresse->Remove(m_adresse[position]);
}
