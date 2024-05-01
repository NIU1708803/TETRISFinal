#include "Figura.h"

using namespace std;

Figura::Figura()
{
	Forma = NO_FIGURA;
	posX = -1;
	posY = -1;
	posicio = POSICIO_0;
	for (int i = 0; i < MAX_ALCADA; i++)
	{
		for (int j = 0; j < MAX_ALCADA; j++)
		{
			figura[i][j] = NO_COLOR;
		}
	}
}

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
			for (int i = 0; i < MAX_ALCADA; i++)
			{
				figura[i][1] = COLOR_BLAUCEL;
			}
			posX = 1;
			posY = 1;
			break;

		case POSICIO_1:
			for (int i = 0; i < MAX_ALCADA; i++)
			{
				figura[2][i] = COLOR_BLAUCEL;
			}
			posX = 1;
			posY = 1;
			break;

		case POSICIO_2:
			for (int i = 0; i < MAX_ALCADA; i++)
			{
				figura[i][2] = COLOR_BLAUCEL;
			}
			posX = 1;
			posY = 1;
			break;

		case POSICIO_3:
			for (int i = 0; i < MAX_ALCADA; i++)
			{
				figura[1][i] = COLOR_BLAUCEL;
			}
			posX = 1;
			posY = 1;
			break;
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

