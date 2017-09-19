#include "ArcaComunal.h"

ArcaComunal::ArcaComunal() {

}

ArcaComunal::ArcaComunal(int pnumero, string pcontenido): Tarjeta(pnumero, pcontenido) {

}

int ArcaComunal::getNumero() {
	return numero;
}

void ArcaComunal::setNumero(int pnumero) {
	numero = pnumero;
}

string ArcaComunal::getContenido() {
	return contenido;
}

void ArcaComunal::setContenido(string pcontenido) {
	contenido = pcontenido;
}

istream& operator >> (istream& in, ArcaComunal& arcacomunal) {
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
	arcacomunal.setNumero(numero);
	arcacomunal.setContenido(contenido1);
	return in;
}
