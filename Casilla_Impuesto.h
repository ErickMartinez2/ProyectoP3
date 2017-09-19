#ifndef CASILLA_IMPUESTO_H
#define CASILLA_IMPUESTO_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Impuesto: public Casilla {
	public:
		Casilla_Impuesto();
		Casilla_Impuesto(string, int, bool);
		virtual string getNombre();
		virtual void setNombre(string);
		virtual int getAlquiler();
		virtual void setAlquiler(int);
};

#endif
