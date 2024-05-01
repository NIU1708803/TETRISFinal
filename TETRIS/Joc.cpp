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

	TipusFigura figura;
	int x, y;
	Gir posicio;
	ColorFigura color;

	fitxer >> figura;
	m_figura.setForma(figura);
	fitxer >> x;
	m_figura.setX(x);
	fitxer >> y;
	m_figura.setY(y);
	fitxer >> posicio;

	m_figura.setGir(posicio);

	for (int i = 0; i < MAX_FILA; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
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

	for (int i = 0; i < MAX_FILA; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			fitxer << m_tauler.getTauler(i, j);
		}
	}

	fitxer.close();
}

bool Joc::giraFigura(DireccioGir direccio)
{
	/*
	Com que diu penseu, no ho implementare'm encara.
	Aqui retornaria un true o false en cas ho hagi pogut girar o no.
	Per comprovar si el gir es pot dur a terme s'usaria la funció girCorrecte de Tauler.h
	Per dur a terme el gir s'usaria la funció girar de Figura.h que ja esta implementat.
	Tenint en compte tot això, aquí no s'hauria de fer un codi molt llarg, ja que només crida a altres funcions per a que realitzin la feina.
	*/

	bool hagirat;

	hagirat = m_tauler.girCorrecte(m_figura, direccio);

	if (hagirat)
	{
		m_figura.girar(direccio);
	}

	return hagirat;
}

bool Joc::mouFigura(int dirX)
{
	/*
	Lo mateix que giraFigura però amb les funcions de moure o comprovar si pot moure, res més.
	*/
	bool moviment;

	if (dirX > 0)
	{
		moviment = true;
	}
	else
	{
		moviment = false;
	}

	bool hamogut = m_tauler.movimentLateralCorrecte(m_figura, moviment);

	if (hamogut)
	{
		m_figura.moureCostat(dirX);
	}

	return hamogut;
}

int Joc::baixaFigura()
{
	/*
	Fa baixar la peça automaticament, sempre i quan ho pugui fer comprovant amb la funcio de Tauler.h, si pot la baixa amb la funcio de Figura.h
	Si comprova que no pot baixar més, hauria de bloquejar la figura i després generar una nova.
	*/
	int filesCompletades = 0;

	if (m_tauler.movimentVerticalCorrecte(m_figura) == true)
	{
		m_figura.baixar();
	}
	else
	{
		m_tauler.colocaFigura(m_figura);
		filesCompletades = m_tauler.esborraLinea();
	}

	return filesCompletades;
}

istream& operator>>(istream& input, TipusFigura& figura)
{
	int valor;
	input >> valor;
	figura = TipusFigura(valor);
	return input;

}

istream& operator>>(istream& input, Gir& posicio)
{
	int valor;
	input >> valor;
	posicio = Gir(valor);
	return input;
}

istream& operator>>(istream& input, ColorFigura& color)
{
	int valor;
	input >> valor;
	color = ColorFigura(valor);
	return input;
}
