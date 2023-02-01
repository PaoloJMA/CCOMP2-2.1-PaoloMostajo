#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main() {
    Point a(2,3);
    Point b(5,6);
    Point c(8,9);

    PointArray abc(3);
    abc.setData(0, a);
    abc.setData(1, b);
    abc.setData(2, c);
    abc.print();
    a.print();

    return 0;
}