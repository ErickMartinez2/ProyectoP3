#ifndef CASILLA_AZUL_H
#define CASILLA_AZUL_H
#include <iostream>
#include <string>
#include "Casilla.h"
using namespace std;

class Casilla_Azul: public Casilla {
	public:
		Casilla_Azul();
		Casilla_Azul(string, int, int, int, bool, int);	
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
