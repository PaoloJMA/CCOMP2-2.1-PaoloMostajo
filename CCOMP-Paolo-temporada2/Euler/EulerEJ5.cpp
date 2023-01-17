#include <iostream>
using namespace std;

unsigned long long mcd(unsigned long long a, unsigned long long b) {
  while (a != 0) {
    unsigned long long c = a;
    a = b % a;
    b = c;
  }
  return b;
}
unsigned long long mcm(unsigned long long a, unsigned long long b) {
      return a * (b / mcd(a, b));
}
int main() {
    int numero = 20;
    unsigned long long total = 1;
    for (unsigned int i = 2; i <= numero; i++)
      total = mcm(total, i);
    cout << total << endl;
  return 0;
}