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
		int alquiler2;
		int alquiler3;
		int alquiler4;
		vector<Casa*> casas;
		Hotel* hotel;
		int precio_casa;
		int precio;
		bool disponible;
	public:
		Casilla();
		Casilla(string, int, int, int, bool);
		Casilla(string, int, int, int, int, int, bool);
		Casilla(string, bool);
		Casilla(string, int, bool);
		string getNombre();
		void setNombre(string);
		int getAlquiler();
		void setAlquiler(int);
		int getAlquiler2();
		void setAlquiler2(int);
		int getAlquiler3();
		void setAlquiler3(int);
		int getAlquiler4();
		void setAlquiler4(int);
		vector<Casa*> getCasas();
		void setCasas(vector<Casa*>);
		Hotel* getHotel();
		void setHotel(Hotel*);
		int getPrecio_Casa();
		void setPrecio_Casa(int);
		int getPrecio();
		virtual void setPrecio(int);
		bool getDisponible();
		void setDisponible(bool);
};

#endif
