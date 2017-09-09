#ifndef CASILLA_ROSADA_H
#define CASILLA_ROSADA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Rosada: public Casilla {
	public:
		Casilla_Rosada();
		Casilla_Rosada(string, int, int, int);	
};

#endif
