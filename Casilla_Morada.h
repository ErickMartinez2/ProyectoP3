#ifndef CASILLA_MORADA_H
#define CASILLA_MORADA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Morada: public Casilla {
	public:
		Casilla_Morada();
		Casilla_Morada(string, int, int, int);	
};

#endif
