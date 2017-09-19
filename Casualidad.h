#ifndef CASUALIDAD_H
#define CASUALIDAD_H
#include <string>
#include <iostream>
#include "Tarjeta.h"
using namespace std;

class Casualidad: public Tarjeta {
	public:
		Casualidad();
		Casualidad(int, string);
		virtual int getNumero();
		virtual void setNumero(int);
		virtual string getContenido();
		virtual void setContenido(string);
		friend istream& operator >> (istream&, Casualidad&);
};

#endif
