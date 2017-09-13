#ifndef CASILLA_AZUL_H
#define CASILLA_AZUL_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Azul: public Casilla {
	public:
		Casilla_Azul();
		Casilla_Azul(string, int, int, int, bool);	
};

#endif
