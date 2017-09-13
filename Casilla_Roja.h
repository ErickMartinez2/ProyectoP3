#ifndef CASILLA_ROJA_H
#define CASILLA_ROJA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Roja: public Casilla {
	public:
		Casilla_Roja();
		Casilla_Roja(string, int, int, int, bool);	
};

#endif
