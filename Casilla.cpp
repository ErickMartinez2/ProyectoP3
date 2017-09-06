#include "Casilla.h"

Casilla::Casilla() {

}

Casilla::Casilla(string pnombre, int palquiler, int pprecio_casa, int pprecio) {
	nombre = pnombre;
	alquiler = palquiler;
	precio_casa = pprecio_casa;
	precio = pprecio;
}

string Casilla::getNombre() {
	return nombre;
}

void Casilla::setNombre(string pnombre) {
	nombre = pnombre;
}

int Casilla::getAlquiler() {
	return alquiler;
}

void Casilla::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

vector<Casa> Casilla::getCasas() {
	return casas;
}

void Casilla::setCasas(vector<Casa> pcasas) {
	casas = pcasas;
}

Hotel Casilla::getHotel() {
	return hotel;
}

void Casilla::setHotel(Hotel photel) {
	hotel = photel;
}

int Casilla::getPrecio_Casa() {
	return precio_casa;
}

void Casilla::setPrecio_Casa(int pprecio_casa) {
	precio_casa = pprecio_casa;
}

int Casilla::getPrecio() {
	return precio;
}

void Casilla::setPrecio(int pprecio) {
	precio = pprecio;
}

