#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <vector>
#include "Casilla.h"
#include "Tarjeta.h"
using namespace std;

class Jugador {
	private:
		string nombre;
		char ficha;
		int posicion;
		int dinero;
		vector<Casilla*> propiedades;
		bool carcel;
		int turno_carcel;
		vector<Tarjeta*> tarjetas;
	public:
		Jugador();
		Jugador(string, char, int, int, bool, int);
		string getNombre();
		void setNombre(string);
		char getFicha();
		void setFicha(char);
		int getPosicion();
		void setPosicion(int);
		int getDinero();
		void setDinero(int);
		vector<Casilla*> getPropiedades();
		void setPropiedades(vector<Casilla*>);
		vector<Tarjeta*> getTarjetas();
		void setTarjetas(vector<Tarjeta*>);
		bool getCarcel();
		void setCarcel(bool);
		int getTurnoCarcel();
		void setTurnoCarcel(int);
};

#endif
