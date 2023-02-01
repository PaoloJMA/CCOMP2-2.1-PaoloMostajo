#include <iostream>

using namespace std;

class Integrer {
    public:
        int val;
        Integrer() {
            val = 0; cout << "Integrer default constructor" << endl;
        }
};

class IntegrerWrapper {
    public:
        Integrer val;
        IntegrerWrapper() {
            cout << "IntegrerWrapper default constructor" << endl;
        }
};

class Integer {
    public:
        int val;
        explicit Integer(int v) {
            val = v; cout << "constructor with arg " << v << endl;
        }
};

int main() {
    /*
    Integrer arr[3];
    int tam = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0 ; i < tam; i++){
        cout << arr[i].val << endl;
    }
    Integrer *ptr = arr;
    IntegrerWrapper q;
    */
   Integer p(9);
   //Integer q = 5;
    return 0;

}