#include "Jugador.h"

Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, char pficha, int pposicion) {
	nombre = pnombre;
	ficha = pficha;
	posicion = pposicion;
}

string Jugador::getNombre() {
	return nombre;
}

void Jugador::setNombre(string pnombre) {
	nombre = pnombre;
}

char Jugador::getFicha() {
	return ficha;
}

void Jugador::setFicha(char pficha) {
	ficha = pficha;
}

int Jugador::getPosicion() {
	return posicion;
}

void Jugador::setPosicion(int pposicion) {
	posicion = pposicion;
}
