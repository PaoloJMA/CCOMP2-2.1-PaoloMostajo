#include <iostream>
#include <string>

using namespace std;

int main() {
    int array[4];
    cout << "Por favor ingrese 4 valores enteros: " << endl;

    for (int i = 0; i < 4; i++) {
        cin >> array[i];
    }

    cout << "Los valores en el arreglo son:";

    for(int i = 0; i < 4; i++)
        cout << " " << array[i];

    cout << endl;

    return 0;
}