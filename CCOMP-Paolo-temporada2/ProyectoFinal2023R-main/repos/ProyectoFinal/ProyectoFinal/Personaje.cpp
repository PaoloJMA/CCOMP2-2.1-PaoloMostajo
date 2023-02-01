#include "Personaje.h"
#include <iostream>

Personaje::Personaje() {

		nombre = "";
		nivel = 0;
		vida = 0;
		fuerza = 0;
		velocidad = 0;
		defensa = 0;
		presicion = 0;
		exp = 0;
		expSub = 0;

}

Personaje::Personaje(std::string _nombre, int _vida, int _vidamax, int _fuerza, int _velocidad, int _defensa, int _presicion):nombre(_nombre),vida(_vida),vidamax(_vidamax),fuerza(_fuerza), velocidad(_velocidad), defensa(_defensa), presicion(_presicion){
		nivel = 1;
		exp = 0;
		expSub = 0;
}

Personaje::~Personaje(){

}

void Personaje::displayStats() {

	std::cout << nombre << std::endl;

}

void Personaje::inicializar(int nivel, std::string nombre) {
	this->nombre = nombre;
	this->vida = 5;
	this->vidamax = 5;
	this->fuerza = 2;
	this->defensa = 1;
	this->presicion = 50;
	this->velocidad = 1;
	this->nivel = 1;
	this->exp = 0;
	this->expSub = 100;

}

void Personaje::subirNivel() {

	while(this->exp >= this->expSub) {
		expSub = (expSub/7) + expSub;
		this->nivel++;	
		this->vidamax++;
		this->vida+=2;
		this->fuerza++;
		this->defensa++;
		this->presicion+=2;
		this->velocidad++;
		this->exp=0;
	}
}

bool Personaje::estaVivo() {
	if (vida > 0) {
		return true;
	}
	else {
		return false;
	}
}

