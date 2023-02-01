#include <iostream>

using namespace std;

void swap2(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void insertion(int *x, int tam) {
    int *i,*fin = x + tam;
    for ( i = x + 1; i < fin ; i++,fin--)
        if(*i < *(i-1))
            swap2(x, i);

}
void printArray(const int arr[], const int tam){ //PrintArrayIterativo
    cout << "Los elementos del arreglo son: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {

    int array[] = {2,6,7,8,1};
    insertion(array, 5);
    printArray(array, 5);
    
}