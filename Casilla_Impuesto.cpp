#include "Casilla_Impuesto.h"
#include <iostream>
using namespace std;

Casilla_Impuesto::Casilla_Impuesto(string pnombre, int palquiler, bool pdisponible): Casilla(pnombre, palquiler, pdisponible) {

}

string Casilla_Impuesto::getNombre() {
	return nombre;
}

void Casilla_Impuesto::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Impuesto::getAlquiler() {
	return alquiler;
}

void Casilla_Impuesto::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

