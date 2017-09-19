#ifndef ARCACOMUNAL_H
#define ARCACOMUNAL_H
#include <string>
#include <iostream>
#include "Tarjeta.h"
using namespace std;

class ArcaComunal: public Tarjeta {
	public:
		ArcaComunal();
		ArcaComunal(int, string);
		virtual int getNumero();
		virtual void setNumero(int);
		virtual string getContenido();
		virtual void setContenido(string);
		friend istream& operator >> (istream&, ArcaComunal&);
};

#endif
