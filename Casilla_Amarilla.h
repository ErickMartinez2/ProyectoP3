#ifndef CASILLA_AMARILLA_H
#define CASILLA_AMARILLA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Amarilla: public Casilla {
	public:
		Casilla_Amarilla();
		Casilla_Amarilla(string, int, int, int, bool);
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
