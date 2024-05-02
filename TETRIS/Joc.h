#ifndef JOC_H
#define JOC_H
#include <string>
#include "Tauler.h"
#include "Figura.h"
using namespace std;

class Joc
{
public:
	Joc();
	void inicialitza(const string& nomFitxer);
	bool giraFigura(DireccioGir direccio);
	bool mouFigura(int dirX);
	int baixaFigura();
	void escriuTauler(const string& nomFitxer);

	Figura getFigura() { return m_figura; }

private:
	Tauler m_tauler;
	Figura m_figura;
};

/*
istream& operator>>(istream& input, TipusFigura& figura);
istream& operator>>(istream& input, Gir& posicio);
istream& operator>>(istream& input, ColorFigura& color);

*/
#endif