#ifndef CASILLA_UTILIDAD_H
#define CASILLA_UTILIDAD_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Utilidad: public Casilla {
	public:
		Casilla_Utilidad();
		Casilla_Utilidad(string, int, bool);	
};

#endif
