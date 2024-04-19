#include <iostream>
#include "Tauler.h"

using namespace std;

typedef enum
{
	GIR_HORARI = 0,
	GIR_ANTI_HORARI
} DireccioGir;

typedef enum
{
	POSICIO_0 = 0,
	POSICIO_1,
	POSICIO_2,
	POSICIO_3
} Gir;

class Joc
{
public:
	Joc();
	void inicialitza(const string& nomFitxer);
	bool giraFigura(DireccioGir direccio);
	bool mouFigura(int dirX);
	int baixaFigura();
	void escriuTauler(const string& nomFitxer);

private:
	Tauler m_tauler;
	Figura m_figura;
};
