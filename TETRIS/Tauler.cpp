#include "Tauler.h"

Tauler::Tauler()
{
	for (int i = 0; i < MAX_FILA; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			m_tauler[i][j] == COLOR_NEGRE;
		}
	}
}

bool Tauler::movimentLateralCorrecte(Figura const figura, bool const moviment) const
{
	bool esPotMoure = true;

	Figura figuraTemp = figura;

	figuraTemp.moureCostat(moviment);

	int posXBase = figuraTemp.getPosX();
	int posYBase = figuraTemp.getPosY();

	int i = 0;
	int j = 0;

	while (i < figuraTemp.getAlcada() && esPotMoure)
	{
		while (j < figuraTemp.getAlcada() && esPotMoure)
		{
			if (figuraTemp.getColorFigura(i, j) != COLOR_NEGRE)
			{
				if ((posYBase + j < 0 || posYBase + j >= MAX_FILA) || (posXBase + i < 0 || posXBase + i >= MAX_COL))
				{
					esPotMoure = false;
				}
				if ((posYBase + j >= 0 && posYBase + j < MAX_FILA) && (posXBase + i >= 0 && posXBase + i < MAX_COL))
					if (m_tauler[posXBase + i][posYBase + j] != COLOR_NEGRE)
						esPotMoure = false;
			}
			j++;
		}
		i++;
		j = 0;
	}

	return esPotMoure;
}

bool Tauler::movimentVerticalCorrecte(Figura const figura) const
{
	bool esPotMoure = true;

	Figura figuraTemp = figura;

	figuraTemp.baixar();

	int posXTemp = figuraTemp.getPosX();
	int posYTemp = figuraTemp.getPosY();

	int i = 0;
	int j = 0;

	while (i < figuraTemp.getAlcada() && esPotMoure)
	{
		while (j < figuraTemp.getAlcada() && esPotMoure)
		{
			if (figuraTemp.getColorFigura(i, j) != COLOR_NEGRE)
			{
				if (m_tauler[posXTemp + i][posYTemp + j] != COLOR_NEGRE || posYTemp + j < 0 || posYTemp + j >= MAX_FILA)
				{
					esPotMoure = false;
				}
			}
			j++;
		}
		i++;
		j = 0;
	}

	return esPotMoure;
}

bool Tauler::girCorrecte(Figura const figura, DireccioGir const gir) const
{
	bool esPotGirar = true;

	Figura figuraTemp = figura;

	figuraTemp.girar(gir);

	int posXBase = figuraTemp.getPosX();
	int posYBase = figuraTemp.getPosY();

	int i = 0;
	int j = 0;

	while (i < figuraTemp.getAlcada() && esPotGirar)
	{
		while (j < figuraTemp.getAlcada() && esPotGirar)
		{
			if (figuraTemp.getColorFigura(i, j) != COLOR_NEGRE)
			{
				if ((posYBase + j < 0 || posYBase + j >= MAX_FILA) || (posXBase + i < 0 || posXBase + i >= MAX_COL))
				{
					esPotGirar = false;
				}
				if ((posYBase + j >= 0 && posYBase + j < MAX_FILA) && (posXBase + i >= 0 && posXBase + i < MAX_COL))
					if (m_tauler[posXBase + i][posYBase + j] != COLOR_NEGRE)
						esPotGirar = false;
			}
			j++;
		}
		i++;
		j = 0;
	}

	return esPotGirar;
}

void Tauler::colocaFigura(Figura const figura)
{
	int posXBase = figura.getPosX();
	int posYBase = figura.getPosY();
	for (int i = 0; i < figura.getAlcada(); i++)
	{
		for (int j = 0; j < figura.getAlcada(); j++)
		{
			if (figura.getColorFigura(i, j) != COLOR_NEGRE)
				m_tauler[posXBase + i][posYBase + j] = figura.getColorFigura(i, j);
		}
	}

	esborraLinea();
}

int Tauler::esborraLinea()
{
	int lineasPerEsborrar = 0;

	for (int i = 0; i < 8; i++)
	{
		bool filaCompleta = true;

		for (int j = 0; j < 8; j++)
		{
			if (m_tauler[i][j] == COLOR_NEGRE)
			{
				filaCompleta = false;
				break;
			}
		}

		if (filaCompleta)
		{
			lineasPerEsborrar++;

			for (int k = 0; k < 8; k++)
			{
				m_tauler[i][k] = COLOR_NEGRE;
			}

			for (int k = i; k > 0; k--)
			{
				for (int j = 0; j < 8; j++)
				{
					m_tauler[k][j] = m_tauler[k - 1][j];
				}
			}

			for (int j = 0; j < 8; j++)
			{
				m_tauler[0][j] = COLOR_NEGRE;
			}
		}
	}

	bool ultimaFilaLlena = true;
	for (int j = 0; j < 8; j++)
	{
		if (m_tauler[7][j] == COLOR_NEGRE)
		{
			ultimaFilaLlena = false;
			break;
		}
	}

	if (ultimaFilaLlena)
	{
		for (int i = 6; i >= 0; i--)
		{
			for (int j = 0; j < 8; j++)
			{
				m_tauler[i + 1][j] = m_tauler[i][j];
			}
		}

		for (int j = 0; j < 8; j++)
		{
			m_tauler[0][j] = COLOR_NEGRE;
		}
	}

	return lineasPerEsborrar;
}