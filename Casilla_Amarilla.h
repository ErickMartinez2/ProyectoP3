#ifndef CASILLA_AMARILLA_H
#define CASILLA_AMARILLA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Amarilla: public Casilla {
	public:
		Casilla_Amarilla();
		Casilla_Amarilla(string, int, int, int);	
};

#endif
