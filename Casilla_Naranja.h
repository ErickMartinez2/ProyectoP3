#ifndef CASILLA_NARANJA_H
#define CASILLA_NARANJA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Naranja: public Casilla {
	public:
		Casilla_Naranja();
		Casilla_Naranja(string, int, int, int);	
};

#endif
