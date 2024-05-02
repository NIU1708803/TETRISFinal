#include "Figura.h"

using namespace std;

// Figura J
const ColorFigura figura_J_pos0[4][4] = {
	{COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_J_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_J_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_J_pos3[4][4] = {
	{COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_BLAUFOSC, COLOR_BLAUFOSC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura L
const ColorFigura figura_L_pos0[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_TARONJA, COLOR_NEGRE},
	{COLOR_TARONJA, COLOR_TARONJA, COLOR_TARONJA, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_L_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_TARONJA, COLOR_TARONJA, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_L_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_TARONJA, COLOR_TARONJA, COLOR_TARONJA, COLOR_NEGRE},
	{COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_L_pos3[4][4] = {
	{COLOR_TARONJA, COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_TARONJA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura S
const ColorFigura figura_S_pos0[4][4] = {
	{COLOR_NEGRE, COLOR_VERD, COLOR_VERD, COLOR_NEGRE},
	{COLOR_VERD, COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_S_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_VERD, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERD, COLOR_VERD, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_S_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERD, COLOR_VERD, COLOR_NEGRE},
	{COLOR_VERD, COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_S_pos3[4][4] = {
	{COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_VERD, COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERD, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura Z
const ColorFigura figura_Z_pos0[4][4] = {
	{COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_Z_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_VERMELL, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_Z_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_Z_pos3[4][4] = {
	{COLOR_NEGRE, COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_VERMELL, COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_VERMELL, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura T
const ColorFigura figura_T_pos0[4][4] = {
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_MAGENTA, COLOR_MAGENTA, COLOR_MAGENTA, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_T_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_MAGENTA, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_T_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_MAGENTA, COLOR_MAGENTA, COLOR_MAGENTA, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_T_pos3[4][4] = {
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_MAGENTA, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_MAGENTA, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura I
const ColorFigura figura_I_pos0[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_GROC, COLOR_GROC, COLOR_GROC, COLOR_GROC},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_I_pos1[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE}
};

const ColorFigura figura_I_pos2[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_GROC, COLOR_GROC, COLOR_GROC, COLOR_GROC},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};

const ColorFigura figura_I_pos3[4][4] = {
	{COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_GROC, COLOR_NEGRE, COLOR_NEGRE}
};

// Figura O
const ColorFigura figura_O_pos0[4][4] = {
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE},
	{COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE, COLOR_NEGRE}
};


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
			figura[i][j] = COLOR_NEGRE;
		}
	}
}

void Figura::girar(DireccioGir direccio)
{
	switch (Forma)
	{
	case FIGURA_I:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos1[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos3[i][j];
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos2[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos0[i][j];
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos3[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos1[i][j];
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos0[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_I_pos2[i][j];
					}
				}
			}
			break;
		}
		break;

	case FIGURA_J:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_J_pos1[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_J_pos3[i][j];
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_J_pos2[i][j];
					}
				}
			}
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						figura[i][j] = figura_J_pos0[i][j];
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_J_pos3[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_J_pos1[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_J_pos0[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_J_pos2[i][j];
						}
					}
				}
			}
			break;
		}
		break;

	case FIGURA_L:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos1[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos3[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos2[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos0[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos3[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos1[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos0[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_L_pos2[i][j];
						}
					}
				}
			}
			break;
		}
		break;

	case FIGURA_S:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos1[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos3[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos2[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos0[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos3[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos1[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos0[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_S_pos2[i][j];
						}
					}
				}
			}
			break;
		}
		break;

	case FIGURA_Z:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos1[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos3[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos2[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos0[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos3[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos1[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos0[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_Z_pos2[i][j];
						}
					}
				}
			}
			break;
		}
		break;

	case FIGURA_T:
		switch (posicio)
		{
		case POSICIO_0:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos1[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos3[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_1:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos2[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos0[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_2:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos3[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos1[i][j];
						}
					}
				}
			}
			break;

		case POSICIO_3:
			if (direccio == GIR_HORARI)
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos0[i][j];
						}
					}
				}
			}
			else
			{
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							figura[i][j] = figura_T_pos2[i][j];
						}
					}
				}
			}
			break;
		}
		break;
	}

	switch (posicio)
	{
	case POSICIO_0:
		if (direccio == GIR_HORARI)
			posicio = POSICIO_1;
		else
			posicio = POSICIO_3;
		break;

	case POSICIO_1:
		if (direccio == GIR_HORARI)
			posicio = POSICIO_2;
		else
			posicio = POSICIO_0;
		break;

	case POSICIO_2:
		if (direccio == GIR_HORARI)
			posicio = POSICIO_3;
		else
			posicio = POSICIO_1;
		break;

	case POSICIO_3:
		if (direccio == GIR_HORARI)
			posicio = POSICIO_0;
		else
			posicio = POSICIO_2;
		break;
	}
}



/*
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
}*/
/*
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
}*/

void Figura::setForma(TipusFigura Figura, Gir posicio)
{
	Forma = Figura;

	switch (Forma)
	{
	case FIGURA_I:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_I_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_I_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_I_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_I_pos3[i][j];
				}
			}
			break;
		}
		break;

	case FIGURA_J:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_J_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_J_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_J_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_J_pos3[i][j];
				}
			}
			break;
		}
		break;

	case FIGURA_L:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_L_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_L_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_L_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_L_pos3[i][j];
				}
			}
			break;
		}
		break;

	case FIGURA_S:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_S_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_S_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_S_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_S_pos3[i][j];
				}
			}
			break;
		}
		break;

	case FIGURA_Z:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_Z_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_Z_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_Z_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_Z_pos3[i][j];
				}
			}
			break;
		}
		break;

	case FIGURA_T:
		switch (posicio)
		{
		case POSICIO_0:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_T_pos0[i][j];
				}
			}
			break;

		case POSICIO_1:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_T_pos1[i][j];
				}
			}
			break;

		case POSICIO_2:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_T_pos2[i][j];
				}
			}
			break;

		case POSICIO_3:
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					figura[i][j] = figura_T_pos3[i][j];
				}
			}
			break;
		}
		break;
	}

	switch (posicio)
	{
	case POSICIO_0:
		posicio = POSICIO_0;
		break;

	case POSICIO_1:
		posicio = POSICIO_1;
		break;

	case POSICIO_2:
		posicio = POSICIO_2;
		break;

	case POSICIO_3:
		posicio = POSICIO_3;
		break;
	}
}

void Figura::inicialitzaFigura(TipusFigura tipus, int fila, int columna, Gir posicio)
{
	//columna = posX
	//fila = posY

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			figura[i][j] = COLOR_NEGRE;
		}
	}

	posX = columna;
	posY = fila;

	setForma(tipus, posicio);
}

void Figura::moureCostat(bool delta)
{
	if (delta)
		posX++;
	else
		posX--;
}