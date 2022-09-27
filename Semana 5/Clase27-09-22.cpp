#include <iostream>
#include "Point.h"
using namespace std;



int suma (int a, int b) {
    return a + b;
}

void imprimir(int a) {
    cout << "El entero es : " << a << endl;
}

void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}

void modificarPunto (int _x, int _y, Point &p){
    p.setX(_x);
    p.setY(_y);
}

void intercarmbiarPunto (int _x, int _y, Point &p){
    p.setY(_x);
    p.setX(_y);
}
void intercambioEnteros(int &a, int &b){
    int c = a;
    a = b;
    b = c;
    cout << a << endl;
    cout << b << endl;
}

int main(){
    int result = suma (5,6);

    cout << suma (5,6) << endl;

    imprimir(5);

    Point p1(5,5);
    imprimirPoint(p1);
    modificarPunto(9 , 9, p1);
    imprimirPoint(p1);
    intercarmbiarPunto( 6, 5, p1);
    imprimirPoint(p1);
    intercambioEnteros(20, 10);
    return 0;

}