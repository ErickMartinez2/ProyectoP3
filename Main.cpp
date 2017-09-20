#include <curses.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Tablero.h"
#include "Jugador.h"
using namespace std;

int main() {
	Tablero* tablero = new Tablero();
	tablero -> init("Casillas.txt");
	tablero -> init2("Tarjetas.txt");
	int num = tablero -> play();
	//WINDOW * win = newwin(33, 90, 8, 50);
	//tablero -> continuar_juego(win);
	delete tablero;
	return num;
}
