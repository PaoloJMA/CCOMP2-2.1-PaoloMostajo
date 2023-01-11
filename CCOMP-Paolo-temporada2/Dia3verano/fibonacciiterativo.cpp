#include <iostream>
#include <string>

using namespace std;

int fibonacci(int n) {
    int fibo1 = 1;
    int fibo2 = 1;
    int total = 0;

    for (int i = 0; i < n; i++) {
        total = fibo1 + fibo2;
        fibo2 = fibo1;
        fibo1 = total;
    }
    return total;    
}

int main() {
    int numero = 0;
    cin >> numero;
    cout << fibonacci(numero) << endl;
}

// NO FUNCA