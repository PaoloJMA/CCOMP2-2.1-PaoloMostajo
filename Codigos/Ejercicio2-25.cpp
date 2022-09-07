#include <iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    
    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "A = " << a << endl;

    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "B = " << b << endl;

    cout << "Ingrese el tercer valor: ";
    cin >> c;
    cout << "C = " << c << endl;
    
    if (a%b == 0 && a%c == 0) {
        cout<<"A es divisor o factor de B y C";
    }
    else if (b%a == 0 && b%c == 0) {
        cout<<"B es divisor o factor de A y C";
    }
    else if (c%a == 0 && c%b == 0) {
        cout<<"C es divisor o factor de A y B";
    }
    
    
    
    
    
    
    
    }