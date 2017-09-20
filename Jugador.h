#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <vector>
#include "Casilla.h"
#include "Tarjeta.h"
#include <iostream>
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
		bool casualidad_carcel;
		bool arcacomunal_carcel;
	public:
		Jugador();
		Jugador(string, char, int, int, bool, int, bool, bool);
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
		bool getCarcel();
		void setCarcel(bool);
		bool getCasualidadCarcel();
		void setCasualidadCarcel(bool);
		bool getArcaComunalCarcel();
		void setArcaComunalCarcel(bool);
		int getTurnoCarcel();
		void setTurnoCarcel(int);
		friend ostream& operator >> (ostream& out, Jugador& jugador) {
			out << jugador.getNombre();
			out << " ";
			out << jugador.getFicha();
			out << " ";
			out << jugador.getPosicion();
			out << " ";
			out << jugador.getDinero();
			out << " ";
			out << jugador.getCarcel();
			out << " ";
			out << jugador.getTurnoCarcel();
			out << " ";
			out << jugador.getCasualidadCarcel();
			out << " ";
			out << jugador.getArcaComunalCarcel();	
			vector<Casilla*> nuevas_propiedades = jugador.getPropiedades();
			out << " ";
			out << nuevas_propiedades.size();
			for (int i = 0; i < nuevas_propiedades.size(); i++) {
				out << " ";
				out << nuevas_propiedades[i] -> getNumero();
			}
			out << "\n";
			return out;
		}
};

#endif
