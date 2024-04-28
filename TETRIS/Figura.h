#include <iostream>
#include "Joc.h"

using namespace std;

#define MAX_FIGURA 4

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
	ColorFigura figura[MAX_FIGURA][MAX_FIGURA];

};

istream& operator>>(istream& input, TipusFigura figura);
istream& operator>>(istream& input, Gir& posicio);
istream& operator>>(istream& input, ColorFigura color);