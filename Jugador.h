#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;

class Jugador {
	private:
		string nombre;
		char ficha;
		int posicion;
	public:
		Jugador();
		Jugador(string, char, int);
		string getNombre();
		void setNombre(string);
		char getFicha();
		void setFicha(char);
		int getPosicion();
		void setPosicion(int);
};

#endif
