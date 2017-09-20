#include "Casilla_Rosada.h"
#include <iostream>
using namespace std;

Casilla_Rosada::Casilla_Rosada(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible, int pnumero): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible, pnumero) {

}

string Casilla_Rosada::getNombre() {
	return nombre;
}

void Casilla_Rosada::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Rosada::getAlquiler() {
	return alquiler;
}

void Casilla_Rosada::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Rosada::getPrecio() {
	return precio;
}

void Casilla_Rosada::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Rosada::getDisponible() {
	return disponible;
}

void Casilla_Rosada::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Rosada::getCasas() {
	return casas;
}

void Casilla_Rosada::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
