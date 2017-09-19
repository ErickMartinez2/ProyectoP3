#include "Casilla_Celeste.h"
#include <iostream>
using namespace std;

Casilla_Celeste::Casilla_Celeste(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible) {

}

string Casilla_Celeste::getNombre() {
	return nombre;
}

void Casilla_Celeste::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Celeste::getAlquiler() {
	return alquiler;
}

void Casilla_Celeste::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Celeste::getPrecio() {
	return precio;
}

void Casilla_Celeste::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Celeste::getDisponible() {
	return disponible;
}

void Casilla_Celeste::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Celeste::getCasas() {
	return casas;
}

void Casilla_Celeste::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
