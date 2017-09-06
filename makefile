Main: Main.o Tablero.o Jugador.o Casilla.o Casa.o Hotel.o
	g++ Main.o Tablero.o Jugador.o Casilla.o Casa.o Hotel.o -lncurses -o a

Main.o: Main.cpp Tablero.h Jugador.h Casilla.h Casa.h Hotel.h
	g++ -c Main.cpp Tablero.cpp Jugador.cpp Casilla.cpp Casa.cpp Hotel.cpp

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
