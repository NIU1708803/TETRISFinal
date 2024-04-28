#include "Joc.h"
#include "Figura.h"
#include "Tauler.h"

bool Tauler::movimentLateralCorrecte(Figura figura, bool moviment)
{
	int posXBase = figura.getPosX() - 1; //situa la posición base arriba a la izquierda del todo para tenerlo como referencia en el tablero
	int posYBase = figura.getPosY() - 1;
	bool esPotMoure = true;

	if (moviment) //moviment = 0 --> esquerra, moviment = 1 --> dreta: se reajusta la posición de la figura a donde se desea que se mueva
		posXBase++;
	else
		posXBase--;

	for (int i = 0; i < 4 && esPotMoure; i++)
	{
		for (int j = 0; j < 4 && esPotMoure; j++)
		{
			if (((posXBase + j >= 0) && (posXBase + j <= 3)) && ((posYBase + i >= 0) && (posYBase + i <= 3))) //hay que comprobar si la posición a valorar se encuentra en la tabla
				if ((m_tauler[posXBase + i][posYBase + j] != NO_COLOR) && (figura.getColorFigura(j, i) != NO_COLOR))
					esPotMoure = false; //caso 1: celda de la figura dentro de la tabla y celda de la tabla ocupada --> NO SE PUEDE MOVER

			if ((((posXBase + j < 0) || (posXBase + j > 3)) || ((posYBase + i < 0) || (posYBase + i > 3))) && (figura.getColorFigura(j, i) != NO_COLOR)) //se comprueba si la celda a analizar está fuera de la tabla y contiene parte de la figura a mover
				esPotMoure = false; //caso 2: celda de la figura fuera de la tabla y celda de la figura ocupada al mismo tiempo, fuera de límite --> NO SE PUEDE MOVER
		} //ATENCIÓN: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los parámetros al revés según las consideraciones sobre las coordenadas
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

	posYBase++; //prefiero hacerlo así en vez de eliminar el "-1" de la declaración de posYBase porque lo considero más legible, ya que por cada posY++, es una posición "más baja" en la tabla 8x8 del tablero

	for (int i = 0; i < 4 && esPotMoure; i++)
	{
		for (int j = 0; j < 4 && esPotMoure; j++)
		{
			if (((posXBase + j >= 0) && (posXBase + j <= 3)) && ((posYBase + i >= 0) && (posYBase + i <= 3)))
				if ((m_tauler[posXBase + i][posYBase + j] != NO_COLOR) && (figura.getColorFigura(j, i) != NO_COLOR))
					esPotMoure = false;

			if ((((posXBase + j < 0) || (posXBase + j > 3)) || ((posYBase + i < 0) || (posYBase + i > 3))) && (figura.getColorFigura(j, i) != NO_COLOR)) //NO HACE FALTA ESTA COMPROBACIÓN YA QUE NO REALIZA MOVIMIENTOS LATERALES, PERO LA DEJO POR SI ACASO
				esPotMoure = false;
		} //ATENCIÓN: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los parámetros al revés según las consideraciones sobre las coordenadas
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
		} //ATENCIÓN: PUEDE QUE figura.getColorFigura(j, i) tenga que cambiar los parámetros al revés según las consideraciones sobre las coordenadas
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
			if (figura.getColorFigura(j, i) != NO_COLOR) //se comprueba si la celda de la figura a colocar está vacía o no, ya que no interesaría reemplazar todo el 4x4 donde se haya dicha figura por celdas vacías sobre el entorno del juego
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
	for (int i = 0; i < 8 && !esborraLinea; i++) //Primero se comprueba si hay una línea entera de celdas llenas, para ello uso una variable (recompte) que por cada línea analizada se resetea a 0. Por cada bloque analizado que contenga color se le suma 1 y, como hay 8 bloques en total por cada línea, si llega a una suma completa de 8, entonces se guarda el índice de la línea para eliminar
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

				for (int k = i; k >= 1; k--) //Se copian los bloques de arriba a abajo, empezando por abajo, justo a partir de la línea eliminada
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

				for (int i = lineaPerEsborrar; i >= 1; i--) //Se copian los bloques de arriba a abajo, empezando por abajo, justo a partir de la línea eliminada
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