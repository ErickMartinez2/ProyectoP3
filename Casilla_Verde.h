#ifndef CASILLA_VERDE_H
#define CASILLA_VERDE_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Verde: public Casilla {
	public:
		Casilla_Verde();
		Casilla_Verde(string, int, int, int);	
};

#endif
