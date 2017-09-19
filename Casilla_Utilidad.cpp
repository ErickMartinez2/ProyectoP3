#include "Casilla_Utilidad.h"
#include <iostream>
using namespace std;

Casilla_Utilidad::Casilla_Utilidad(string pnombre, int pprecio, bool pdisponible): Casilla(pnombre, pprecio, pdisponible) {

}

string Casilla_Utilidad::getNombre() {
	return nombre;
}

void Casilla_Utilidad::setNombre(string pnombre) {
	nombre = pnombre;
}

bool Casilla_Utilidad::getDisponible() {
	return disponible;
}

void Casilla_Utilidad::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}
