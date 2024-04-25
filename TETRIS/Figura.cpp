#include "Figura.h"

using namespace std;

/*
void Figura::girar(ColorFigura tauler[N_FILES][N_COLUMNES], DireccioGir direccio)
{
	if (Forma == FIGURA_I)
	{
		for (int i = posY - 1; i <= posY + 2; i++)
		{
			for (int j = posX - 2; j <= posX + 1; j++)
			{
				ColorFigura temp = tauler[i][j];
				tauler[i][j] = tauler[j][i];
				tauler[j][i] = temp;
			}
		}

		if (direccio == GIR_HORARI)
		{
			for (int i = posY - 1; i <= posY + 2; i++)
			{
				for (int j = posX - 2; j <= posX + 1; j++)
				{
					ColorFigura temp = tauler[i][j];
					tauler[i][j] = tauler[i][posX + (posX - j)];
					tauler[i][posX + (posX - j)] = temp;
				}
			}
			if (posicio == POSICIO_3)
			{
				posicio = POSICIO_0;
			}
			else
			{
				if (posicio == POSICIO_2)
				{
					posicio = POSICIO_3;
				}
				else
				{
					if (posicio == POSICIO_1)
					{
						posicio = POSICIO_2;
					}
					else
						posicio = POSICIO_1;
				}
			}
		}
		else
		{
			for (int i = posY - 1; i <= posY + 2; i++)
			{
				for (int j = posX - 2; j <= posX + 1; j++)
				{
					ColorFigura temp = tauler[i][j];
					tauler[i][j] = tauler[posY + (posY - i)][j];
					tauler[posY + (posY - i)][j] = temp;
				}
			}
			if (posicio == POSICIO_3)
			{
				posicio = POSICIO_2;
			}
			else
			{
				if (posicio == POSICIO_2)
				{
					posicio = POSICIO_1;
				}
				else
				{
					if (posicio == POSICIO_1)
					{
						posicio = POSICIO_0;
					}
					else
						posicio = POSICIO_3;
				}
			}
		}
	}
	else
		if (Forma != FIGURA_O)
		{
			for (int i = posY - 1; i <= posY + 1; i++)
			{
				for (int j = posX - 1; j <= posX + 1; j++)
				{
					ColorFigura temp = tauler[i][j];
					tauler[i][j] = tauler[j][i];
					tauler[j][i] = temp;
				}
			}

			if (direccio == GIR_HORARI)
			{
				for (int i = posY - 1; i <= posY + 1; i++)
				{
					for (int j = posX - 1; j <= posX + 1; j++)
					{
						ColorFigura temp = tauler[i][j];
						tauler[i][j] = tauler[i][posX + (posX - j)];
						tauler[i][posX + (posX - j)] = temp;
					}
				}
				if (posicio == POSICIO_3)
				{
					posicio = POSICIO_0;
				}
				else
				{
					if (posicio == POSICIO_2)
					{
						posicio = POSICIO_3;
					}
					else
					{
						if (posicio == POSICIO_1)
						{
							posicio = POSICIO_2;
						}
						else
							posicio = POSICIO_1;
					}
				}
			}
			}
			else
			{
				for (int i = posY - 1; i <= posY + 1; i++)
				{
					for (int j = posX - 1; j <= posX + 1; j++)
					{
						ColorFigura temp = tauler[i][j];
						tauler[i][j] = tauler[posY + (posY - i)][j];
						tauler[posY + (posY - i)][j] = temp;
					}
				}
				if (posicio == POSICIO_3)
				{
					posicio = POSICIO_2;
				}
				else
				{
					if (posicio == POSICIO_2)
					{
						posicio = POSICIO_1;
					}
					else
					{
						if (posicio == POSICIO_1)
						{
							posicio = POSICIO_0;
						}
						else
							posicio = POSICIO_3;
					}
				}
			}
}
*/

