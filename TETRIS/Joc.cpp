#include "Joc.h"
#include <fstream>
#include <iostream>

using namespace std;

Joc::Joc()
{
	for (int i = 0; i < MAX_FILA; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			m_tauler.setTauler(i, j, COLOR_NEGRE);
		}
	}
}

void Joc::inicialitza(const string& nomFitxer)
{
	ifstream fitxer;
	fitxer.open(nomFitxer);
	if (fitxer.is_open())
	{
		int tipus, fila, columna, gir;

		fitxer >> tipus >> fila >> columna >> gir;
		// columna = posX | fila = posY
		int colorEnInt;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				fitxer >> colorEnInt;
				m_tauler.setTauler(i, j, (ColorFigura)colorEnInt);
			}
		}
		m_figura.inicialitzaFigura((TipusFigura)tipus, fila, columna, (Gir)gir);
	}

	fitxer.close();
}

void Joc::escriuTauler(const string& nomFitxer)
{
	m_tauler.colocaFigura(m_figura);
	ofstream fitxer;

	fitxer.open(nomFitxer);

	for (int i = 0; i < MAX_FILA; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			fitxer << m_tauler.getTauler(i, j);
		}
		fitxer << endl;
	}

	fitxer.close();
}

bool Joc::giraFigura(DireccioGir const direccio)
{
	bool hagirat = m_tauler.girCorrecte(m_figura, direccio);

	if (hagirat)
	{
		m_figura.girar(direccio);
	}

	return hagirat;
}

bool Joc::mouFigura(int const dirX)
{
	bool moviment = dirX > 0;

	bool hamogut = m_tauler.movimentLateralCorrecte(m_figura, moviment);

	if (hamogut)
	{
		m_figura.moureCostat(moviment);
	}

	return hamogut;
}

int Joc::baixaFigura()
{
	int filesCompletades = 0;

	if (m_tauler.movimentVerticalCorrecte(m_figura))
	{
		m_figura.baixar();
	}

	return filesCompletades;
}