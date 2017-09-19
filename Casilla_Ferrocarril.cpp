#include "Casilla_Ferrocarril.h"
#include <iostream>
using namespace std;

Casilla_Ferrocarril::Casilla_Ferrocarril(string pnombre, int palquiler, int palquiler2, int palquiler3, int palquiler4, int pprecio, bool pdisponible): Casilla(pnombre, palquiler, palquiler2, palquiler3, palquiler4, pprecio, pdisponible) {

}

string Casilla_Ferrocarril::getNombre() {
	return nombre;
}

void Casilla_Ferrocarril::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla_Ferrocarril::getAlquiler() {
	return alquiler;
}

void Casilla_Ferrocarril::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla_Ferrocarril::getPrecio() {
	return precio;
}

void Casilla_Ferrocarril::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casilla_Ferrocarril::getDisponible() {
	return disponible;
}

void Casilla_Ferrocarril::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}
