#ifndef TABLERO_H
#define TABLERO_H
#include <curses.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <typeinfo>
#include "Tablero.h"
#include "Jugador.h"
#include "Casilla.h"
#include "Casa.h"
#include "Hotel.h"
#include "Casilla_Amarilla.h"
#include "Casilla_Azul.h"
#include "Casilla_Celeste.h"
#include "Casilla_Comodin.h"
#include "Casilla_Especial.h"
#include "Casilla_Ferrocarril.h"
#include "Casilla_Impuesto.h"
#include "Casilla_Morada.h"
#include "Casilla_Naranja.h"
#include "Casilla_Roja.h"
#include "Casilla_Rosada.h"
#include "Casilla_Utilidad.h"
#include "Casilla_Verde.h"
using namespace std;

class Tablero {
	private:
		vector<Jugador*> jugadores;
		vector<string> posiciones;
		vector<Casilla*> casillas;
	public:
		Tablero();
		int play();
		string Leer();
		void imprimirTablero();
		void nuevo_juego(WINDOW*);
		void init(string);
};

#endif
