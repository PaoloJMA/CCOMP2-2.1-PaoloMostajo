#include <iostream>
#include <string>
#include "Ejercicio3-11.h"

using namespace std;

int main(){
  
  MotorVehicle Carro1("BMW", "Gas", 2018, "Red", 255);
  
  Carro1.display();

  MotorVehicle Carro2("Toyota", "Diesel", 2021, "Azul", 270);

  Carro2.display();

  MotorVehicle Carro3("Ferrari", "Gasoil", 1990, "White", 140);

  Carro3.display();

  MotorVehicle Carro4("Hyundai", "Gasoil", 2005, "Black", 160);

  Carro4.display();
}