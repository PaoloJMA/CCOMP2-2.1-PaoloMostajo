#pragma once
#include <string>

class Personaje {
public:
	Personaje();
	Personaje(std::string _nombre, int _vida, int _vidamax, int _fuerza, int _velocidad, int _defensa, int _presicion);
	void displayStats();
	void subirNivel();
	bool estaVivo();
	void inicializar(int nivel, std::string nombre);
	~Personaje();
	//const int& getVida() {
	//	return this->vida;
	//}

    std::string getNombre() const{
        return this->nombre;
    }

	int getVida() const {
		return this->vida;
	}

	int getVidaMax() const {
		return this->vidamax;
	}

	int getFuerza() const {
		return this->fuerza;
	}

	int getVelocidad() const {
		return this->velocidad;
	}

	int getDefensa() const {
		return this->defensa;
	}

    int getPresicion() const {
        return this->presicion;
    }
	
	int getNivel() const {
		return this->nivel;
	}

	int getExp() const {
		return this->exp;
	}

	int getExpSub() const {
		return this->expSub;
	} 

	

private:	
	
	std::string nombre;
	int vida;
	int fuerza;
	int velocidad;
	int defensa;
	int presicion;
	int exp;
	int expSub;
	int nivel;
	int vidamax;

};

