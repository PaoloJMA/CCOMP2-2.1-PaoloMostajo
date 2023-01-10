#include <iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 0;
    
    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "A = " << a << endl;

    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "B = " << b << endl;

    int suma = a + b;
    if (suma % 2 != 0)
        cout << "El número es impar";
    else
        cout << "El número es par";

    return 0;
}