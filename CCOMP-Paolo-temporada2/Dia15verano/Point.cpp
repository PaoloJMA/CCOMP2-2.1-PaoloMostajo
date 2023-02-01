#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int _x, int _y):x(_x), y(_y){};
Point::Point(){};
void Point::SetX(int _x){
    x = _x;
}
void Point::SetY(int _y){
    y = _y;
}
int Point::GetY() const{return y;}
int Point::GetX() const{return x;}
void Point::print() const {
    cout << "El valor x del Punto es: " << GetX() << "\n" << "El valor y del Punto es: " << GetY() << endl; 
}