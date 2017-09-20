#ifndef CASILLA_H
#define CASILLA_H
#include <string>
#include <vector>
#include "Casa.h"
#include "Hotel.h"
using namespace std;

class Casilla {
	protected:
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
		int numero;
	public:
		Casilla();
		Casilla(string, int, int, int, bool, int);
		Casilla(string, int, int, int, int, int, bool, int);
		Casilla(string, bool, int);
		Casilla(string, int, bool, int);
		virtual string getNombre() = 0;
		virtual void setNombre(string) = 0;
		virtual int getAlquiler();
		virtual void setAlquiler(int);
		int getAlquiler2();
		void setAlquiler2(int);
		int getAlquiler3();
		void setAlquiler3(int);
		int getAlquiler4();
		void setAlquiler4(int);
		int getNumero();
		void setNumero(int);
		virtual vector<Casa*> getCasas();
		virtual void setCasas(vector<Casa*>);
		virtual Hotel* getHotel();
		virtual void setHotel(Hotel*);
		int getPrecio_Casa();
		void setPrecio_Casa(int);
		virtual int getPrecio();
		virtual void setPrecio(int);
		virtual bool getDisponible();
		virtual void setDisponible(bool);
};

#endif
