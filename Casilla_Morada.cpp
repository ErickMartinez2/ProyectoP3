#include "Casilla_Morada.h"
#include <iostream>
using namespace std;

Casilla_Morada::Casilla_Morada(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible, int pnumero): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible, pnumero) {

}

string Casilla_Morada::getNombre() {
	return nombre;
}

void Casilla_Morada::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Morada::getAlquiler() {
	return alquiler;
}

void Casilla_Morada::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Morada::getPrecio() {
	return precio;
}

void Casilla_Morada::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Morada::getDisponible() {
	return disponible;
}

void Casilla_Morada::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Morada::getCasas() {
	return casas;
}

void Casilla_Morada::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
