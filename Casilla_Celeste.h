#ifndef CASILLA_CELESTE_H
#define CASILLA_CELESTE_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Celeste: public Casilla {
	public:
		Casilla_Celeste();
		Casilla_Celeste(string, int, int, int);	
};

#endif
