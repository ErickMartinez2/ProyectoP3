#include "Casilla_Azul.h"
#include <iostream>
using namespace std;

Casilla_Azul::Casilla_Azul(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible) {

}

string Casilla_Azul::getNombre() {
	return nombre;
}

void Casilla_Azul::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Azul::getAlquiler() {
	return alquiler;
}

void Casilla_Azul::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Azul::getPrecio() {
	return precio;
}

void Casilla_Azul::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Azul::getDisponible() {
	return disponible;
}

void Casilla_Azul::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Azul::getCasas() {
	return casas;
}

void Casilla_Azul::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
