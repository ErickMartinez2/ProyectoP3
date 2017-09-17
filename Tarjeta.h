#ifndef TARJETA_H
#define TARJETA_H
#include <string>
using namespace std;

class Tarjeta {
	private:
		int numero;
		string contenido;
	public:
		Tarjeta();
		Tarjeta(int, string);
		int getNumero();
		void setNumero(int);
		string getContenido();
		void setContenido(string);
};

#endif
