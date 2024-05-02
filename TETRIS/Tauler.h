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
	bool girCorrecte(Figura figura, DireccioGir gir);
	bool movimentLateralCorrecte(Figura figura, bool moviment); //moviment = 0 --> esquerra, moviment = 1 --> dreta
	bool movimentVerticalCorrecte(Figura figura); //único movimiento vertical posible --> abajo
	void colocaFigura(Figura figura);
	int esborraLinea();
	ColorFigura getColorFigura(const int x, const int y) { return m_tauler[x][y]; }

	void setTauler(int fila, int columna, ColorFigura color)
	{
		m_tauler[fila][columna] = color;
	}
	ColorFigura getTauler(int i, int j) { return m_tauler[i][j]; }
private:
	ColorFigura m_tauler[MAX_FILA][MAX_COL];
};
#endif
