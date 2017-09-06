#include "Hotel.h"

Hotel::Hotel() {

}

Hotel::Hotel(int pprecio, bool pdisponible) {
	precio = pprecio;
	disponible = pdisponible;
}

int Hotel::getPrecio() {
	return precio;
}

void Hotel::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Hotel::getDisponible() {
	return disponible;
}

void Hotel::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

