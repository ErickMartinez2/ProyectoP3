#include "Casualidad.h"

Casualidad::Casualidad() {

}

Casualidad::Casualidad(int pnumero, string pcontenido): Tarjeta(pnumero, pcontenido) {

}

int Casualidad::getNumero() {
	return numero;
}

void Casualidad::setNumero(int pnumero) {
	numero = pnumero;
}

string Casualidad::getContenido() {
	return contenido;
}

void Casualidad::setContenido(string pcontenido) {
	contenido = pcontenido;
}

istream& operator >> (istream& in, Casualidad& casualidad) {
	int numero;
	string contenido;
	in >> numero;
	in >> contenido;
	string contenido1 = "";
	for (int i = 0; i < contenido.size(); i++) {
		if (contenido[i] != '_') {
			contenido1 += contenido[i];
		} else {
			contenido1 += ' ';
		}
	}
	casualidad.setNumero(numero);
	casualidad.setContenido(contenido1);
	return in;
}
