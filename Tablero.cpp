#include "Tablero.h"
#include <fstream>
#include <iostream>
using namespace std;

int Tablero::play() {
	initscr();
	start_color();
	for (int i = 0; i < 40; i++) {
		char posicion[] = "    ";
		posiciones.push_back(posicion);
	}
	imprimirTablero();
	WINDOW * win = newwin(33, 90, 8, 50);
	box(win, 0, 0);
	refresh();
	keypad(win, true);
	int opcion = 0;
	int seleccion = 0;
	bool salir = true;
	wattron(win, COLOR_PAIR(1));
	string menu[3] = {"   Nuevo Partida   ", " Continuar Partida ", "       Salir       "};
	while (salir) {
		wattron(win, COLOR_PAIR(2));
		mvwprintw(win, 12, 35, "   MENU MONOPOLY   ");
		wrefresh(win);
		wattron(win, COLOR_PAIR(1));
		for (int i = 0; i < 3; i++) {
			if (i == seleccion) {
				wattron(win, A_REVERSE);
				mvwprintw(win, i + 13, 35, menu[i].c_str());
				wattroff(win, A_REVERSE);
			} else {
				mvwprintw(win, i + 13, 35, menu[i].c_str());
			}
		}
		wmove(win, 32, 89);
		opcion = wgetch(win);
		switch (opcion) {
			case KEY_UP:	
				seleccion--;
				if (seleccion < 0) {
					seleccion = 0;
				}
				break;
			case KEY_DOWN:
				seleccion++;
				if (seleccion > 2) {
					seleccion = 2;
				}
				break;
			default:
				break;
		}
		if (opcion == 10) {
			switch (seleccion) {
				case 0:
					werase(win);
					box(win, 0 , 0);
					refresh();
					nuevo_juego(win);
					werase(win);
					box(win, 0 , 0);
					refresh();	
					break;
				case 1:
					break;
				case 2:
					salir = false;
					break;
			}
		}
	}
	werase(win);
	box(win, 0, 0);
	refresh();
	mvwprintw(win, 10, 14, " ___   ___          ____           ____        ____   ____   ____   ");
	mvwprintw(win, 11, 14, "|     |   |   /\\   |     |   /\\   |           |    | |    | |    |");
	mvwprintw(win, 12, 14, "| __  |___|  /__\\  |     |  /__\\  |____       |____| |    | |____|");
	mvwprintw(win, 13, 14, "|___| | \\   /    \\ |____ | /    \\  ____|      |      |____| | \\ ");
	mvwprintw(win, 15, 30, " ____         ___          ____ ");
	mvwprintw(win, 16, 30, "   |  |    | |       /\\   |    |");
	mvwprintw(win, 17, 30, "   |  |    | | __   /__\\  |____|");
	mvwprintw(win, 18, 30, "|__|  |____| |___| /    \\ | \\  ");
	wmove(win, 32, 89);
	wrefresh(win);
	getch();
	delwin(win);
	clear();
	endwin();
	return 0;
}

