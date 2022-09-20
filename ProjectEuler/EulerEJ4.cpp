#include <iostream>
using namespace std;

int main(){
    unsigned int ppalindromo;
    unsigned int pali;
    int numero;
    pali = ppalindromo * 1000;
    pali += ppalindromo/100;
    pali += ((ppalindromo/10)%10)*10;
    pali += (ppalindromo%10)*100;

    for (int x = 2; x < numero / 2; x++) {
        if (numero % x == 0) return false;
    
}