#ifndef CASILLA_CELESTE_H
#define CASILLA_CELESTE_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Celeste: public Casilla {
	public:
		Casilla_Celeste();
		Casilla_Celeste(string, int, int, int, bool, int);	
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
