#include "Figura.h"
#include <iostream>

using namespace std;

Figura::Figura()
{
    m_forma = NO_FIGURA;
    m_posX = -1;
    m_posY = -1;
    m_posicio = POSICIO_0;
    for (int i = 0; i < MAX_ALCADA; i++)
    {
        for (int j = 0; j < MAX_ALCADA; j++)
        {
            m_figura[i][j] = COLOR_NEGRE;
        }
    }
}

void Figura::inicialitzaFigura(TipusFigura tipus, int fila, int columna, Gir posicio)
{

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            m_figura[i][j] = COLOR_NEGRE;

    switch (tipus)
    {
    case FIGURA_O:
        m_alcada = 2;
        m_figura[0][0] = m_figura[1][1] = m_figura[0][1] = m_figura[1][0] = COLOR_GROC;
        m_forma = FIGURA_O;
        break;
    case FIGURA_I:
        m_alcada = 4;
        for (int i = 0; i < m_alcada; i++)
            m_figura[1][i] = COLOR_BLAUCEL;
        m_forma = FIGURA_I;
        break;
    case FIGURA_T:
        m_alcada = 3;
        m_figura[0][1] = m_figura[1][0] = m_figura[1][1] = m_figura[1][2] = COLOR_MAGENTA;
        m_forma = FIGURA_T;
        break;
    case FIGURA_L:
        m_alcada = 3;
        m_figura[1][0] = m_figura[1][1] = m_figura[0][2] = m_figura[1][2] = COLOR_TARONJA;
        m_forma = FIGURA_L;
        break;
    case FIGURA_J:
        m_alcada = 3;
        m_figura[0][0] = m_figura[1][0] = m_figura[1][1] = m_figura[1][2] = COLOR_BLAUFOSC;
        m_forma = FIGURA_J;
        break;
    case FIGURA_Z:
        m_alcada = 3;
        m_figura[0][0] = m_figura[0][1] = m_figura[1][1] = m_figura[1][2] = COLOR_VERMELL;
        m_forma = FIGURA_Z;
        break;
    case FIGURA_S:
        m_alcada = 3;
        m_figura[0][1] = m_figura[1][0] = m_figura[1][1] = m_figura[0][2] = COLOR_VERD;
        m_forma = FIGURA_S;
        break;
    }

    if (m_forma == FIGURA_I && (posicio == POSICIO_1 || posicio == POSICIO_2))
    {
        m_posX = fila - 2;
        m_posY = fila + 4;
    }
    else
    {
        m_posX = fila - 1;
        m_posY = columna - 1;
    }

    if (posicio != POSICIO_0)
    {
        switch (posicio)
        {
        case POSICIO_1:
            girar(GIR_HORARI);
            break;
        case POSICIO_2:
            girar(GIR_HORARI);
            girar(GIR_HORARI);
            break;
        case POSICIO_3:
            girar(GIR_ANTI_HORARI);
            break;
        }
    }
}

void Figura::moureCostat(bool const delta)
{
    if (delta)
        m_posY++;
    else
        m_posY--;
}

void Figura::girar(DireccioGir const direccio)
{
    ColorFigura colorTemp;
    for (int i = 0; i < m_alcada; i++)
    {
        for (int j = i + 1; j < m_alcada; j++)
        {
            colorTemp = m_figura[i][j];
            m_figura[i][j] = m_figura[j][i];
            m_figura[j][i] = colorTemp;
        }
    }

    if (direccio == GIR_HORARI)
    {
        for (int i = 0; i < m_alcada; i++)
        {
            for (int j = 0; j < m_alcada / 2; j++)
            {
                colorTemp = m_figura[i][j];
                m_figura[i][j] = m_figura[i][m_alcada - j - 1];
                m_figura[i][m_alcada - j - 1] = colorTemp;
            }
        }
    }
    else
    {
        for (int i = 0; i < m_alcada / 2; i++)
        {
            for (int j = 0; j < m_alcada; j++)
            {
                colorTemp = m_figura[i][j];
                m_figura[i][j] = m_figura[m_alcada - 1 - i][j];
                m_figura[m_alcada - 1 - i][j] = colorTemp;
            }
        }
    }
}