#include "Casilla_Comodin.h"
#include <iostream>
using namespace std;

Casilla_Comodin::Casilla_Comodin(string pnombre, bool pdisponible): Casilla(pnombre, pdisponible) {
	
}

string Casilla_Comodin::getNombre() {
	return nombre;
}

void Casilla_Comodin::setNombre(string pnombre) {
	nombre = pnombre;
}


