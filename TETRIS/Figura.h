#include <iostream>
#include "Joc.h"

using namespace std;

typedef enum
{
	NO_FIGURA = 0,
	FIGURA_O,
	FIGURA_I,
	FIGURA_T,
	FIGURA_L,
	FIGURA_J,
	FIGURA_Z,
	FIGURA_S
} TipusFigura;

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

class Figura
{
public:
	Figura();

	void moureCostat(int delta, ColorFigura tauler[N_FILES][N_COLUMNES]);
	void baixar(ColorFigura tauler[N_FILES][N_COLUMNES]);
	void girar(DireccioGir direccio);
	TipusFigura getForma() { return Forma; }

	void setForma(TipusFigura Figura) { Forma = Figura; }
	void setX(int x) { posX = x; }
	void setY(int y) { posY = y; }
	void setGir(Gir p) { posicio = p; }
private:
	TipusFigura Forma;
	int posX; //POS FIGURA
	int posY;
	Gir posicio;
	ColorFigura figura[4][4];

};

istream& operator>>(istream& input, TipusFigura figura);
istream& operator>>(istream& input, Gir& posicio);
istream& operator>>(istream& input, ColorFigura color);