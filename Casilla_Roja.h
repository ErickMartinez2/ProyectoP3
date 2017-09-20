#ifndef CASILLA_ROJA_H
#define CASILLA_ROJA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Roja: public Casilla {
	public:
		Casilla_Roja();
		Casilla_Roja(string, int, int, int, bool, int);
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
