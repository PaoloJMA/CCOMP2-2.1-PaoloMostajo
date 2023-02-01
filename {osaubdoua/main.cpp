#include <iostream>
#include <vector>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

void print4(Polygon* arr){
            cout << "Width: " << arr->getWidth() << "\tHeight: "<<arr->getHeight();
}

void printwidth(vector<Polygon*> width){
    for (Polygon* v:width)
        v->print();
}

void printheight(vector<Polygon*> height){
    for (Polygon* v:height)
        v->printarea();
}
int main(){
    Rectangle r1(1,2);
    Rectangle r2(3,5);
    Triangle t1(6,7);
    

    vector<Polygon*>c{&r1,&r2,&t1};

    return 0;
}