void Figura::girar(DireccioGir direccio)
{
	if (Forma == FIGURA_I)
	{
		for (int i = posY - 1; i <= posY + 2; i++)
		{
			for (int j = posX - 1; j <= posX + 2; j++)
			{
				ColorFigura temp = figura[i][j];
				figura[i][j] = figura[j][i];
				figura[j][i] = temp;
			}
		}

		if (direccio == GIR_HORARI)
		{
			for (int i = posY - 1; i <= posY + 2; i++)
			{
				for (int j = posX - 1; j <= posX + 2; j++)
				{
					ColorFigura temp = figura[i][j];
					figura[i][j] = figura[i][posX + (posX - j)];
					figura[i][posX + (posX - j)] = temp;
				}
			}
			if (posicio == POSICIO_3)
			{
				posicio = POSICIO_0;
			}
			else
			{
				if (posicio == POSICIO_2)
				{
					posicio = POSICIO_3;
				}
				else
				{
					if (posicio == POSICIO_1)
					{
						posicio = POSICIO_2;
					}
					else
						posicio = POSICIO_1;
				}
			}
		}
		else
		{
			for (int i = posY - 1; i <= posY + 2; i++)
			{
				for (int j = posX - 1; j <= posX + 2; j++)
				{
					ColorFigura temp = figura[i][j];
					figura[i][j] = figura[posY + (posY - i)][j];
					figura[posY + (posY - i)][j] = temp;
				}
			}
			if (posicio == POSICIO_3)
			{
				posicio = POSICIO_2;
			}
			else
			{
				if (posicio == POSICIO_2)
				{
					posicio = POSICIO_1;
				}
				else
				{
					if (posicio == POSICIO_1)
					{
						posicio = POSICIO_0;
					}
					else
						posicio = POSICIO_3;
				}
			}
		}
	}
	else
		if (Forma != FIGURA_O)
		{
			for (int i = posY - 1; i <= posY + 1; i++)
			{
				for (int j = posX - 1; j <= posX + 1; j++)
				{
					ColorFigura temp = figura[i][j];
					figura[i][j] = figura[j][i];
					figura[j][i] = temp;
				}
			}

			if (direccio == GIR_HORARI)
			{
				for (int i = posY - 1; i <= posY + 1; i++)
				{
					for (int j = posX - 1; j <= posX + 1; j++)
					{
						ColorFigura temp = figura[i][j];
						figura[i][j] = figura[i][posX + (posX - j)];
						figura[i][posX + (posX - j)] = temp;
					}
				}
				if (posicio == POSICIO_3)
				{
					posicio = POSICIO_0;
				}
				else
				{
					if (posicio == POSICIO_2)
					{
						posicio = POSICIO_3;
					}
					else
					{
						if (posicio == POSICIO_1)
						{
							posicio = POSICIO_2;
						}
						else
							posicio = POSICIO_1;
					}
				}
			}
		}
		else
		{
			for (int i = posY - 1; i <= posY + 1; i++)
			{
				for (int j = posX - 1; j <= posX + 1; j++)
				{
					ColorFigura temp = figura[i][j];
					figura[i][j] = figura[posY + (posY - i)][j];
					figura[posY + (posY - i)][j] = temp;
				}
			}
			if (posicio == POSICIO_3)
			{
				posicio = POSICIO_2;
			}
			else
			{
				if (posicio == POSICIO_2)
				{
					posicio = POSICIO_1;
				}
				else
				{
					if (posicio == POSICIO_1)
					{
						posicio = POSICIO_0;
					}
					else
						posicio = POSICIO_3;
				}
			}
		}
}

