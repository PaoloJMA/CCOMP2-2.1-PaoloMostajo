#include <iostream>
using namespace std;

int main(){
    
    int numero = 0;
    cout<<"Ingrese un número de 4 cifras: "<< endl;
    cin>>numero;
    
    int I1 = numero / 1;
    int I2 = numero / 10;
    int I3 = numero / 100;
    int I4 = numero / 1000;
    cout<< I4 << I3 << I2 << I1;
}
"no puedo usar cadenas aún ;("