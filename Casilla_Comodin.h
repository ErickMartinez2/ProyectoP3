#ifndef CASILLA_COMODIN_H
#define CASILLA_COMODIN_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Comodin: public Casilla {
	public:
		Casilla_Comodin();
		Casilla_Comodin(string, bool);
};

#endif
