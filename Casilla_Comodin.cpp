#include "Casilla_Comodin.h"
#include <iostream>
using namespace std;

Casilla_Comodin::Casilla_Comodin(string pnombre, bool pdisponible, int pnumero): Casilla(pnombre, pdisponible, pnumero) {
	
}

string Casilla_Comodin::getNombre() {
	return nombre;
}

void Casilla_Comodin::setNombre(string pnombre) {
	nombre = pnombre;
}


