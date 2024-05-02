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
		TipusFigura figura;
		Gir posicio;

		fitxer >> tipus;
		fitxer >> fila; //fila = posY
		fitxer >> columna; // columna = posX
		fitxer >> gir;

		switch (tipus)
		{
		case 1:
			figura = FIGURA_O;
			break;

		case 2:
			figura = FIGURA_I;
			break;

		case 3:
			figura = FIGURA_T;
			break;

		case 4:
			figura = FIGURA_L;
			break;

		case 5:
			figura = FIGURA_J;
			break;

		case 6:
			figura = FIGURA_Z;
			break;

		case 7:
			figura = FIGURA_S;
			break;
		}

		switch (gir)
		{
		case 0:
			posicio = POSICIO_0;
			break;

		case 1:
			posicio = POSICIO_1;
			break;

		case 2:
			posicio = POSICIO_2;
			break;

		case 3:
			posicio = POSICIO_3;
			break;
		}

		int colorEnInt;
		ColorFigura colorActual;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				fitxer >> colorEnInt;

				switch (colorEnInt)
				{
				case 0:
					colorActual = COLOR_NEGRE;
					break;
				case 1:
					colorActual = COLOR_GROC;
					break;
				case 2:
					colorActual = COLOR_BLAUCEL;
					break;
				case 3:
					colorActual = COLOR_MAGENTA;
					break;
				case 4:
					colorActual = COLOR_TARONJA;
					break;
				case 5:
					colorActual = COLOR_BLAUFOSC;
					break;
				case 6:
					colorActual = COLOR_VERMELL;
					break;
				case 7:
					colorActual = COLOR_VERD;
					break;
				default:
					colorActual = NO_COLOR;
					break;
				}

				m_tauler.setTauler(i, j, colorActual);
			}
		}
		m_figura.inicialitzaFigura(figura, fila, columna, posicio);

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
	bool moviment = true;;

	if (dirX > 0)
	{
		moviment = true;
	}
	else
	{
		moviment = false;
	}

	bool hamogut;
	hamogut = m_tauler.movimentLateralCorrecte(m_figura, moviment);

	if (hamogut)
	{
		m_figura.moureCostat(moviment);
	}

	m_tauler.colocaFigura(m_figura);

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
		m_tauler.colocaFigura(m_figura);
	}
	else
	{
		m_tauler.colocaFigura(m_figura);
		filesCompletades = m_tauler.esborraLinea();
	}

	return filesCompletades;
}
/*
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
*/
