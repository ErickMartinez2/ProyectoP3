#ifndef CASILLA_H
#define CASILLA_H
#include <string>
#include <vector>
#include "Casa.h"
#include "Hotel.h"
using namespace std;

class Casilla {
	private:
		string nombre;
		int alquiler;
		vector<Casa> casas;
		Hotel hotel;
		int precio_casa;
		int precio;
	public:
		Casilla();
		Casilla(string, int, int, int);
		string getNombre();
		void setNombre(string);
		int getAlquiler();
		void setAlquiler(int);
		vector<Casa> getCasas();
		void setCasas(vector<Casa>);
		Hotel getHotel();
		void setHotel(Hotel);
		int getPrecio_Casa();
		void setPrecio_Casa(int);
		int getPrecio();
		void setPrecio(int);
};

#endif
