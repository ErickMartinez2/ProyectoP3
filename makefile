Main: Main.o Tablero.o Jugador.o Casilla.o Casa.o Hotel.o Casilla_Morada.o Casilla_Celeste.o Casilla_Rosada.o Casilla_Naranja.o Casilla_Roja.o Casilla_Amarilla.o Casilla_Verde.o Casilla_Azul.o Casilla_Ferrocarril.o Casilla_Comodin.o Casilla_Impuesto.o Casilla_Utilidad.o Casilla_Especial.o
	g++ Main.o Tablero.o Jugador.o Casilla.o Casa.o Hotel.o Casilla_Morada.o Casilla_Celeste.o Casilla_Rosada.o Casilla_Naranja.o Casilla_Roja.o Casilla_Amarilla.o Casilla_Verde.o Casilla_Azul.o Casilla_Ferrocarril.o Casilla_Comodin.o Casilla_Impuesto.o Casilla_Utilidad.o Casilla_Especial.o -lncurses -o a

Main.o: Main.cpp Tablero.h Jugador.h Casilla.h Casa.h Hotel.h Casilla_Morada.h Casilla_Celeste.h Casilla_Rosada.h Casilla_Naranja.h Casilla_Roja.h Casilla_Amarilla.h Casilla_Verde.h Casilla_Azul.h Casilla_Ferrocarril.h Casilla_Comodin.h Casilla_Impuesto.h Casilla_Utilidad.h Casilla_Especial.h
	g++ -c Main.cpp Tablero.cpp Jugador.cpp Casilla.cpp Casa.cpp Hotel.cpp Casilla_Morada.cpp Casilla_Celeste.cpp Casilla_Rosada.cpp Casilla_Naranja.cpp Casilla_Roja.cpp Casilla_Amarilla.cpp Casilla_Verde.cpp Casilla_Azul.cpp Casilla_Ferrocarril.cpp Casilla_Comodin.cpp Casilla_Impuesto.cpp Casilla_Utilidad.cpp Casilla_Especial.cpp

Tablero.o: Tablero.h Tablero.cpp
	g++ -c Tablero.cpp

Jugador.o: Jugador.h Jugador.cpp
	g++ -c Jugador.cpp

Casilla.o: Casilla.h Casilla.cpp
	g++ -c Casilla.cpp

Casa.o: Casa.h Casa.cpp
	g++ -c Casa.cpp

Hotel.o: Hotel.h Hotel.cpp
	g++ -c Hotel.cpp

Casilla_Morada.o: Casilla_Morada.h Casilla_Morada.cpp
	g++ -c Casilla_Morada.cpp

Casilla_Celeste.o: Casilla_Celeste.h Casilla_Celeste.cpp
	g++ -c Casilla_Celeste.cpp

Casilla_Rosada.o: Casilla_Rosada.h Casilla_Rosada.cpp
	g++ -c Casilla_Rosada.cpp

Casilla_Naranja.o: Casilla_Naranja.h Casilla_Naranja.cpp
	g++ -c Casilla_Naranja.cpp

Casilla_Roja.o: Casilla_Roja.h Casilla_Roja.cpp
	g++ -c Casilla_Roja.cpp

Casilla_Amarilla.o: Casilla_Amarilla.h Casilla_Amarilla.cpp
	g++ -c Casilla_Amarilla.cpp

Casilla_Verde.o: Casilla_Verde.h Casilla_Verde.cpp
	g++ -c Casilla_Verde.cpp

Casilla_Azul.o: Casilla_Azul.h Casilla_Azul.cpp
	g++ -c Casilla_Azul.cpp

Casilla_Ferrocarril.o: Casilla_Ferrocarril.h Casilla_Ferrocarril.cpp
	g++ -c Casilla_Ferrocarril.h Casilla_Ferrocarril.cpp

Casilla_Comodin.o: Casilla_Comodin.h Casilla_Comodin.cpp
	g++ -c Casilla_Comodin.h Casilla_Comodin.cpp

Casilla_Impuesto.o: Casilla_Impuesto.h Casilla_Impuesto.cpp
	g++ -c Casilla_Impuesto.h Casilla_Impuesto.cpp

Casilla_Utilidad.o: Casilla_Utilidad.h Casilla_Utilidad.cpp
	g++ -c Casilla_Utilidad.h Casilla_Utilidad.cpp

Casilla_Especial.o: Casilla_Especial.h Casilla_Especial.cpp
	g++ -c Casilla_Especial.h Casilla_Especial.cpp
