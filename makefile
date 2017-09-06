Main: Main.o Tablero.o Jugador.o
	g++ Main.o Tablero.o Jugador.o -lncurses -o a

Main.o: Main.cpp Tablero.h Jugador.h
	g++ -c Main.cpp Tablero.cpp Jugador.cpp

Tablero.o: Tablero.h Tablero.cpp
	g++ -c Tablero.cpp

Jugador.o: Jugador.h Jugador.cpp
	g++ -c Jugador.cpp