void Tablero::nuevo_juego(WINDOW* win) {
	wattron(win, COLOR_PAIR(2));
	mvwprintw(win, 12, 35, "    NUEVO JUEGO    ");
	wattron(win, COLOR_PAIR(5));
	mvwprintw(win, 13, 35, "NUMERO DE JUGADORES");
	wrefresh(win);
	keypad(win, true);
	int opcion = 0;
	int seleccion = 0;
	bool salir = true;
	wattron(win, COLOR_PAIR(1));
	string menu[3] = {"    2 Jugadores    ", "    3 Jugadores    ", "    4 Jugadores    "};
	while (salir) {
		for (int i = 0; i < 3; i++) {
			if (i == seleccion) {
				wattron(win, A_REVERSE);
				mvwprintw(win, i + 14, 35, menu[i].c_str());
				wattroff(win, A_REVERSE);
			} else {
				mvwprintw(win, i + 14, 35, menu[i].c_str());
			}
		}
		wmove(win, 32, 89);
		opcion = wgetch(win);
		switch (opcion) {
			case KEY_UP:	
				seleccion--;
				if (seleccion < 0) {
					seleccion = 0;
				}
				break;
			case KEY_DOWN:
				seleccion++;
				if (seleccion > 2) {
					seleccion = 2;
				}
				break;
			default:
				break;
		}
		if (opcion == 10) {
			for (int i = 0; i < seleccion + 2; i++) {
				werase(win);
				box(win, 0 , 0);
				refresh();
				wattron(win, COLOR_PAIR(2));
				mvwprintw(win, 12, 33, "INFORMACION DE JUGADORES");
				wattron(win, COLOR_PAIR(5));
				mvwprintw(win, 13, 33, "       JUGADOR ");
				mvwprintw(win, 13, 48, "%d", i + 1);
				mvwprintw(win, 13, 49, "        ");
				wattron(win, COLOR_PAIR(1));
				mvwprintw(win, 14, 33, "Nombre:");
				move(22, 91);
				wrefresh(win);
				string nombre = Leer();
				wattron(win, COLOR_PAIR(18));
				mvwprintw(win, 14, 33, "  Selecciona una Ficha  ");
				move(22, 91);
				wrefresh(win);
				char ficha;
				int opcion2 = 0;
				int seleccion2 = 0;
				bool salir2 = true;
				wattron(win, COLOR_PAIR(1));
				string menu2[4] = {"           *            ", "           +            ", "           !            ", "           #            "};
				while (salir2) {
					wattron(win, COLOR_PAIR(1));
					for (int j = 0; j < 4; j++) {
						if (j == seleccion2) {
							wattron(win, A_REVERSE);
							mvwprintw(win, j + 15, 33, menu2[j].c_str());
							wattroff(win, A_REVERSE);
						} else {
							mvwprintw(win, j + 15, 33, menu2[j].c_str());
						}
					}
					wmove(win, 32, 89);
					opcion2 = wgetch(win);
					switch (opcion2) {
						case KEY_UP:	
							seleccion2--;
							if (seleccion2 < 0) {
								seleccion2 = 0;
							}
							break;
						case KEY_DOWN:
							seleccion2++;
							if (seleccion2 > 3) {
								seleccion2 = 3;
							}
							break;
						default:
							break;
					}
					if (opcion2 == 10) {
						switch (seleccion2) {
							case 0:{
									   int contador = 0;
									   for (int i = 0; i < jugadores.size(); i++) {
										   if (jugadores.at(i) -> getFicha() != '*') {
											   contador++;
										   }
									   }
									   if (contador == jugadores.size()) {
										   ficha = '*';
										   salir2 = false;
									   } else {
										   mvwprintw(win, 20, 32, "Otro Jugador Usa Esa Ficha!");
									   }
								   }break;
							case 1:{
									   int contador = 0;
									   for (int i = 0; i < jugadores.size(); i++) {
										   if (jugadores.at(i) -> getFicha() != '+') {
											   contador++;
										   }
									   }
									   if (contador == jugadores.size()) {
										   ficha = '+';
										   salir2 = false;
									   } else {
										   mvwprintw(win, 20, 32, "Otro Jugador Usa Esa Ficha!");
									   }
								   }
								   break;
							case 2:{
									   int contador = 0;
									   for (int i = 0; i < jugadores.size(); i++) {
										   if (jugadores.at(i) -> getFicha() != '!') {
											   contador++;
										   }
									   }
									   if (contador == jugadores.size()) {
										   ficha = '!';
										   salir2 = false;
									   } else {
										   mvwprintw(win, 20, 32, "Otro Jugador Usa Esa Ficha!");
									   }
								   }
								   break;
							case 3:{
									   int contador = 0;
									   for (int i = 0; i < jugadores.size(); i++) {
										   if (jugadores.at(i) -> getFicha() != '#') {
											   contador++;
										   }
									   }
									   if (contador == jugadores.size()) {
										   ficha = '#';
										   salir2 = false;
									   } else {
										   mvwprintw(win, 20, 32, "Otro Jugador Usa Esa Ficha!");
									   }
								   }
								   break;
						}
					}
				}
				Jugador* jugador = new Jugador(nombre, ficha, 0, 0);
				jugadores.push_back(jugador);
			}
			salir = false;
		}
	}
	string caracteres = "";
	for (int i = 0; i < jugadores.size(); i++) {
		caracteres += jugadores[i] -> getFicha();
	}
	int num_faltante = 4 - jugadores.size();
	for (int i = 0; i < num_faltante; i++) {
		caracteres += " ";
	}
	posiciones.erase(posiciones.begin());
	posiciones.insert(posiciones.begin(), caracteres);
	imprimirTablero();
	bool ganador = false;
	int turno = 0;
	WINDOW * win2 = newwin(15, 30, 22, 60);
	do {
		int opcion = 0;
		int seleccion = 0;
		bool salir = true;
		string menu[3] = {"     Tirar Dados     ", " Ver Mis Propiedades ", "      Rendirse       "};
		while (salir) {
			wattron(win, COLOR_PAIR(1));
			wattron(win2, COLOR_PAIR(1));
			werase(win2);
			box(win2, 0, 0);
			imprimirCasilla(win2, 2);
			werase(win);
			box(win, 0 , 0);
			refresh();
			wattron(win, COLOR_PAIR(5));
			mvwprintw(win, 2, 33, "Turno del Jugador ");
			mvwprintw(win, 2, 51, "%d", turno + 1);
			wattron(win, COLOR_PAIR(1));
			mvwprintw(win, 5, 20, "Nombre: ");		
			mvwprintw(win, 5, 28, "%s", (jugadores[turno] -> getNombre()).c_str());
			mvwprintw(win, 7, 20, "Ficha: ");
			mvwprintw(win, 7, 27, "%c", jugadores[turno] -> getFicha());
			mvwprintw(win, 5, 50, "Dinero: ");
			mvwprintw(win, 5, 58, "%d", jugadores[turno] -> getDinero());
			mvwprintw(win, 7, 50, "Posicion: ");
			mvwprintw(win, 7, 60, "%d", jugadores[turno] -> getPosicion());
			wattron(win, COLOR_PAIR(5));
			mvwprintw(win, 12, 17, "Casilla Actual");
			refresh();
			wattron(win, COLOR_PAIR(5));
			mvwprintw(win, 18, 55, "   Menu del Jugador  ");
			wrefresh(win);
			wrefresh(win2);
			wattron(win, COLOR_PAIR(1));
			for (int i = 0; i < 3; i++) {
				if (i == seleccion) {
					wattron(win, A_REVERSE);
					mvwprintw(win, i + 19, 55, menu[i].c_str());
					wattroff(win, A_REVERSE);
				} else {
					mvwprintw(win, i + 19, 55, menu[i].c_str());
				}
			}
			wmove(win, 32, 89);
			opcion = wgetch(win);
			switch (opcion) {
				case KEY_UP:	
					seleccion--;
					if (seleccion < 0) {
						seleccion = 0;
					}
					break;
				case KEY_DOWN:
					seleccion++;
					if (seleccion > 2) {
						seleccion = 2;
					}
					break;
				default:
					break;
			}
			if (opcion == 10) {
				switch (seleccion) {
					case 0:{
							   wattron(win, COLOR_PAIR(1));
							   wattron(win2, COLOR_PAIR(1));
							   werase(win2);
							   box(win2, 0, 0);
							   imprimirCasilla(win2, 2);
							   werase(win);
							   box(win, 0 , 0);
							   refresh();
							   int num = rand() % 6 + 1;
							   int num2 = rand() % 6 + 1;
							   wattron(win, COLOR_PAIR(5));
							   mvwprintw(win, 2, 33, "Turno del Jugador ");
							   mvwprintw(win, 2, 51, "%d", turno + 1);
							   wattron(win, COLOR_PAIR(1));
							   mvwprintw(win, 5, 20, "Nombre: ");		
							   mvwprintw(win, 5, 28, "%s", (jugadores[turno] -> getNombre()).c_str());
							   mvwprintw(win, 7, 20, "Ficha: ");
							   mvwprintw(win, 7, 27, "%c", jugadores[turno] -> getFicha());
							   mvwprintw(win, 5, 50, "Dinero: ");
							   mvwprintw(win, 5, 58, "%d", jugadores[turno] -> getDinero());
							   mvwprintw(win, 7, 50, "Posicion: ");
							   mvwprintw(win, 7, 60, "%d", jugadores[turno] -> getPosicion());
							   wattron(win, COLOR_PAIR(5));
							   mvwprintw(win, 12, 17, "Casilla Actual");
							   wattron(win, COLOR_PAIR(5));
							   mvwprintw(win, 18, 55, " Resultado de Los Dados ");
							   string espacio1 = "   ";
							   string espacio2 = " 0 ";
							   init_pair(21, 16, COLOR_WHITE);
							   wattron(win, COLOR_PAIR(21));
							   switch (num) {
								   case 1:
									   mvwprintw(win, 20, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio1.c_str());
									   break;
								   case 2:
									   mvwprintw(win, 20, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio2.c_str());
									   break;
								   case 3:
									   mvwprintw(win, 20, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio2.c_str());
									   break;
								   case 4:
									   mvwprintw(win, 20, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio2.c_str());
									   break;
								   case 5:
									   mvwprintw(win, 20, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio2.c_str());
									   break;
								   case 6:
									   mvwprintw(win, 20, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 57, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 60, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 63, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 63, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 63, "%s", espacio2.c_str());
									   break;
							   }
							   switch (num2) {
								   case 1:
									   mvwprintw(win, 20, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio1.c_str());
									   break;
								   case 2:
									   mvwprintw(win, 20, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio2.c_str());
									   break;
								   case 3:
									   mvwprintw(win, 20, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio2.c_str());
									   break;
								   case 4:
									   mvwprintw(win, 20, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio2.c_str());
									   break;
								   case 5:
									   mvwprintw(win, 20, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio2.c_str());
									   break;
								   case 6:
									   mvwprintw(win, 20, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 68, "%s", espacio2.c_str());
									   mvwprintw(win, 20, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 21, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 22, 71, "%s", espacio1.c_str());
									   mvwprintw(win, 20, 74, "%s", espacio2.c_str());
									   mvwprintw(win, 21, 74, "%s", espacio2.c_str());
									   mvwprintw(win, 22, 74, "%s", espacio2.c_str());
									   break;
							   }
							   refresh();
							   wrefresh(win);
							   wrefresh(win2);
							   getch();
						   }break;
					case 1:{

						   }break;
					case 2: {
								salir = false;
							}break;
				}
			}
		}
		wrefresh(win);
		ganador = true;
	} while (!ganador);
	for (int i = 0; i < jugadores.size(); i++) {
		delete jugadores[i];
	}
	jugadores.clear();
	for (int i = 0; i < casillas.size(); i++) {
		if ((typeid(casillas[i]) == typeid(Casilla_Morada)) || (typeid(casillas[i]) == typeid(Casilla_Celeste)) || (typeid(casillas[i]) == typeid(Casilla_Rosada)) || (typeid(casillas[i]) == typeid(Casilla_Naranja)) || (typeid(casillas[i]) == typeid(Casilla_Roja)) || (typeid(casillas[i]) == typeid(Casilla_Amarilla)) || (typeid(casillas[i]) == typeid(Casilla_Verde)) || (typeid(casillas[i]) == typeid(Casilla_Azul)))  {
			for (int j = 0; j < casillas[i] -> getCasas().size(); j++) {
				delete casillas[i] -> getCasas()[j];
			}
		}
		delete casillas[i];
	}
	casillas.clear();
}

