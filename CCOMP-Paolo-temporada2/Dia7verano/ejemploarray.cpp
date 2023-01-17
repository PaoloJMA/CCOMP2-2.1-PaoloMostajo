#include <iostream>

using namespace std;

int main() {

    int array[4];

    array[0] = 0;
    
    array[1] = 10;
    
    array[2] = 20;
    
    array[3] = 30;

    array[4] = 40; //Esto debería dar error

    array[5] = 50; //Error del compilador de WIndows

    cout << array[4] << endl;
}