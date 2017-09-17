#include "Tarjeta.h"

Tarjeta::Tarjeta() {

}

Tarjeta::Tarjeta(int pnumero, string pcontenido) {
	numero = pnumero;
	contenido = pcontenido;
}

int Tarjeta::getNumero() {
	return numero;
}

void Tarjeta::setNumero(int pnumero) {
	numero = pnumero;
}

string Tarjeta::getContenido() {
	return contenido;
}

void Tarjeta::setContenido(string pcontenido) {
	contenido = pcontenido;
}

