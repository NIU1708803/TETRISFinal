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

    void inicialitzaFigura();
    void moureCostat(int delta) { posX = posX + delta; }
    void baixar() { posY++; }
    void girar(DireccioGir direccio);
    TipusFigura getForma() { return Forma; }


    void setForma(TipusFigura Figura) { Forma = Figura; }
    void setX(int x) { posX = x; }
    void setY(int y) { posY = y; }
    void setGir(Gir p) { posicio = p; }
    int getPosX() { return posX; }
    int getPosY() { return posY; }
    ColorFigura getColorFigura(int j, int i) { return figura[j][i]; }
private:
    TipusFigura Forma;
    int posX; //POS FIGURA
    int posY;
    Gir posicio;
    ColorFigura figura[MAX_ALCADA][MAX_ALCADA];
};

#endif