/*
void Figura::baixar(ColorFigura tauler[N_FILES][N_COLUMNES])
{
	bool potBaixar = true;
	switch (Forma)
	{

	case FIGURA_J:
	case FIGURA_L:
	case FIGURA_S:
	case FIGURA_T:
	case FIGURA_Z:
		if (posicio == POSICIO_0)
		{
			for (int i = posX - 1; i <= posX + 1 && potBaixar; i++)
			{
				if ((tauler[i][posY] != NO_COLOR) && (tauler[i][posY + 1] != NO_COLOR)) //ÚNICAMENTE OCUPAN LAS ÚLTIMAS CELDAS LAS POSICIONES 1, 2 Y 3
				{
					potBaixar = false;
				}
			}
		}
		else if (posicio == POSICIO_1 || posicio == POSICIO_2 || posicio == POSICIO_3)
		{
			for (int i = posX - 1; i <= posX + 1 && potBaixar; i++)
			{
				if ((tauler[i][posY + 1] != NO_COLOR) && (tauler[i][posY + 2] != NO_COLOR)) //SI EN ALGUNA POSICIÓN DE ABAJO DEL TODO DE LA FIGURA HAY UN CUADRADO, Y JUSTO DEBAJO DE ESE CUADRADO HAY OTRO, ENTONCES NO PUEDE BAJAR. posY + 1 y posY + 2 porque ocupa la última parte del 3x3 
				{
					potBaixar = false;
				}
			}
		}

		if (potBaixar && posicio == POSICIO_0)//NO SÉ SI LO AUTOMATIZARÉ LUEGO, DE MOMENTO LO DEJO ASÍ. MUEVE EL ESTADO DE LA CELDA SUPERIOR A LA INFERIOR EN ORDEN DE "ABAJO" A "ARRIBA"
		{
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)
				tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX - 1][posY] = tauler[posX - 1][posY - 1];
			if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY] = tauler[posX][posY - 1];
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX + 1][posY] = tauler[posX + 1][posY - 1];
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX - 1][posY - 1] = NO_COLOR;
			if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY - 1] = NO_COLOR;
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX + 1][posY - 1] = NO_COLOR;
		}
		else if (potBaixar && posicio == POSICIO_1) //EN ESTE CASO, COMO SE OCUPAN LAS ÚLTIMAS CELDAS DE BLOQUE, HACE FALTA COPIAR EL ESTADO DE LOS BLOQUES SUPERIORES A LOS QUE SE ENCUENTRAN POR DEBAJO DE LOS ÚLTIMOS BLOQUES DE LA FIGURA
		{
			//tauler[posX - 1][posY + 2] = tauler[posX - 1][posY + 1];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY + 2] = tauler[posX][posY + 1];
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX + 1][posY + 2] = tauler[posX + 1][posY + 1];
			//tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			//tauler[posX - 1][posY] = tauler[posX - 1][posY - 1];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)
				tauler[posX][posY] = tauler[posX][posY - 1];
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX + 1][posY] = tauler[posX + 1][posY - 1];
			//tauler[posX - 1][posY - 1] = NO_COLOR;
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)
				tauler[posX][posY - 1] = NO_COLOR;
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX + 1][posY - 1] = NO_COLOR;
		}
		else if (potBaixar && posicio == POSICIO_2)
		{
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX - 1][posY + 2] = tauler[posX - 1][posY + 1];
			if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY + 2] = tauler[posX][posY + 1];
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX + 1][posY + 2] = tauler[posX + 1][posY + 1];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_Z)
				tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)
				tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_Z)
				tauler[posX - 1][posY] = NO_COLOR;
			tauler[posX][posY] = NO_COLOR;
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)
				tauler[posX + 1][posY] = tauler[posX + 1][posY - 1];
			//tauler[posX - 1][posY - 1] = NO_COLOR;
			//tauler[posX][posY - 1] = NO_COLOR;
			//tauler[posX + 1][posY - 1] = NO_COLOR;
		}
		else if (potBaixar && posicio == POSICIO_3)
		{
			if (Forma == FIGURA_J || Forma == FIGURA_Z)
				tauler[posX - 1][posY + 2] = tauler[posX - 1][posY + 1];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_T)//
				tauler[posX][posY + 2] = tauler[posX][posY + 1];
			//tauler[posX + 1][posY + 2] = tauler[posX + 1][posY + 1];
			if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			//tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX - 1][posY] = tauler[posX - 1][posY - 1];
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY] = tauler[posX][posY - 1];
			//tauler[posX + 1][posY] = tauler[posX + 1][posY - 1];
			if (Forma == FIGURA_L || Forma == FIGURA_S)
				tauler[posX - 1][posY - 1] = NO_COLOR;
			if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_T || Forma == FIGURA_Z)
				tauler[posX][posY - 1] = NO_COLOR;
			//tauler[posX + 1][posY - 1] = NO_COLOR;
		}
		break;

	case FIGURA_I:
		if (posicio == POSICIO_0)
		{
			for (int i = posX - 2; i <= posX + 1 && potBaixar; i++)
			{
				if ((tauler[i][posY] != NO_COLOR) && (tauler[i][posY + 1] != NO_COLOR))
				{
					potBaixar = false;
				}
			}
		}
		else if (posicio = POSICIO_1)
		{
			for (int i = posX - 2; i <= posX + 1 && potBaixar; i++)
			{
				if ((tauler[i][posY + 1] != NO_COLOR) && (tauler[i][posY + 2] != NO_COLOR)) //EN ESTE CASO ES posY + 1 y posY + 2 PORQUE OCUPAN EL ÚLTIMO ESPACIO DE CUADRADOS
				{
					potBaixar = false;
				}
			}
		}
		else if (posicio == POSICIO_2)
		{
			for (int i = posX - 1; i <= posX + 2 && potBaixar; i++)
			{
				if ((tauler[i][posY] != NO_COLOR) && (tauler[i][posY + 1] != NO_COLOR)) //VUELVE A SER ÚNICAMENTE posY + 1 PORQUE SOLO COMPROBAMOS LA FILA SIGUIENTE A posY
				{
					potBaixar = false;
				}
			}
		}
		else if (posicio == POSICIO_3)
		{
			for (int i = posX - 1; i <= posX + 2 && potBaixar; i++)
			{
				if ((tauler[i + 2][posY] != NO_COLOR) && (tauler[i][posY + 3] != NO_COLOR)) //TENIENDO EN CUENTA QUE NOS UBICAMOS DOS BLOQUES SUPERIOR RESPECTO AL BLOQUE DONDE DESEAMOS DESPLAZAR LA FIGURA, COMPROBAMOS SI JUSTO DEBAJO DE LA ÚLTIMA FILA HAY ESPACIO LIBRE PARA COLOCAR LA FIGURA EN SÍ
				{
					potBaixar = false;
				}
			}
		}

		if (potBaixar && posicio == POSICIO_0) //SE MUEVE LA FIGURA EN FORMA DE - UNA POSICIÓN INFERIOR
		{
			tauler[posX - 2][posY + 1] = tauler[posX - 2][posY]; //#### FALTA REFINAR, MUEVE AHORA MISMO TODOS LOS BLOQUES QUE SE INCLUYEN EN LA CELDA !!!! ####
			tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			tauler[posX - 2][posY] = NO_COLOR;
			tauler[posX - 1][posY] = NO_COLOR;
			tauler[posX][posY] = NO_COLOR;
			tauler[posX + 1][posY] = NO_COLOR;
		}
		else if (potBaixar && posicio == POSICIO_1)
		{
			tauler[posX][posY + 2] = tauler[posX][posY + 1];
			tauler[posX][posY + 1] = tauler[posX][posY];
			tauler[posX][posY] = tauler[posX][posY - 1];
			tauler[posX][posY - 1] = tauler[posX][posY - 2];
			tauler[posX][posY - 2] = NO_COLOR;

		}
		else if (potBaixar && posicio == POSICIO_2)
		{
			tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			tauler[posX + 1][posY + 1] = tauler[posX + 1][posY];
			tauler[posX + 2][posY + 1] = tauler[posX + 2][posY];//
			tauler[posX - 1][posY] = NO_COLOR;
			tauler[posX][posY] = NO_COLOR;
			tauler[posX + 1][posY] = NO_COLOR;
			tauler[posX + 2][posY] = NO_COLOR;
		}
		else if (posicio == POSICIO_3)
		{
			tauler[posX][posY + 3] = tauler[posX][posY + 2];
			tauler[posX][posY + 2] = tauler[posX][posY + 1];
			tauler[posX][posY + 1] = tauler[posX][posY];
			tauler[posX][posY] = tauler[posX][posY - 1];
			tauler[posX][posY - 1] = NO_COLOR;
		}

		break;

	case FIGURA_O:
		for (int i = posX - 1; i <= posX && potBaixar; i++)
		{
			if (tauler[i][posY + 2 != NO_COLOR]) //SI EN ALGUNA POSICIÓN DE ABAJO DEL TODO DE LA FIGURA HAY UN CUADRADO, Y JUSTO DEBAJO DE ESE CUADRADO HAY OTRO, ENTONCES NO PUEDE BAJAR. posY + 1 y posY + 2 porque ocupa la última parte del 3x3 
			{
				potBaixar = false;
			}
		}

		if (potBaixar)
		{
			tauler[posX - 1][posY + 2] = tauler[posX - 1][posY + 1];
			tauler[posX][posY + 2] = tauler[posX][posY + 1];
			tauler[posX - 1][posY + 1] = tauler[posX - 1][posY];
			tauler[posX][posY + 1] = tauler[posX][posY];
			tauler[posX - 1][posY] = NO_COLOR;
			tauler[posX][posY] = NO_COLOR;
		}
		break;
	}

	if (potBaixar)
		posY++;
}
*/
/*
void Figura::moureCostat(int delta, ColorFigura tauler[N_FILES][N_COLUMNES])
{
	switch (delta)
	{
	case 0: //DERECHA
		if (Forma != FIGURA_I && Forma != FIGURA_O)
		{
			switch (posicio)
			{
			case POSICIO_0:
				if (Forma == FIGURA_L || Forma == FIGURA_S)
				{
					tauler[posX + 2][posY - 1] == tauler[posX + 1][posY - 1];
					tauler[posX + 1][posY - 1] = NO_COLOR;
				}
				if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_T || Forma == FIGURA_Z)
				{
					tauler[posX + 2][posY] == tauler[posX + 1][posY];
					tauler[posX + 1][posY] = NO_COLOR;
				}
				if (Forma == FIGURA_S || Forma == FIGURA_T || Forma == FIGURA_Z)
				{
					tauler[posX + 1][posY - 1] == tauler[posX][posY - 1];
					tauler[posX][posY - 1] = NO_COLOR;
				}
				tauler[posX + 1][posY] == tauler[posX][posY];
				tauler[posX][posY] = NO_COLOR;
				if (Forma == FIGURA_J || Forma == FIGURA_Z)
				{
					tauler[posX][posY - 1] == tauler[posX - 1][posY - 1];
					tauler[posX - 1][posY - 1] = NO_COLOR;
				}
				if (Forma == FIGURA_J || Forma == FIGURA_L || Forma == FIGURA_S || Forma == FIGURA_Z)
				{
					tauler[posX][posY] == tauler[posX - 1][posY];
					tauler[posX - 1][posY] = NO_COLOR;
				}

				break;

			case POSICIO_1:
				break;

			case POSICIO_2:
				break;

			case POSICIO_3:
				break;
			}
		}
		break;

	case 1: //IZQUIERDA

		break;
	}

}

void Figura::moureCostat(int delta, ColorFigura tauler[N_FILES][N_COLUMNES])
{

	switch(delta)
	{
		case 0: //dreta
			if (Figura != FIGURA_I && Forma != FIGURA_O)
			{
				if (Posicio != POSICIO_1 && !(Figura == FIGURA_L && Posicio == POSICIO_3)) //LA POSICIÓN 3 DE LA FIGURA L PODRÍA ARRASTRAR UN CUADRADO NO DESEADO (PARTE DEL ESCENARIO) JUSTO ABAJO A LA IZQUIERDA DEL TODO
				{
					for (int i = 2; i < 0; i++) //COMPRUEBA SI HAY "COLOR" EN ALGUNA CELDA EMPEZANDO POR EL PUNTO DE ARRIBA A LA IZQUIERDA DEL TODO Y, SI LO HAY, MUEVE EL CONTENIDO DEL CUADRADO UNA POSICIÓN A LA IZQUIERDA Y BORRA EL CONTENIDO DEL CUADRADO ANTERIORMENTE OCUPADO
					{
						for (int j = 2; j > 0; j++)
						{
							if (tauler[(posX - 1) + j][(posY - 1) + i] != NO_COLOR)
							{
								tauler[(posX - 1) + j + 1][(posY - 1) + i] = tauler[(posX - 1) + j][(posY - 1) + i];
								tauler[(posX - 1) + j][(posY - 1) + i] = NO_COLOR;
							}
						}
					}
				} else if (Posicio == POSICIO_1)
				{
					for (int i = 0; i < 3; i++) //HAY QUE DISTINGUIR ENTRE DIFERENTES FORMAS QUE PUEDEN OBTENER LAS FIGURAS, YA QUE NO QUEREMOS ARRASTRAR A LA DERECHA OTRAS FIGURAS DEL ESCENARIO, SINO LA QUE ESTAMOS MANEJANDO EL MOMENTO
					{
						for (int j = 0; j < 2; j++)
						{
							if (tauler[(posX) + j][(posY - 1) + i] != NO_COLOR)
							{
								tauler[(posX) + j + 1][(posY - 1) + i] = tauler[(posX) + j][(posY - 1) + i];
								tauler[(posX) + j][(posY - 1) + i] = NO_COLOR;
							}
						}
					}
				}
				else
				{
					for (int i = 0; i < 3; i++) //HAY QUE DISTINGUIR ENTRE DIFERENTES FORMAS QUE PUEDEN OBTENER LAS FIGURAS, YA QUE NO QUEREMOS ARRASTRAR A LA DERECHA OTRAS FIGURAS DEL ESCENARIO, SINO LA QUE ESTAMOS MANEJANDO EL MOMENTO
					{
						for (int j = 0; j < 3; j++))
						{
							if (tauler[(posX) + j][(posY - 1) + i] != NO_COLOR && !(i == 2 && j ==0) //IMPORTANTE!!! NO QUEREMOS ARRASTRAR LA POSICIÓN DE ABAJO A LA IZQUIERDA DEL TODO DE LA FIGURA L EN LA POSICIÓN 3, PODRÍA MOVER UN CUADRADO DEL ESCENARIO YA PRESENTE
							{
								tauler[(posX) + j + 1][(posY - 1) + i] = tauler[(posX) + j][(posY - 1) + i];
								tauler[(posX) + j][(posY - 1) + i] = NO_COLOR;
							}
						}
					}
				}

			} else if (Figura == FIGURA_I) //SE DISTINGUEN ENTRE CASOS EN QUE LA FIGURA ESTÁ DE UN MODO U OTRO PORQUE EL "CENTRO" DE LAS COORDENADAS NO ES EL MISMO EN TODOS LOS CASOS DE LA FIGURA I
			{
				if (Posicio == POSICIO_0)
				{
				for (int j = 0; j < 4; j++) //SOLO HAY CUADRADOS EN UNA MISMA posY
					{
						if (tauler[(posX - 2) + j][(posY)] != NO_COLOR)
						{
							tauler[(posX - 2) + j + 1][(posY)] = tauler[(posX - 2) + j][(posY)];
							tauler[(posX - 2) + j][(posY)] = NO_COLOR;
						}
					}
				} else if(Posicio == POSICIO_1)
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 2; j++)
						{
							if (tauler[(posX) + j][(posY - 2) + i] != NO_COLOR)
							{
								tauler[(posX) + j + 1][(posY - 2) + i] = tauler[(posX) + j][(posY - 2) + i];
								tauler[(posX) + j][(posY - 2) + i] = NO_COLOR;
							}
						}
					}
				} else if (Posicio == POSICIO_2)
				{
					for (int j = 0; j < 4; j++)
					{
						if (tauler[(posX - 1) + j][(posY)] != NO_COLOR)
						{
							tauler[(posX - 1) + j + 1][(posY)] = tauler[(posX - 1) + j][(posY)];
							tauler[(posX - 1) + j][(posY)] = NO_COLOR;
						}
					}
				} else
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 2; j++)
						{
							if (tauler[(posX) + j][(posY - 1) + i] != NO_COLOR)
							{
								tauler[(posX) + j + 1][(posY - 1) + i] = tauler[(posX) + j][(posY - 1) + i];
								tauler[(posX) + j][(posY - 1) + i] = NO_COLOR;
							}
						}
					}
				}
			} else if (Figura == FIGURA_O)
			{
				for (int i = 0; i < 2; i++)
					{
						for (int j = 0; j < 2; j++)
						{
							tauler[(posX) + j + 1][(posY) + i] = tauler[(posX) + j][(posY) + i];
							tauler[(posX) + j][(posY) + i] = NO_COLOR;

						}
					}
			}

			posX++;
		break;

		case 1: //esquerra
		if (Figura != FIGURA_I)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						if (tauler[(posX - 1) + j][(posY - 1) + i] != NO_COLOR)
						{
							tauler[(posX - 1) + j - 1][(posY - 1) + i] = tauler[(posX - 1) + j][(posY - 1) + i];
							tauler[(posX - 1) + j][(posY - 1) + i] = NO_COLOR;
						}
					}
				}
			}

		posX--;
		break;
	}
	
}
*/

