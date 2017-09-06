#include "Casa.h"

Casa::Casa() {

}

Casa::Casa(int pprecio, bool pdisponible) {
	precio = pprecio;
	disponible = pdisponible;
}

int Casa::getPrecio() {
	return precio;
}

void Casa::setPrecio(int pprecio) {
	precio = pprecio;
}

bool Casa::getDisponible() {
	return disponible;
}

void Casa::setDisponible(bool pdisponible) {
	disponible = pdisponible;
}

