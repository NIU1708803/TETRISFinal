#include "Joc.h"
#include "Figura.h"
#include "Tauler.h"

bool Tauler::movimentLateralCorrecte(Figura figura, bool moviment)
{
	int posXBase = figura.getPosX() - 1; //situa la posici�n base arriba a la izquierda del todo para tenerlo como referencia en el tablero
	int posYBase = figura.getPosY() - 1;
	bool esPotMoure = true;

	if (moviment) //moviment = 0 --> esquerra, moviment = 1 --> dreta: se reajusta la posici�n de la figura a donde se desea que se mueva
		posXBase++;
	else
		posXBase--;

	for (int i = 0; i < 4 && esPotMoure; i++)
	{
		for (int j = 0; j < 4 && esPotMoure; j++)
		{
			if (((posXBase + j >= 0) && (posXBase + j <= 3)) && ((posYBase + i >= 0) && (posYBase + i <= 3))) //hay que comprobar si la posici�n a valorar se encuentra en la tabla
				if ((m_tauler[posXBase + i][posYBase + j] != NO_COLOR) && (figura.getColorFigura(j, i) != NO_COLOR))
					esPotMoure = false; //caso 1: celda de la figura dentro de la tabla y celda de la tabla ocupada --> NO SE PUEDE MOVER

			if ((((posXBase + j < 0) || (posXBase + j > 3)) || ((posYBase + i < 0) || (posYBase + i > 3))) && (figura.getColorFigura(j, i) != NO_COLOR)) //se comprueba si la celda a analizar est� fuera de la tabla y contiene parte de la figura a mover
				esPotMoure = false; //caso 2: celda de la figura fuera de la tabla y celda de la figura ocupada al mismo tiempo, fuera de l�mite --> NO SE PUEDE MOVER
		} //ATENCI�N: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los par�metros al rev�s seg�n las consideraciones sobre las coordenadas
	}

	if (esPotMoure)
		return true;
	else
		return false;
}

bool Tauler::movimentVerticalCorrecte(Figura figura)
{
	int posXBase = figura.getPosX() - 1;
	int posYBase = figura.getPosY() - 1;
	bool esPotMoure = true;

	posYBase++; //prefiero hacerlo as� en vez de eliminar el "-1" de la declaraci�n de posYBase porque lo considero m�s legible, ya que por cada posY++, es una posici�n "m�s baja" en la tabla 8x8 del tablero

	for (int i = 0; i < 4 && esPotMoure; i++)
	{
		for (int j = 0; j < 4 && esPotMoure; j++)
		{
			if (((posXBase + j >= 0) && (posXBase + j <= 3)) && ((posYBase + i >= 0) && (posYBase + i <= 3)))
				if ((m_tauler[posXBase + i][posYBase + j] != NO_COLOR) && (figura.getColorFigura(j, i) != NO_COLOR))
					esPotMoure = false;

			if ((((posXBase + j < 0) || (posXBase + j > 3)) || ((posYBase + i < 0) || (posYBase + i > 3))) && (figura.getColorFigura(j, i) != NO_COLOR)) //NO HACE FALTA ESTA COMPROBACI�N YA QUE NO REALIZA MOVIMIENTOS LATERALES, PERO LA DEJO POR SI ACASO
				esPotMoure = false;
		} //ATENCI�N: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los par�metros al rev�s seg�n las consideraciones sobre las coordenadas
	}

	if (esPotMoure)
		return true;
	else
		return false;
}

bool Tauler::girCorrecte(Figura figura, DireccioGir gir)
{
	figura.girar(gir);

	int posXBase = figura.getPosX() - 1;
	int posYBase = figura.getPosY() - 1;
	bool esPotGirar = true;


	for (int i = 0; i < 4 && esPotGirar; i++)
	{
		for (int j = 0; j < 4 && esPotGirar; j++)
		{
			if (((posXBase + j >= 0) && (posXBase + j <= 3)) && ((posYBase + i >= 0) && (posYBase + i <= 3)))
				if ((m_tauler[posXBase + i][posYBase + j] != NO_COLOR) && (figura.getColorFigura(j, i) != NO_COLOR))
					esPotGirar = false;

			if ((((posXBase + j < 0) || (posXBase + j > 3)) || ((posYBase + i < 0) || (posYBase + i > 3))) && (figura.getColorFigura(j, i) != NO_COLOR))
				esPotGirar = false;
		} //ATENCI�N: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los par�metros al rev�s seg�n las consideraciones sobre las coordenadas
	}

	if (esPotGirar)
		return true;
	else
		return false;
}

void Tauler::colocaFigura(Figura figura)
{
	int posXBase = figura.getPosX() - 1;
	int posYBase = figura.getPosY() - 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (figura.getColorFigura(j, i) != NO_COLOR) //se comprueba si la celda de la figura a colocar est� vac�a o no, ya que no interesar�a reemplazar todo el 4x4 donde se haya dicha figura por celdas vac�as sobre el entorno del juego
				m_tauler[posXBase + j][posYBase + i] = figura.getColorFigura(j, i);
		}
	}

	esborraLinea();
}

int Tauler::esborraLinea()
{
	bool esborraLinea = false;
	int lineasPerEsborrar = 0;
	int recompte = 0;
	for (int i = 0; i < 8 && !esborraLinea; i++) //Primero se comprueba si hay una l�nea entera de celdas llenas, para ello uso una variable (recompte) que por cada l�nea analizada se resetea a 0. Por cada bloque analizado que contenga color se le suma 1 y, como hay 8 bloques en total por cada l�nea, si llega a una suma completa de 8, entonces se guarda el �ndice de la l�nea para eliminar
	{
		recompte = 0;
		for (int j = 0; j < 8 && !esborraLinea; j++)
		{
			if (m_tauler[i][j] != NO_COLOR)
				recompte++;
			if (recompte == 8)
			{
				lineasPerEsborrar++;
				for (int k = 0; k < 8; k++) //Se eliminan todos los bloques de color de una fila entera (lineaPerEsborrar)
				{
					m_tauler[i][k] == NO_COLOR;
				}

				for (int k = i; k >= 1; k--) //Se copian los bloques de arriba a abajo, empezando por abajo, justo a partir de la l�nea eliminada
				{
					for (int j = 0; j < 8; j++)
					{
						m_tauler[k][j] == m_tauler[k - 1][j];
					}
				}
			}
		}

		/*
			if (esborraLinea)
			{
				for (int i = 0; i < 8; i++) //Se eliminan todos los bloques de color de una fila entera (lineaPerEsborrar)
				{
					m_tauler[lineaPerEsborrar][i] == NO_COLOR;
				}

				for (int i = lineaPerEsborrar; i >= 1; i--) //Se copian los bloques de arriba a abajo, empezando por abajo, justo a partir de la l�nea eliminada
				{
					for (int j = 0; j < 8; j++)
					{
						m_tauler[i][j] == m_tauler[i - 1][j];
					}
				}
			}
		*/
	}
	return lineasPerEsborrar;
}