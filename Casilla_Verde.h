#ifndef CASILLA_VERDE_H
#define CASILLA_VERDE_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Verde: public Casilla {
	public:
		Casilla_Verde();
		Casilla_Verde(string, int, int, int, bool, int);
		virtual string getNombre();
		virtual void setNombre(string);
		virtual int getAlquiler();
		virtual void setAlquiler(int);
		virtual int getPrecio();
		virtual void setPrecio(int);
		virtual bool getDisponible();
		virtual void setDisponible(bool);
		virtual vector<Casa*> getCasas();
		virtual void setCasas(vector<Casa*>);
};

#endif
