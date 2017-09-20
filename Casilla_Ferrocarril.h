#ifndef CASILLA_FERROCARRIL_H
#define CASILLA_FERROCARRIL_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Ferrocarril: public Casilla {
	public:
		Casilla_Ferrocarril();
		Casilla_Ferrocarril(string, int, int, int, int, int, bool, int);
		virtual string getNombre();
		virtual void setNombre(string);
		virtual int getAlquiler();
		virtual void setAlquiler(int);
		virtual int getPrecio();
		virtual void setPrecio(int);
		virtual bool getDisponible();
		virtual void setDisponible(bool);
};

#endif
