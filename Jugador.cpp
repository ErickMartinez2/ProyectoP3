#include "Jugador.h"

Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, char pficha, int pposicion, int pdinero) {
	nombre = pnombre;
	ficha = pficha;
	posicion = pposicion;
	dinero = pdinero;
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

int Jugador::getDinero() {
	return dinero;
}

void Jugador::setDinero(int pdinero) {
	dinero = pdinero;
}
