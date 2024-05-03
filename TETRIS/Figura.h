#ifndef FIGURA_H
#define FIGURA_H

typedef enum
{
    COLOR_NEGRE = 0,
    COLOR_GROC,
    COLOR_BLAUCEL,
    COLOR_MAGENTA,
    COLOR_TARONJA,
    COLOR_BLAUFOSC,
    COLOR_VERMELL,
    COLOR_VERD,
    NO_COLOR
} ColorFigura;


typedef enum
{
    NO_FIGURA = 0,
    FIGURA_O,
    FIGURA_I,
    FIGURA_T,
    FIGURA_L,
    FIGURA_J,
    FIGURA_Z,
    FIGURA_S,
} TipusFigura;

typedef enum
{
    POSICIO_0 = 0,
    POSICIO_1,
    POSICIO_2,
    POSICIO_3
} Gir;

const int MAX_ALCADA = 4;
const int MAX_AMPLADA = 4;

typedef enum
{
    GIR_HORARI = 0,
    GIR_ANTI_HORARI
} DireccioGir;


class Figura
{
public:
    Figura();

    void inicialitzaFigura(TipusFigura tipus, int fila, int columna, Gir posicio);
    void moureCostat(bool const delta);
    void baixar() { m_posX++; }
    void girar(DireccioGir const direccio);

    int getPosX() const { return m_posX; }
    int getPosY() const { return m_posY; }
    ColorFigura getColorFigura(int j, int i) const { return m_figura[j][i]; }
    int getAlcada() const { return m_alcada; }
private:
    TipusFigura m_forma;
    int m_posX;
    int m_posY;
    Gir m_posicio;
    ColorFigura m_figura[MAX_ALCADA][MAX_ALCADA];
    int m_alcada;
};

#endif