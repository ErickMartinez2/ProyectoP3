#include "Casilla_Amarilla.h"
#include <iostream>
using namespace std;

Casilla_Amarilla::Casilla_Amarilla(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible, int pnumero): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible, pnumero) {

}

string Casilla_Amarilla::getNombre() {
	return nombre;
}

void Casilla_Amarilla::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Amarilla::getAlquiler() {
	return alquiler;
}

void Casilla_Amarilla::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Amarilla::getPrecio() {
	return precio;
}

void Casilla_Amarilla::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Amarilla::getDisponible() {
	return disponible;
}

void Casilla_Amarilla::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Amarilla::getCasas() {
	return casas;
}

void Casilla_Amarilla::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
