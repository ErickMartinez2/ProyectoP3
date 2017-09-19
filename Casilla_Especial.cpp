#include "Casilla_Especial.h"
#include <iostream>
using namespace std;

Casilla_Especial::Casilla_Especial(string pnombre, bool pdisponible): Casilla(pnombre, pdisponible) {

}

string Casilla_Especial::getNombre() {
	return nombre;
}

void Casilla_Especial::setNombre(string pnombre) {
	nombre = pnombre;
}