void Tablero::imprimirCasilla(WINDOW* win2, int posicion) {
	if (typeid(*casillas[posicion]) == typeid(Casilla_Morada)) {
		wattron(win2, COLOR_PAIR(9));
		mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
		wattron(win2, COLOR_PAIR(10));
		mvwprintw(win2, 4, 9, "Alquiler $");
		mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
		mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
		mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
		mvwprintw(win2, 6, 6, "Con 2 Casas: $");
		mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
		mvwprintw(win2, 7, 6, "Con 3 Casas: $");
		mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
		mvwprintw(win2, 8, 6, "Con 4 Casas: $");
		mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
		mvwprintw(win2, 9, 7, "Con Hotel: $");
		mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
		mvwprintw(win2, 10, 5, "Precio de Casas: $");
		mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
		mvwprintw(win2, 12, 9, "Precio: $");
		mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
	} else {
		if (typeid(*casillas[posicion]) == typeid(Casilla_Celeste)) {
			wattron(win2, COLOR_PAIR(8));
			mvwprintw(win2, 2, 8, "%s", (casillas[posicion] -> getNombre()).c_str());
			wattron(win2, COLOR_PAIR(10));
			mvwprintw(win2, 4, 9, "Alquiler $");
			mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
			mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
			mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
			mvwprintw(win2, 6, 6, "Con 2 Casas: $");
			mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
			mvwprintw(win2, 7, 6, "Con 3 Casas: $");
			mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
			mvwprintw(win2, 8, 6, "Con 4 Casas: $");
			mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
			mvwprintw(win2, 9, 7, "Con Hotel: $");
			mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
			mvwprintw(win2, 10, 5, "Precio de Casas: $");
			mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
			mvwprintw(win2, 12, 9, "Precio: $");
			mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
		} else {
			if (typeid(*casillas[posicion]) == typeid(Casilla_Rosada)) {
				wattron(win2, COLOR_PAIR(7));
				mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
				wattron(win2, COLOR_PAIR(10));
				mvwprintw(win2, 4, 9, "Alquiler $");
				mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
				mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
				mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
				mvwprintw(win2, 6, 6, "Con 2 Casas: $");
				mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
				mvwprintw(win2, 7, 6, "Con 3 Casas: $");
				mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
				mvwprintw(win2, 8, 6, "Con 4 Casas: $");
				mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
				mvwprintw(win2, 9, 7, "Con Hotel: $");
				mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
				mvwprintw(win2, 10, 5, "Precio de Casas: $");
				mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
				mvwprintw(win2, 12, 9, "Precio: $");
				mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
			} else {
				if (typeid(*casillas[posicion]) == typeid(Casilla_Naranja)) {
					wattron(win2, COLOR_PAIR(14));
					mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
					wattron(win2, COLOR_PAIR(10));
					mvwprintw(win2, 4, 9, "Alquiler $");
					mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
					mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
					mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
					mvwprintw(win2, 6, 6, "Con 2 Casas: $");
					mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
					mvwprintw(win2, 7, 6, "Con 3 Casas: $");
					mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
					mvwprintw(win2, 8, 6, "Con 4 Casas: $");
					mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
					mvwprintw(win2, 9, 7, "Con Hotel: $");
					mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
					mvwprintw(win2, 10, 5, "Precio de Casas: $");
					mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
					mvwprintw(win2, 12, 9, "Precio: $");
					mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
				} else {
					if (typeid(*casillas[posicion]) == typeid(Casilla_Roja)) {
						wattron(win2, COLOR_PAIR(2));
						mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
						wattron(win2, COLOR_PAIR(10));
						mvwprintw(win2, 4, 9, "Alquiler $");
						mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
						mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
						mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
						mvwprintw(win2, 6, 6, "Con 2 Casas: $");
						mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
						mvwprintw(win2, 7, 6, "Con 3 Casas: $");
						mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
						mvwprintw(win2, 8, 6, "Con 4 Casas: $");
						mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
						mvwprintw(win2, 9, 7, "Con Hotel: $");
						mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
						mvwprintw(win2, 10, 5, "Precio de Casas: $");
						mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
						mvwprintw(win2, 12, 9, "Precio: $");
						mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
					} else {
						if (typeid(*casillas[posicion]) == typeid(Casilla_Amarilla)) {
							wattron(win2, COLOR_PAIR(15));
							mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
							wattron(win2, COLOR_PAIR(10));
							mvwprintw(win2, 4, 9, "Alquiler $");
							mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
							mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
							mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
							mvwprintw(win2, 6, 6, "Con 2 Casas: $");
							mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
							mvwprintw(win2, 7, 6, "Con 3 Casas: $");
							mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
							mvwprintw(win2, 8, 6, "Con 4 Casas: $");
							mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
							mvwprintw(win2, 9, 7, "Con Hotel: $");
							mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
							mvwprintw(win2, 10, 5, "Precio de Casas: $");
							mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
							mvwprintw(win2, 12, 9, "Precio: $");
							mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
						} else {
							if (typeid(*casillas[posicion]) == typeid(Casilla_Verde)) {
								wattron(win2, COLOR_PAIR(18));
								mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
								wattron(win2, COLOR_PAIR(10));
								mvwprintw(win2, 4, 9, "Alquiler $");
								mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
								mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
								mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
								mvwprintw(win2, 6, 6, "Con 2 Casas: $");
								mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
								mvwprintw(win2, 7, 6, "Con 3 Casas: $");
								mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
								mvwprintw(win2, 8, 6, "Con 4 Casas: $");
								mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
								mvwprintw(win2, 9, 7, "Con Hotel: $");
								mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
								mvwprintw(win2, 10, 5, "Precio de Casas: $");
								mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
								mvwprintw(win2, 12, 9, "Precio: $");
								mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
							} else {
								if (typeid(*casillas[posicion]) == typeid(Casilla_Azul)) {
									wattron(win2, COLOR_PAIR(5));
									mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
									wattron(win2, COLOR_PAIR(10));
									mvwprintw(win2, 4, 9, "Alquiler $");
									mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
									mvwprintw(win2, 5, 6, "Con 1 Casa:  $");
									mvwprintw(win2, 5, 20, "%d", casillas[posicion] -> getCasas()[0] -> getPrecio());
									mvwprintw(win2, 6, 6, "Con 2 Casas: $");
									mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[1] -> getPrecio());
									mvwprintw(win2, 7, 6, "Con 3 Casas: $");
									mvwprintw(win2, 7, 20, "%d", casillas[posicion] -> getCasas()[2] -> getPrecio());
									mvwprintw(win2, 8, 6, "Con 4 Casas: $");
									mvwprintw(win2, 8, 20, "%d", casillas[posicion] -> getCasas()[3] -> getPrecio());
									mvwprintw(win2, 9, 7, "Con Hotel: $");
									mvwprintw(win2, 9, 19, "%d", casillas[posicion] -> getHotel() -> getPrecio());
									mvwprintw(win2, 10, 5, "Precio de Casas: $");
									mvwprintw(win2, 10, 23, "%d", casillas[posicion] -> getPrecio_Casa());
									mvwprintw(win2, 12, 9, "Precio: $");
									mvwprintw(win2, 12, 18, "%d", casillas[posicion] -> getPrecio());
								} else {
									if (typeid(*casillas[posicion]) == typeid(Casilla_Ferrocarril)) {
										wattron(win2, COLOR_PAIR(12));
										mvwprintw(win2, 2, 6, "%s", (casillas[posicion] -> getNombre()).c_str());
										wattron(win2, COLOR_PAIR(10));
										mvwprintw(win2, 4, 9, "Alquiler $");
										mvwprintw(win2, 4, 19, "%d", casillas[posicion] -> getAlquiler());
										mvwprintw(win2, 6, 3, "Con 2 Ferrocarriles: $");
										mvwprintw(win2, 6, 25, "%d", casillas[posicion] -> getAlquiler2());
										mvwprintw(win2, 7, 3, "Con 3 Ferrocarriles: $");
										mvwprintw(win2, 7, 25, "%d", casillas[posicion] -> getAlquiler3());
										mvwprintw(win2, 8, 3, "Con 4 Ferrocarriles: $");
										mvwprintw(win2, 8, 25, "%d", casillas[posicion] -> getAlquiler4());
										mvwprintw(win2, 11, 9, "Precio: $");
										mvwprintw(win2, 11, 18, "%d", casillas[posicion] -> getPrecio());

									} else {
										if (typeid(*casillas[posicion]) == typeid(Casilla_Comodin)) {
											wattron(win2, COLOR_PAIR(1));
											mvwprintw(win2, 3, 8, "%s", (casillas[posicion] -> getNombre()).c_str());
											wattron(win2, COLOR_PAIR(4));
											for (int i = 0; i < 6; i++) {
												mvwprintw(win2, i + 5, 6, " ");
												mvwprintw(win2, i + 5, 22, " ");
											}
											for (int i = 6; i < 23; i++) {
												mvwprintw(win2, 5, i, " ");
												mvwprintw(win2, 10, i, " ");
												mvwprintw(win2, 8, i, " ");
											}
											mvwprintw(win2, 7, 13, "  ");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void Tablero::init(string file) {
	ifstream inputFile(file);
	if (inputFile.is_open()) {
		string nombre;
		int alquiler;
		int alquiler2;
		int alquiler3;
		int alquiler4;
		int precio_casa;
		int precio;
		int casa1;
		int casa2;
		int casa3;
		int casa4;
		int hotel;
		int contador = 0;
		string o;
		while (!inputFile.eof()) {
			if ((contador == 0) || (contador == 10) || (contador == 20) || (contador == 30)) {
				inputFile >> nombre;
				string nombre1 = "";
				for (int i = 0; i < nombre.size(); i++) {
					if (nombre[i] != '_') {
						nombre1 += nombre[i];
					} else {
						nombre1 += ' ';
					}
				}
				Casilla* casilla = new Casilla_Especial(nombre1);
				casillas.push_back(casilla);
			} else {
				if ((contador == 1) || (contador == 3)) {
					inputFile >> nombre;
					inputFile >> alquiler;
					inputFile >> casa1;
					inputFile >> casa2;
					inputFile >> casa3;
					inputFile >> casa4;
					inputFile >> hotel;
					inputFile >> precio_casa;
					inputFile >> precio;
					string nombre1 = "";
					for (int i = 0; i < nombre.size(); i++) {
						if (nombre[i] != '_') {
							nombre1 += nombre[i];
						} else {
							nombre1 += ' ';
						}
					}
					Casilla* casilla = new Casilla_Morada(nombre1, alquiler, precio_casa, precio);
					vector<Casa*> casas;
					Casa* casas1 = new Casa(casa1, false);
					Casa* casas2 = new Casa(casa2, false);
					Casa* casas3 = new Casa(casa3, false);
					Casa* casas4 = new Casa(casa4, false);
					casas.push_back(casas1);
					casas.push_back(casas2);
					casas.push_back(casas3);
					casas.push_back(casas4);
					casilla -> setCasas(casas);
					Hotel* hotel1 = new Hotel(hotel, false);
					casilla -> setHotel(hotel1);
					casillas.push_back(casilla);
				} else {
					if ((contador == 2) || (contador == 7) || (contador == 17) || (contador == 22) || (contador == 33) || (contador == 36)) {
						inputFile >> nombre;
						string nombre1 = "";
						for (int i = 0; i < nombre.size(); i++) {
							if (nombre[i] != '_') {
								nombre1 += nombre[i];
							} else {
								nombre1 += ' ';
							}
						}
						Casilla* casilla = new Casilla_Comodin(nombre1);
						casillas.push_back(casilla);
					} else {
						if ((contador == 4) || (contador == 38)) {
							inputFile >> nombre;
							inputFile >> alquiler;
							string nombre1 = "";
							for (int i = 0; i < nombre.size(); i++) {
								if (nombre[i] != '_') {
									nombre1 += nombre[i];
								} else {
									nombre1 += ' ';
								}
							}
							Casilla* casilla = new Casilla_Impuesto(nombre1, alquiler);
							casillas.push_back(casilla);
						} else {
							if ((contador == 5) || (contador == 15) || (contador == 25) || (contador == 35)) {
								inputFile >> nombre;
								inputFile >> alquiler;
								inputFile >> alquiler2;
								inputFile >> alquiler3;
								inputFile >> alquiler4;
								inputFile >> precio;
								string nombre1 = "";
								for (int i = 0; i < nombre.size(); i++) {
									if (nombre[i] != '_') {
										nombre1 += nombre[i];
									} else {
										nombre1 += ' ';
									}
								}
								Casilla* casilla = new Casilla_Ferrocarril(nombre1, alquiler, alquiler2, alquiler3, alquiler4, precio);
								casillas.push_back(casilla);
							} else {
								if ((contador == 6) || (contador == 8) || (contador == 9)) {
									inputFile >> nombre;
									inputFile >> alquiler;
									inputFile >> casa1;
									inputFile >> casa2;
									inputFile >> casa3;
									inputFile >> casa4;
									inputFile >> hotel;
									inputFile >> precio_casa;
									inputFile >> precio;
									string nombre1 = "";
									for (int i = 0; i < nombre.size(); i++) {
										if (nombre[i] != '_') {
											nombre1 += nombre[i];
										} else {
											nombre1 += ' ';
										}
									}
									Casilla* casilla = new Casilla_Celeste(nombre1, alquiler, precio_casa, precio);
									vector<Casa*> casas;
									Casa* casas1 = new Casa(casa1, false);
									Casa* casas2 = new Casa(casa2, false);
									Casa* casas3 = new Casa(casa3, false);
									Casa* casas4 = new Casa(casa4, false);
									casas.push_back(casas1);
									casas.push_back(casas2);
									casas.push_back(casas3);
									casas.push_back(casas4);
									casilla -> setCasas(casas);
									Hotel* hotel1 = new Hotel(hotel, false);
									casilla -> setHotel(hotel1);
									casillas.push_back(casilla);
								} else {
									if ((contador == 12) || (contador == 28)) {
										inputFile >> nombre;
										inputFile >> precio;
										string nombre1 = "";
										for (int i = 0; i < nombre.size(); i++) {
											if (nombre[i] != '_') {
												nombre1 += nombre[i];
											} else {
												nombre1 += ' ';
											}
										}
										Casilla* casilla = new Casilla_Utilidad(nombre1, precio);
										casillas.push_back(casilla);
									} else {
										if ((contador == 11) || (contador == 13) || (contador == 14)) {
											inputFile >> nombre;
											inputFile >> alquiler;
											inputFile >> casa1;
											inputFile >> casa2;
											inputFile >> casa3;
											inputFile >> casa4;
											inputFile >> hotel;
											inputFile >> precio_casa;
											inputFile >> precio;
											string nombre1 = "";
											for (int i = 0; i < nombre.size(); i++) {
												if (nombre[i] != '_') {
													nombre1 += nombre[i];
												} else {
													nombre1 += ' ';
												}
											}
											Casilla* casilla = new Casilla_Rosada(nombre1, alquiler, precio_casa, precio);
											vector<Casa*> casas;
											Casa* casas1 = new Casa(casa1, false);
											Casa* casas2 = new Casa(casa2, false);
											Casa* casas3 = new Casa(casa3, false);
											Casa* casas4 = new Casa(casa4, false);
											casas.push_back(casas1);
											casas.push_back(casas2);
											casas.push_back(casas3);
											casas.push_back(casas4);
											casilla -> setCasas(casas);
											Hotel* hotel1 = new Hotel(hotel, false);
											casilla -> setHotel(hotel1);
											casillas.push_back(casilla);
										} else {
											if ((contador == 16) || (contador == 18) || (contador == 19)) {
												inputFile >> nombre;
												inputFile >> alquiler;
												inputFile >> casa1;
												inputFile >> casa2;
												inputFile >> casa3;
												inputFile >> casa4;
												inputFile >> hotel;
												inputFile >> precio_casa;
												inputFile >> precio;
												string nombre1 = "";
												for (int i = 0; i < nombre.size(); i++) {
													if (nombre[i] != '_') {
														nombre1 += nombre[i];
													} else {
														nombre1 += ' ';
													}
												}
												Casilla* casilla = new Casilla_Naranja(nombre1, alquiler, precio_casa, precio);
												vector<Casa*> casas;
												Casa* casas1 = new Casa(casa1, false);
												Casa* casas2 = new Casa(casa2, false);
												Casa* casas3 = new Casa(casa3, false);
												Casa* casas4 = new Casa(casa4, false);
												casas.push_back(casas1);
												casas.push_back(casas2);
												casas.push_back(casas3);
												casas.push_back(casas4);
												casilla -> setCasas(casas);
												Hotel* hotel1 = new Hotel(hotel, false);
												casilla -> setHotel(hotel1);
												casillas.push_back(casilla);
											} else {
												if ((contador == 21) || (contador == 23) || (contador == 24)) {
													inputFile >> nombre;
													inputFile >> alquiler;
													inputFile >> casa1;
													inputFile >> casa2;
													inputFile >> casa3;
													inputFile >> casa4;
													inputFile >> hotel;
													inputFile >> precio_casa;
													inputFile >> precio;
													string nombre1 = "";
													for (int i = 0; i < nombre.size(); i++) {
														if (nombre[i] != '_') {
															nombre1 += nombre[i];
														} else {
															nombre1 += ' ';
														}
													}
													Casilla* casilla = new Casilla_Roja(nombre1, alquiler, precio_casa, precio);
													vector<Casa*> casas;
													Casa* casas1 = new Casa(casa1, false);
													Casa* casas2 = new Casa(casa2, false);
													Casa* casas3 = new Casa(casa3, false);
													Casa* casas4 = new Casa(casa4, false);
													casas.push_back(casas1);
													casas.push_back(casas2);
													casas.push_back(casas3);
													casas.push_back(casas4);
													casilla -> setCasas(casas);
													Hotel* hotel1 = new Hotel(hotel, false);
													casilla -> setHotel(hotel1);
													casillas.push_back(casilla);
												} else {
													if ((contador == 26) || (contador == 27) || (contador == 29)) {
														inputFile >> nombre;
														inputFile >> alquiler;
														inputFile >> casa1;
														inputFile >> casa2;
														inputFile >> casa3;
														inputFile >> casa4;
														inputFile >> hotel;
														inputFile >> precio_casa;
														inputFile >> precio;
														string nombre1 = "";
														for (int i = 0; i < nombre.size(); i++) {
															if (nombre[i] != '_') {
																nombre1 += nombre[i];
															} else {
																nombre1 += ' ';
															}
														}
														Casilla* casilla = new Casilla_Amarilla(nombre1, alquiler, precio_casa, precio);
														vector<Casa*> casas;
														Casa* casas1 = new Casa(casa1, false);
														Casa* casas2 = new Casa(casa2, false);
														Casa* casas3 = new Casa(casa3, false);
														Casa* casas4 = new Casa(casa4, false);
														casas.push_back(casas1);
														casas.push_back(casas2);
														casas.push_back(casas3);
														casas.push_back(casas4);
														casilla -> setCasas(casas);
														Hotel* hotel1 = new Hotel(hotel, false);
														casilla -> setHotel(hotel1);
														casillas.push_back(casilla);
													} else {
														if ((contador == 31) || (contador == 32) || (contador == 34)) {
															inputFile >> nombre;
															inputFile >> alquiler;
															inputFile >> casa1;
															inputFile >> casa2;
															inputFile >> casa3;
															inputFile >> casa4;
															inputFile >> hotel;
															inputFile >> precio_casa;
															inputFile >> precio;
															string nombre1 = "";
															for (int i = 0; i < nombre.size(); i++) {
																if (nombre[i] != '_') {
																	nombre1 += nombre[i];
																} else {
																	nombre1 += ' ';
																}
															}
															Casilla* casilla = new Casilla_Verde(nombre1, alquiler, precio_casa, precio);
															vector<Casa*> casas;
															Casa* casas1 = new Casa(casa1, false);
															Casa* casas2 = new Casa(casa2, false);
															Casa* casas3 = new Casa(casa3, false);
															Casa* casas4 = new Casa(casa4, false);
															casas.push_back(casas1);
															casas.push_back(casas2);
															casas.push_back(casas3);
															casas.push_back(casas4);
															casilla -> setCasas(casas);
															Hotel* hotel1 = new Hotel(hotel, false);
															casilla -> setHotel(hotel1);
															casillas.push_back(casilla);
														} else {
															if ((contador == 37) || (contador == 39)) {
																inputFile >> nombre;
																inputFile >> alquiler;
																inputFile >> casa1;
																inputFile >> casa2;
																inputFile >> casa3;
																inputFile >> casa4;
																inputFile >> hotel;
																inputFile >> precio_casa;
																inputFile >> precio;
																string nombre1 = "";
																for (int i = 0; i < nombre.size(); i++) {
																	if (nombre[i] != '_') {
																		nombre1 += nombre[i];
																	} else {
																		nombre1 += ' ';
																	}
																}
																Casilla* casilla = new Casilla_Azul(nombre1, alquiler, precio_casa, precio);
																vector<Casa*> casas;
																Casa* casas1 = new Casa(casa1, false);
																Casa* casas2 = new Casa(casa2, false);
																Casa* casas3 = new Casa(casa3, false);
																Casa* casas4 = new Casa(casa4, false);
																casas.push_back(casas1);
																casas.push_back(casas2);
																casas.push_back(casas3);
																casas.push_back(casas4);
																casilla -> setCasas(casas);
																Hotel* hotel1 = new Hotel(hotel, false);
																casilla -> setHotel(hotel1);
																casillas.push_back(casilla);
															} else {
																inputFile >> o;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}	
					}
				}
			}
			contador++;
		}
		inputFile.close();
	}
}

string Tablero::Leer() {
	char caracter;
	stringstream ss;
	caracter = getch();
	string cadena;
	while (caracter != '\n') {
		ss << caracter;
		caracter = getch();
	}
	cadena = ss.str();
	return cadena;
}

Tablero::Tablero() {

}

void Tablero::imprimirTablero() {
	//Naranja
	init_color(COLOR_CYAN, 1000, 500, 0);
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_WHITE, COLOR_RED);
	init_pair(3, COLOR_RED, COLOR_WHITE);
	init_pair(4, COLOR_GREEN, COLOR_WHITE);
	init_pair(5, COLOR_WHITE, COLOR_BLUE);
	init_pair(6, COLOR_BLACK, COLOR_WHITE);
	//Rosado
	init_pair(7, COLOR_WHITE, 13);
	//Celeste
	init_pair(8, COLOR_BLACK, 12);
	init_pair(9, COLOR_WHITE, COLOR_MAGENTA);
	//Gris
	init_pair(10, COLOR_WHITE, 8);
	init_pair(11, COLOR_RED, 8);
	//Negro
	init_pair(12, COLOR_WHITE, 16);
	init_pair(13, COLOR_YELLOW, 16);
	init_pair(14, COLOR_BLACK, COLOR_CYAN);
	init_pair(15, COLOR_WHITE, COLOR_YELLOW);
	init_pair(16, COLOR_BLUE, 16);
	init_pair(17, COLOR_WHITE, COLOR_BLUE);
	init_pair(18, COLOR_WHITE, COLOR_GREEN);
	init_pair(19, COLOR_YELLOW, 8);
	init_pair(20, COLOR_WHITE, COLOR_YELLOW);
	attron(COLOR_PAIR(1));
	//printw("012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
	//printw("1\n2\n3\n4\n5\n6\n7\n8\n9\n0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n0");
	for (int i = 0; i <= 42; i++) {
		printw(" |\n");
	}
	for (int i = 0; i <= 42; i++) {
		mvprintw(i, 46, "|");
	}
	for (int i = 4; i <= 38; i++) {
		mvprintw(i, 6, "|");
	}
	for (int i = 4; i <= 38; i++) {
		mvprintw(i, 41, "|");
	}
	attron(COLOR_PAIR(2));
	mvprintw(2, 67, "           _____         _____   ____   _____            ");
	mvprintw(3, 67, " |\\    /| |     | |\\  | |     | |    | |     | |    \\  / ");
	mvprintw(4, 67, " | \\  / | |     | | \\ | |     | |____| |     | |     \\/  ");
	mvprintw(5, 67, " |  \\/  | |_____| |  \\| |_____| |      |_____| |___  /   ");
	mvprintw(6, 67, "                                                         ");
	for (int i = 0; i < 40; i++) {
		switch (i) {
			case 0:{
					   attron(COLOR_PAIR(4));
					   mvprintw(39, 42, "$200");
					   attron(COLOR_PAIR(3));
					   mvprintw(40, 42, " GO ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   attron(COLOR_PAIR(1));
					   mvprintw(41, 42, "%s", posicion);
					   attron(COLOR_PAIR(3));
					   mvprintw(42, 42, "<---");
				   }break;
			case 1:{
					   attron(COLOR_PAIR(9));
					   mvprintw(39, 38, "    ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 38, " AM ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 38, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 38, "$60 ");
				   }break;
			case 2:{
					   attron(COLOR_PAIR(5)); 
					   mvprintw(39, 34, " ");
					   attron(COLOR_PAIR(4)); 
					   printw(" ");
					   attron(COLOR_PAIR(5)); 
					   printw(" ");
					   attron(COLOR_PAIR(4)); 
					   printw(" ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 34, "-AC-");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 34, "%s", posicion);
					   attron(COLOR_PAIR(5)); 
					   mvprintw(42, 34, " ");
					   attron(COLOR_PAIR(4)); 
					   printw(" ");
					   attron(COLOR_PAIR(5)); 
					   printw(" ");
					   attron(COLOR_PAIR(4)); 
					   printw(" ");
				   }break;
			case 3:{
					   attron(COLOR_PAIR(9));
					   mvprintw(39, 30, "    ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 30, " AB ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 30, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 30, "$60 ");
				   }break;
			case 4:{
					   attron(COLOR_PAIR(10)); 
					   mvprintw(39, 26, "////");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 26, "~II~");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 26, "%s", posicion);
					   attron(COLOR_PAIR(3));
					   mvprintw(42, 26, "$200");
				   }break;
			case 5:{
					   attron(COLOR_PAIR(12)); 
					   mvprintw(39, 22, "&##&");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 22, " FR ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 22, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 22, "$200");
				   }break;
			case 6:{
					   attron(COLOR_PAIR(8));
					   mvprintw(39, 18, "    ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 18, " AO ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 18, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 18, "$100");
				   }break;
			case 7:{
					   attron(COLOR_PAIR(7)); 
					   mvprintw(39, 14, " ");
					   attron(COLOR_PAIR(3)); 
					   printw(" ");
					   attron(COLOR_PAIR(7)); 
					   printw(" ");
					   attron(COLOR_PAIR(3)); 
					   printw(" ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 14, "-C?-");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 14, "%s", posicion);
					   attron(COLOR_PAIR(7)); 
					   mvprintw(42, 14, " ");
					   attron(COLOR_PAIR(3)); 
					   printw(" ");
					   attron(COLOR_PAIR(7)); 
					   printw(" ");
					   attron(COLOR_PAIR(3)); 
					   printw(" ");
				   }break;
			case 8:{
					   attron(COLOR_PAIR(8));
					   mvprintw(39, 10, "    ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 10, " AV ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 10, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 10, "$100");
				   }break;
			case 9:{
					   attron(COLOR_PAIR(8));
					   mvprintw(39, 6, "    ");
					   attron(COLOR_PAIR(1));
					   mvprintw(40, 6, " AC ");
					   char posicion[] = "    ";
					   for (int j = 0; j < 4; j++) {
						   posicion[j] = (posiciones[i])[j];
					   }
					   mvprintw(41, 6, "%s", posicion);
					   attron(COLOR_PAIR(10)); 
					   mvprintw(42, 6, "$120");
				   }break;
			case 10:{
						attron(COLOR_PAIR(6));
						mvprintw(39, 2, "||||");
						attron(COLOR_PAIR(14));
						mvprintw(40, 2, ">CA<");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						attron(COLOR_PAIR(1));	
						mvprintw(41, 2, "%s", posicion);
						attron(COLOR_PAIR(6));
						mvprintw(42, 2, "||||");
					}break;
			case 11:{
						attron(COLOR_PAIR(7));
						mvprintw(35, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(36, 2, " SC ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(37, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(38, 2, "$140");
					}break;
			case 12:{
						attron(COLOR_PAIR(13));
						mvprintw(31, 2, "////");
						attron(COLOR_PAIR(1));
						mvprintw(32, 2, " CE ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(33, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(34, 2, "$150");
					}break;
			case 13:{
						attron(COLOR_PAIR(7));
						mvprintw(27, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(28, 2, " AE ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(29, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(30, 2, "$140");
					}break;
			case 14:{
						attron(COLOR_PAIR(7));
						mvprintw(23, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(24, 2, " AV ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(25, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(26, 2, "$160");
					}break;
			case 15:{
						attron(COLOR_PAIR(12)); 
						mvprintw(19, 2, "&##&");
						attron(COLOR_PAIR(1));
						mvprintw(20, 2, " FP ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(21, 2, "%s", posicion);
						attron(COLOR_PAIR(10)); 
						mvprintw(22, 2, "$200");
					}break;
			case 16:{
						attron(COLOR_PAIR(14));
						mvprintw(15, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(16, 2, " PS ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(17, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(18, 2, "$180");
					}break;
			case 17:{
						attron(COLOR_PAIR(5)); 
						mvprintw(12, 2, " ");
						attron(COLOR_PAIR(4)); 
						printw(" ");
						attron(COLOR_PAIR(5)); 
						printw(" ");
						attron(COLOR_PAIR(4)); 
						printw(" ");
						attron(COLOR_PAIR(1));
						mvprintw(13, 2, "-AC-");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(14, 2, "%s", posicion);
					}break;
			case 18:{
						attron(COLOR_PAIR(14));
						mvprintw(8, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(9, 2, " AT ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(10, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(11, 2, "$180");
					}break;
			case 19:{
						attron(COLOR_PAIR(14));
						mvprintw(4, 2, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(5, 2, " NY ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(6, 2, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(7, 2, "$200");
					}break;
			case 20:{
						attron(COLOR_PAIR(6));
						mvprintw(0, 2, " ");
						attron(COLOR_PAIR(2));
						printw("  ");
						attron(COLOR_PAIR(6));
						printw(" ");
						attron(COLOR_PAIR(2));
						mvprintw(1, 2, ">PL<");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						attron(COLOR_PAIR(1));	
						mvprintw(2, 2, "%s", posicion);
						attron(COLOR_PAIR(6));
						mvprintw(3, 2, " ");
						attron(COLOR_PAIR(2));
						printw("  ");
						attron(COLOR_PAIR(6));
						printw(" ");

					}break;
			case 21:{
						attron(COLOR_PAIR(2));
						mvprintw(0, 6, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 6, " AK ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 6, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 6, "$220");
					}break;
			case 22:{
						attron(COLOR_PAIR(7)); 
						mvprintw(0, 10, " ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(7)); 
						printw(" ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 10, "-C?-");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(2, 10, "%s", posicion);
						attron(COLOR_PAIR(7)); 
						mvprintw(3, 10, " ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(7)); 
						printw(" ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
					}break;
			case 23:{
						attron(COLOR_PAIR(2));
						mvprintw(0, 14, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 14, " AI ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 14, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 14, "$220");
					}break;
			case 24:{
						attron(COLOR_PAIR(2));
						mvprintw(0, 18, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 18, "A.IL");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 18, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 18, "$240");
					}break;
			case 25:{
						attron(COLOR_PAIR(12)); 
						mvprintw(0, 22, "&##&");
						attron(COLOR_PAIR(1));
						mvprintw(1, 22, " FB ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(2, 22, "%s", posicion);
						attron(COLOR_PAIR(10)); 
						mvprintw(3, 22, "$200");
					}break;
			case 26:{
						attron(COLOR_PAIR(15));
						mvprintw(0, 26, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 26, " AA ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 26, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 26, "$260");
					}break;
			case 27:{
						attron(COLOR_PAIR(15));
						mvprintw(0, 30, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 30, " AV ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 30, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 30, "$260");
					}break;
			case 28:{
						attron(COLOR_PAIR(16));
						mvprintw(0, 34, "////");
						attron(COLOR_PAIR(1));
						mvprintw(1, 34, " AP ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 34, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 34, "$150");
					}break;
			case 29:{
						attron(COLOR_PAIR(15));
						mvprintw(0, 38, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(1, 38, " JM ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(2, 38, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(3, 38, "$280");
					}break;
			case 30:{
						attron(COLOR_PAIR(6));
						mvprintw(0, 42, " ");
						attron(COLOR_PAIR(17));
						printw("  ");
						attron(COLOR_PAIR(6));
						printw(" ");
						attron(COLOR_PAIR(17));
						mvprintw(1, 42, ">PO<");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						attron(COLOR_PAIR(1));	
						mvprintw(2, 42, "%s", posicion);
						attron(COLOR_PAIR(6));
						mvprintw(3, 42, " ");
						attron(COLOR_PAIR(17));
						printw("  ");
						attron(COLOR_PAIR(6));
						printw(" ");
					}break;
			case 31:{
						attron(COLOR_PAIR(18));
						mvprintw(4, 42, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(5, 42, " AP ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(6, 42, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(7, 42, "$300");
					}break;
			case 32:{
						attron(COLOR_PAIR(18));
						mvprintw(8, 42, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(9, 42, " AC ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(10, 42, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(11, 42, "$300");
					}break;
			case 33:{
						attron(COLOR_PAIR(5)); 
						mvprintw(12, 42, " ");
						attron(COLOR_PAIR(4)); 
						printw(" ");
						attron(COLOR_PAIR(5)); 
						printw(" ");
						attron(COLOR_PAIR(4)); 
						printw(" ");
						attron(COLOR_PAIR(1));
						mvprintw(13, 42, "-AC-");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(14, 42, "%s", posicion);
					}break;
			case 34:{
						attron(COLOR_PAIR(18));
						mvprintw(15, 42, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(16, 42, " AP ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(17, 42, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(18, 42, "$320");
					}break;
			case 35:{
						attron(COLOR_PAIR(12)); 
						mvprintw(19, 42, "&##&");
						attron(COLOR_PAIR(1));
						mvprintw(20, 42, " FS ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(21, 42, "%s", posicion);
						attron(COLOR_PAIR(10)); 
						mvprintw(22, 42, "$200");
					}break;
			case 36:{
						attron(COLOR_PAIR(7)); 
						mvprintw(23, 42, " ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(7)); 
						printw(" ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(1));
						mvprintw(24, 42, "-C?-");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(25, 42, "%s", posicion);
						attron(COLOR_PAIR(7)); 
						mvprintw(26, 42, " ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
						attron(COLOR_PAIR(7)); 
						printw(" ");
						attron(COLOR_PAIR(3)); 
						printw(" ");
					}break;
			case 37:{
						attron(COLOR_PAIR(17));
						mvprintw(27, 42, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(28, 42, " PP ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(29, 42, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(30, 42, "$350");
					}break;
			case 38:{
						attron(COLOR_PAIR(19)); 
						mvprintw(31, 42, "////");
						attron(COLOR_PAIR(1));
						mvprintw(32, 42, "~IP~");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}
						mvprintw(33, 42, "%s", posicion);
						attron(COLOR_PAIR(3));
						mvprintw(34, 42, "$75 ");
					}break;
			case 39:{
						attron(COLOR_PAIR(17));
						mvprintw(35, 42, "    ");
						attron(COLOR_PAIR(1));
						mvprintw(36, 42, " PT ");
						char posicion[] = "    ";
						for (int j = 0; j < 4; j++) {
							posicion[j] = (posiciones[i])[j];
						}	
						mvprintw(37, 42, "%s", posicion);
						attron(COLOR_PAIR(10));
						mvprintw(38, 42, "$400");
					}break;
		}
	}
}