void Figura::inicialitzaFigura()
{
	//[X][Y]
	switch (Forma)
	{
	case FIGURA_O:
		figura[1][1] = COLOR_GROC;
		figura[1][2] = COLOR_GROC;
		figura[2][1] = COLOR_GROC;
		figura[2][2] = COLOR_GROC;

		break;

	case FIGURA_I:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < MAX_FIGURA; i++)
			{
				figura[i][1] = COLOR_BLAUCEL;
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < MAX_FIGURA; i++)
			{
				figura[2][i] = COLOR_BLAUCEL;
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < MAX_FIGURA; i++)
			{
				figura[i][2] = COLOR_BLAUCEL;
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < MAX_FIGURA; i++)
			{
				figura[1][i] = COLOR_BLAUCEL;
			}
		}
		break;

	case FIGURA_T:
		switch (posicio)
		{
		case POSICIO_0:
			figura[0][1] = COLOR_MAGENTA;
			figura[1][0] = COLOR_MAGENTA;
			figura[1][1] = COLOR_MAGENTA;
			figura[2][1] = COLOR_MAGENTA;
			break;

		case POSICIO_1:
			figura[1][2] = COLOR_MAGENTA;
			figura[1][0] = COLOR_MAGENTA;
			figura[1][1] = COLOR_MAGENTA;
			figura[2][1] = COLOR_MAGENTA;
			break;

		case POSICIO_2:
			figura[2][2] = COLOR_MAGENTA;
			figura[0][1] = COLOR_MAGENTA;
			figura[1][1] = COLOR_MAGENTA;
			figura[2][1] = COLOR_MAGENTA;
			break;

		case POSICIO_3:
			figura[1][2] = COLOR_MAGENTA;
			figura[1][0] = COLOR_MAGENTA;
			figura[1][1] = COLOR_MAGENTA;
			figura[0][1] = COLOR_MAGENTA;
			break;
		}
		break;

	case FIGURA_L:
		switch (posicio)
		{
		case POSICIO_0:
			figura[0][1] = COLOR_TARONJA;
			figura[1][1] = COLOR_TARONJA;
			figura[2][0] = COLOR_TARONJA;
			figura[2][1] = COLOR_TARONJA;
			break;

		case POSICIO_1:
			figura[1][0] = COLOR_TARONJA;
			figura[1][1] = COLOR_TARONJA;
			figura[1][2] = COLOR_TARONJA;
			figura[2][2] = COLOR_TARONJA;
			break;

		case POSICIO_2:
			figura[0][1] = COLOR_TARONJA;
			figura[1][1] = COLOR_TARONJA;
			figura[2][1] = COLOR_TARONJA;
			figura[0][2] = COLOR_TARONJA;
			break;

		case POSICIO_3:
			figura[0][0] = COLOR_TARONJA;
			figura[1][0] = COLOR_TARONJA;
			figura[1][1] = COLOR_TARONJA;
			figura[1][2] = COLOR_TARONJA;
			break;
		}
		break;

	case FIGURA_J:
		switch (posicio)
		{
		case POSICIO_0:
			figura[0][0] = COLOR_BLAUFOSC;
			figura[0][1] = COLOR_BLAUFOSC;
			figura[1][1] = COLOR_BLAUFOSC;
			figura[2][1] = COLOR_BLAUFOSC;
			break;

		case POSICIO_1:
			figura[1][0] = COLOR_BLAUFOSC;
			figura[2][0] = COLOR_BLAUFOSC;
			figura[1][1] = COLOR_BLAUFOSC;
			figura[1][2] = COLOR_BLAUFOSC;
			break;

		case POSICIO_2:
			figura[0][1] = COLOR_BLAUFOSC;
			figura[1][1] = COLOR_BLAUFOSC;
			figura[2][1] = COLOR_BLAUFOSC;
			figura[2][2] = COLOR_BLAUFOSC;
			break;

		case POSICIO_3:
			figura[1][0] = COLOR_BLAUFOSC;
			figura[1][1] = COLOR_BLAUFOSC;
			figura[1][2] = COLOR_BLAUFOSC;
			figura[0][2] = COLOR_BLAUFOSC;
			break;
		}
		break;

	case FIGURA_Z:
		switch (posicio)
		{
		case POSICIO_0:
			figura[0][0] = COLOR_VERMELL;
			figura[1][0] = COLOR_VERMELL;
			figura[1][1] = COLOR_VERMELL;
			figura[2][1] = COLOR_VERMELL;
			break;

		case POSICIO_1:
			figura[2][0] = COLOR_VERMELL;
			figura[2][1] = COLOR_VERMELL;
			figura[1][1] = COLOR_VERMELL;
			figura[1][2] = COLOR_VERMELL;
			break;

		case POSICIO_2:
			figura[0][1] = COLOR_VERMELL;
			figura[1][1] = COLOR_VERMELL;
			figura[1][2] = COLOR_VERMELL;
			figura[2][2] = COLOR_VERMELL;
			break;

		case POSICIO_3:
			figura[1][0] = COLOR_VERMELL;
			figura[1][1] = COLOR_VERMELL;
			figura[0][1] = COLOR_VERMELL;
			figura[0][2] = COLOR_VERMELL;
			break;
		}
		break;

	case FIGURA_S:
		switch (posicio)
		{
		case POSICIO_0:
			figura[0][1] = COLOR_VERD;
			figura[1][0] = COLOR_VERD;
			figura[1][1] = COLOR_VERD;
			figura[2][0] = COLOR_VERD;
			break;

		case POSICIO_1:
			figura[1][0] = COLOR_VERD;
			figura[1][1] = COLOR_VERD;
			figura[1][2] = COLOR_VERD;
			figura[2][2] = COLOR_VERD;
			break;

		case POSICIO_2:
			figura[0][2] = COLOR_VERD;
			figura[1][1] = COLOR_VERD;
			figura[1][2] = COLOR_VERD;
			figura[2][1] = COLOR_VERD;
			break;

		case POSICIO_3:
			figura[0][0] = COLOR_VERD;
			figura[0][1] = COLOR_VERD;
			figura[1][1] = COLOR_VERD;
			figura[1][2] = COLOR_VERD;
			break;
		}
		break;

	}
}

istream& operator>>(istream& input, TipusFigura figura)
{
	input >> figura;
	return input;
}

istream& operator>>(istream& input, Gir& posicio)
{
	input >> posicio;

	return input;
}

istream& operator>>(istream& input, ColorFigura color)
{
	input >> color;

	return input;
}
