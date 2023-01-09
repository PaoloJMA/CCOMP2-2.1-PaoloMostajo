#include <iostream>

using namespace std;

int main(){
    int a;
    int b;

    a = 10;
    b = 15;

    float suma = a + b;
    float resta = a - b;
    float multiplicación = a * b;
    float división = a / b;
    float mod = a % b;
    
    cout << "La suma es : " << suma << endl;
    cout << "La resta es : " << resta << endl;
    cout << "La multiplicación es : " << multiplicación << endl;
    cout << "La división es : " << división << endl;
    cout << "El módulo es : " << mod << endl;

    return 0;
}