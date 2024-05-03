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
	bool giraFigura(DireccioGir const direccio);
	bool mouFigura(int const dirX);
	int baixaFigura();
	void escriuTauler(const string& nomFitxer);

private:
	Tauler m_tauler;
	Figura m_figura;
};

#endif