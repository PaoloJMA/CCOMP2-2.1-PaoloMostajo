#include <iostream>
#include <string>
using namespace std;

int main(){
    int multiplos = 0;
    int contador = 1;
    while(contador < 1000)
    {
        if (contador % 3 == 0 || contador % 5 == 0){
            multiplos = multiplos + contador;
            contador = contador + 1;
        }
        else{
            contador = contador + 1;
        }
    }
    cout<<multiplos;
    return 0;
}