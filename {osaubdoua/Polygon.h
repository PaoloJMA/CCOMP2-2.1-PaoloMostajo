#ifndef __POLYGON_H__
#define __POLYGON_H__
#include <iostream>


using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
    Polygon (int a, int b) : width(a), height(b) {}
    virtual int area (void)=0;
    void printarea(){
        std::cout << this->area() <<endl;
    }
    virtual void print()const{
        std::cout<<"width: "<<width<<"\theight: "<<height<<endl;
    }
    int getWidth() {
        return this->width;
    }
    int getHeight() {
        return this->height;
    }
};
#endif