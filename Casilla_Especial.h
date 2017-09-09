#ifndef CASILLA_ESPECIAL_H
#define CASILLA_ESPECIAL_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Especial: public Casilla {
	public:
		Casilla_Especial();
		Casilla_Especial(string);	
};

#endif
