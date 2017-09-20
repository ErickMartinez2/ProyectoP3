#include "Casilla_Verde.h"
#include <iostream>
using namespace std;

Casilla_Verde::Casilla_Verde(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible, int pnumero): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible, pnumero) {

}

string Casilla_Verde::getNombre() {
	return nombre;
}

void Casilla_Verde::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Verde::getAlquiler() {
	return alquiler;
}

void Casilla_Verde::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Verde::getPrecio() {
	return precio;
}

void Casilla_Verde::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Verde::getDisponible() {
	return disponible;
}

void Casilla_Verde::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Verde::getCasas() {
	return casas;
}

void Casilla_Verde::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
