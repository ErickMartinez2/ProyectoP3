#include "Casilla_Roja.h"
#include <iostream>
using namespace std;

Casilla_Roja::Casilla_Roja(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible): Casilla(pnombre, palquiler, pprecio_casa, pprecio, pdisponible) {

}

string Casilla_Roja::getNombre() {
	return nombre;
}

void Casilla_Roja::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Roja::getAlquiler() {
	return alquiler;
}

void Casilla_Roja::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Roja::getPrecio() {
	return precio;
}

void Casilla_Roja::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Roja::getDisponible() {
	return disponible;
}

void Casilla_Roja::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

vector<Casa*> Casilla_Roja::getCasas() {
	return casas;
}

void Casilla_Roja::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}
