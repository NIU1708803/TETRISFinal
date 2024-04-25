#include <iostream>
#include <fstream>
#include "Joc.h"
#include "Figura.h"

using namespace std;

Joc::Joc()
{
	for (int i = 0; i < N_FILES; i++)
	{
		for (int j = 0; j < N_COLUMNES; j++)
		{
			m_tauler.setTauler(i, j, COLOR_NEGRE);
		}
	}
}

void Joc::inicialitza(const string& nomFitxer)
{
	ifstream fitxer;

	fitxer.open(nomFitxer);

	TipusFigura figura;
	int x, y;
	Gir posicio;
	ColorFigura color;

	fitxer >> figura;
	fitxer >> x;
	fitxer >> y;
	fitxer >> posicio;

	m_figura.setForma(figura);
	m_figura.setX(x);
	m_figura.setY(y);
	m_figura.setGir(posicio);

		for (int i = 0; i < N_FILES; i++)
		{
			for (int j = 0; j < N_COLUMNES; j++)
			{
				fitxer >> color;

				m_tauler.setTauler(i, j, color);
			}
		}

		fitxer.close();

		m_figura.inicialitzaFigura();
}

void Joc::escriuTauler(const string& nomFitxer)
{
	ofstream fitxer;

	fitxer.open(nomFitxer);

	for (int i = 0; i < N_FILES; i++)
	{
		for (int j = 0; j < N_COLUMNES; j++)
		{
			fitxer << m_tauler.getTauler(i, j);
		}
	}

	fitxer.close();
}

bool giraFigura(DireccioGir direccio)
{
	/*
	Com que diu penseu, no ho implementare'm encara. 
	Aqui retornaria un true o false en cas ho hagi pogut girar o no.
	Per comprovar si el gir es pot dur a terme s'usaria la funció girCorrecte de Tauler.h
	Per dur a terme el gir s'usaria la funció girar de Figura.h que ja esta implementat.
	Tenint en compte tot això, aquí no s'hauria de fer un codi molt llarg, ja que només crida a altres funcions per a que realitzin la feina.
	*/
}

bool mouFigura(int dirX)
{
	/*
	Lo mateix que giraFigura però amb les funcions de moure o comprovar si pot moure, res més.
	*/
}

int baixaFigura()
{
	/*
	Fa baixar la peça automaticament, sempre i quan ho pugui fer comprovant amb la funcio de Tauler.h, si pot la baixa amb la funcio de Figura.h
	Si comprova que no pot baixar més, hauria de bloquejar la figura i després generar una nova.
	*/
}
