#include "Game.h"

Game::Game(){
	
	choice = 0;
	playing = true;

}

Game :: ~Game(){}

void Game::mainMenu() {
	
	std::cout << "BIENVENIDO A NUESTRO JUEGO RPG" << std::endl;
	std::cout << "Ingrese una opción: " << std::endl;
	std::cout << "0: Salir" << std::endl;
	std::cout << "1: Estadísticas" << std::endl;


	std::cin >> choice;

	switch (choice) {
	case 0:
		std::cout << "  _______ _                 _            __                   _             _             \n"
			" |__   __| |               | |          / _|                 | |           (_)            \n"
			"    | |  | |__   __ _ _ __ | | _____   | |_ ___  _ __   _ __ | | __ _ _   _ _ _ __   __ _ \n"
			"    | |  | '_ \\ / _` | '_ \\| |/ / __|  |  _/ _ \\| '__| | '_ \\| |/ _` | | | | | '_ \\ / _` |\n"
			"    | |  | | | | (_| | | | |   <\\__ \\  | || (_) | |    | |_) | | (_| | |_| | | | | | (_| |\n"
			"    |_|  |_| |_|\\__,_|_| |_|_|\\_\\___/  |_| \\___/|_|    | .__/|_|\\__,_|\\__, |_|_| |_|\\__, |\n"
			"                                                       | |             __/ |         __/ |\n"
			"                                                       |_|            |___/         |___/ \n";
		playing = false;
		break;
	case 1:
		std::cout << "Estas son tus estadísticas: " << std::endl;
		
	deafult:
		break;
	}
}