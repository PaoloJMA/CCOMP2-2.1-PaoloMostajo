#include <iostream>
#include <string>

using namespace std;

int main(){

    int lado1{0};
    int lado2{1};
    int lado3{2};
    int lado4{3};
    int lado5{4};
    int a = lado1^3;
    int b = lado2^3;
    int c = lado3^3;
    int d = lado4^3;
    
    cout << "Face lenght of cube (cm)" << "\t" << "Surface area of cube (cm2)" << "\t" << "Volume of cube(cm3)" << endl;
    cout << lado1 << "\t\t\t\t " << "0" << "\t\t\t\t" << "0" << endl;
    cout << lado2 << "\t\t\t\t " << 6 * (lado2 ^2) << "\t\t\t\t " << a << endl;
    cout << lado3 << "\t\t\t\t " << 6 * (lado3 ^2) << "\t\t\t\t " << b << endl;
    cout << lado4 << "\t\t\t\t " << 6 * (lado4 ^2) << "\t\t\t\t " << c << endl;
    cout << lado5 << "\t\t\t\t " << 6 * (lado5 ^2) << "\t\t\t\t " << d << endl;

    return 0;

}