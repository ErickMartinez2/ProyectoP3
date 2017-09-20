#include "Casilla.h"

Casilla::Casilla() {

}

Casilla::Casilla(string pnombre, int palquiler, int pprecio_casa, int pprecio, bool pdisponible, int pnumero) {
	nombre = pnombre;
	alquiler = palquiler;
	precio_casa = pprecio_casa;
	precio = pprecio;
	disponible = pdisponible;
	numero = pnumero;
}

Casilla::Casilla(string pnombre, int palquiler, int palquiler2, int palquiler3, int palquiler4, int pprecio, bool pdisponible, int pnumero) {
	nombre = pnombre;
	alquiler = palquiler;
	alquiler2 = palquiler2;
	alquiler3 = palquiler3;
	alquiler4 = palquiler4;
	precio = pprecio;
	disponible = pdisponible;
	numero = pnumero;
}

Casilla::Casilla(string pnombre, bool pdisponible, int pnumero) {
	nombre = pnombre;
	disponible = pdisponible;
	numero = pnumero;
}

Casilla::Casilla(string pnombre, int palquiler, bool pdisponible, int pnumero) {
	nombre = pnombre;
	alquiler = palquiler;
	disponible = pdisponible;
	numero = pnumero;
}

int Casilla::getAlquiler() {
	return alquiler;
}

void Casilla::setAlquiler(int palquiler) {
	alquiler = palquiler;
}

int Casilla::getAlquiler2() {
	return alquiler2;
}

void Casilla::setAlquiler2(int palquiler2) {
	alquiler2 = palquiler2;
}
int Casilla::getAlquiler3() {
	return alquiler3;
}

void Casilla::setAlquiler3(int palquiler3) {
	alquiler3 = palquiler3;
}
int Casilla::getAlquiler4() {
	return alquiler4;
}

void Casilla::setAlquiler4(int palquiler4) {
	alquiler4 = palquiler4;
}

int Casilla::getNumero() {
	return numero;
}

void Casilla::setNumero(int pnumero) {
	numero = pnumero;
}

vector<Casa*> Casilla::getCasas() {
	return casas;
}

void Casilla::setCasas(vector<Casa*> pcasas) {
	casas = pcasas;
}

Hotel* Casilla::getHotel() {
	return hotel;
}

void Casilla::setHotel(Hotel* photel) {
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

bool Casilla::getDisponible() {
	return disponible;
}

void Casilla::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

