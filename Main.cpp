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
	int num = tablero -> play();
	delete tablero;
	return num;
}
