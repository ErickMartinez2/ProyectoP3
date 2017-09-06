#ifndef CASA_H
#define CASA_H
using namespace std;

class Casa {
	private:
		int precio;
		bool disponible;
	public:
		Casa();
		Casa(int, bool);
		int getPrecio();
		void setPrecio(int);
		bool getDisponible();
		void setDisponible(bool);
};

#endif
