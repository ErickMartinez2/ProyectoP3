#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
#include <string>
using namespace std;

class Tarjeta {
	protected:
		int numero;
		string contenido;
	public:
		Tarjeta();
		Tarjeta(int, string);
		virtual int getNumero() = 0;
		virtual void setNumero(int) = 0;
		virtual string getContenido() = 0;
		virtual void setContenido(string) = 0;
};

#endif
