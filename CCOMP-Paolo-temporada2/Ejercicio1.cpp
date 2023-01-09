#include <iostream>

using namespace std;

int main(){
    char val = '150';
    if (static_cast<int>(val) <= 97 && static_cast<int>(val) >= 127)
        cout << "Es minuscula" << endl;
    else 
        cout << "No es minuscula" << endl;

    int a;
    int b;

    cout << "Ingrese dos número para posteriormente sumarlos: " << endl;

    cin >> a;
    cin >> b;
    
    int suma = a + b;
    
    cout << suma << endl;
    
}