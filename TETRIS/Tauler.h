#ifndef TAULER_H
#define TAULER_H
#include <iostream>
#include "Figura.h"

const int MAX_FILA = 8;
const int MAX_COL = 8;

class Tauler
{
public:
	Tauler();
	bool girCorrecte(Figura const figura, DireccioGir const gir) const;
	bool movimentLateralCorrecte(Figura const figura, bool const moviment) const;
	bool movimentVerticalCorrecte(Figura const figura) const;
	void colocaFigura(Figura const figura);
	int esborraLinea();
	void setTauler(int fila, int columna, ColorFigura color) { m_tauler[fila][columna] = color; }
	ColorFigura getTauler(int const i, int const j) const { return m_tauler[i][j]; }
private:
	ColorFigura m_tauler[MAX_FILA][MAX_COL];
};
#endif