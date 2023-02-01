/*
(a) (1 point) Implemente constructor sin argumentos (por defecto) y constructor con
argumentos (que reciba un arreglo y su tama˜no para inicializar las variables miembro)
(b) (1 point) Constructor copia y el destructor.
(c) (1 point) Implemente una funci´on para insertar un elemento al final.
(d) (1 point) Implemente una funci´on para insertar en cualquier posici´on.
(e) (1 point) Implemente una funci´on para eliminar un elemento.
(f) (1 point) Considere tambien la funci´on principal main en la cual se debe instanciar
un objeto de ArrayPolygons y usar sus m´etodos.
*/


#ifndef __POLYGON_H__
#define __POLYGON_H__
#include <iostream>


using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
    Polygon (int a, int b) : width(a), height(b) {


    }
    //virtual int area (void)=0;
    //void printarea(){
    //    std::cout << this->area() <<endl;
    // }
    //virtual void print()const{
    //    std::cout<<"width: "<<width<<"\theight: "<<height<<endl;
    //}
    //int getWidth() {
    //    return this->width;
    //}
    //int getHeight() {
    //    return this->height;
    //}
};
#endif