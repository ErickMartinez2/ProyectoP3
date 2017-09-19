#ifndef CASILLA_ROSADA_H
#define CASILLA_ROSADA_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Rosada: public Casilla {
	public:
		Casilla_Rosada();
		Casilla_Rosada(string, int, int, int, bool);
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
