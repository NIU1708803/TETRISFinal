#include <iostream>

#define N_FILES 8
#define N_COLUMNES 8
using namespace std;

class Tauler
{
public:
	Tauler();
	bool girCorrecte(ColorFigura m_tauler);
	bool movimentCorrecte(ColorFigura m_tauler);
	bool colocaFigura(ColorFigura m_tauler);
	bool esborraLinea(ColorFigura m_tauler);

	void setTauler(int i, int j, ColorFigura color) { m_tauler[i][j] = color; }
	ColorFigura getTauler(int i, int j) { return m_tauler[i][j]; }
private:
	ColorFigura m_tauler[N_FILES][N_COLUMNES];
};
