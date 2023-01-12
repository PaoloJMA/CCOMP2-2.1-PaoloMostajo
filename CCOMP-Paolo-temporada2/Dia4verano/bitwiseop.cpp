#include <iostream>

using namespace std;

bool potenciade2(int num) {
    return (!(num & (num - 1)));
}

void intercambio(int &a, int &b) {

}

int main() {

    cout << potenciade2(8);
    
    return 0;
}