#ifndef ARCACOMUNAL_H
#define ARCACOMUNAL_H
#include <string>
#include "Tarjeta.h"
using namespace std;

class ArcaComunal: public Tarjeta {
	public:
		ArcaComunal();
		ArcaComunal(int, string);
};

#endif
