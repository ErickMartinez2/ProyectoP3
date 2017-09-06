#ifndef HOTEL_H
#define HOTEL_H
using namespace std;

class Hotel {
	private:
		int precio;
		bool disponible;
	public:
		Hotel();
		Hotel(int, bool);
		int getPrecio();
		void setPrecio(int);
		bool getDisponible();
		void setDisponible(bool);
};

#endif
