#include "Casilla_Naranja.h"
#include <iostream>
using namespace std;

Casilla_Naranja::Casilla_Naranja(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible) {

}

string Casilla_Naranja::getNombre() {
	return nombre;
}

void Casilla_Naranja::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Naranja::getAlquiler() {
	return alquiler;
}

void Casilla_Naranja::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Naranja::getPrecio() {
	return precio;
}

void Casilla_Naranja::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Naranja::getDisponible() {
	return disponible;
}

void Casilla_Naranja::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Naranja::getCasas() {
	return casas;
}

void Casilla_Naranja::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
