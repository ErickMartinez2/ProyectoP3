#ifndef CASUALIDAD_H
#define CASUALIDAD_H
#include <string>
#include "Tarjeta.h"
using namespace std;

class Casualidad: public Tarjeta {
	public:
		Casualidad();
		Casualidad(int, string);
};

#endif
