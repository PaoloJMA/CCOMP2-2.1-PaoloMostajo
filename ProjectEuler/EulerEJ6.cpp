#include <iostream>
using namespace std;
int main() {
    unsigned long long x;
    cin >> x;
    unsigned long long sumacuadrada = 0; 
    unsigned long long sumaycuadrado = 0; 

    for (unsigned long long i = 1; i <= x; i++) {
      sumacuadrada += i;
      sumaycuadrado += i*i;
    }
    cout << (sumacuadrada - sumaycuadrado) << endl;
  
  return 0;
}