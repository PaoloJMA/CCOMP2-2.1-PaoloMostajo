#include <iostream>
using namespace std;
int main() {
    unsigned long long numero;
    cin >> numero;
    for (unsigned long long factor = 2; factor * factor <= numero; factor++){
      while (numero % factor == 0 && numero != factor) 
        numero /= factor;
    }
    cout << numero << endl;
    return 0;
}
  