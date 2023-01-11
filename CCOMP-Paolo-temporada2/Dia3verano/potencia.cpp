#include <iostream>

using namespace std;

int potencia (int base, int exponente){

    int result = 1;

    for (int i = 0; i < exponente; i++) {
        result = result * base;
    }

    return result;
}

int main() {

    cout << potencia(2, 3) << endl;

    return 0;
}