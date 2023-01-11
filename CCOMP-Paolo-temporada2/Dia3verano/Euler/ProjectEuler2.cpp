#include <iostream>
#include <string>

using namespace std;

int main(){
    unsigned int final;
    unsigned long long numero1 = 1;
    unsigned long long numero2 = 2;
    unsigned long long total = 0;
    cin >> final;
    while(numero2 <= final){
        if (numero2 % 2 == 0){
            total += numero2;
        }
        unsigned long long siguiente = numero1 + numero2;
        numero1 = numero2;
        numero2 = siguiente;
    }
    return 0;
}