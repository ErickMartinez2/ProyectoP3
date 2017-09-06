#ifndef TABLERO_H
#define TABLERO_H
#include <curses.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Tablero.h"
#include "Jugador.h"
using namespace std;

class Tablero {
	private:

	public:
		Tablero();
		int play();
		string Leer();
		void imprimirTablero();
		void nuevo_juego(WINDOW*);
};

#endif
