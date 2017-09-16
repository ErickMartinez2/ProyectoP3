#include "Jugador.h"

Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, char pficha, int pposicion, int pdinero, bool pcarcel, int pturno_carcel) {
	nombre = pnombre;
	ficha = pficha;
	posicion = pposicion;
	dinero = pdinero;
	carcel = pcarcel;
	turno_carcel = pturno_carcel;
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

vector<Casilla*> Jugador::getPropiedades() {
	return propiedades;
}

void Jugador::setPropiedades(vector<Casilla*> ppropiedades) {
	propiedades = ppropiedades;
}

bool Jugador::getCarcel() {
	return carcel;
}

void Jugador::setCarcel(bool pcarcel) {
	carcel = pcarcel;
}

int Jugador::getTurnoCarcel() {
	return turno_carcel;
}

void Jugador::setTurnoCarcel(int pturno_carcel) {
	turno_carcel = pturno_carcel;
}

