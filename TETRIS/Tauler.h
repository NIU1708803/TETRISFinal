#include <iostream>

#define N_FILES 8
#define N_COLUMNES 8
using namespace std;

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

	void setTauler(int i, int j, ColorFigura color) { m_tauler[i][j] = color; }
	ColorFigura getTauler(int i, int j) { return m_tauler[i][j]; }
private:
	ColorFigura m_tauler[N_FILES][N_COLUMNES];
};