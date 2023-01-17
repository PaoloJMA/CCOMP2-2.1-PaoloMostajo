#include <iostream>

using namespace std;

int sumar(const int array[], const int tam) { // Los arrays por defecto son pasados por referencia
    long sum = 0;
    for ( int i = 0; i < tam; sum += array[i++]);
    return sum;
}

void printArray(const int arr[], const int tam){ //PrintArrayIterativo
    cout << "Los elementos del arreglo son: ";
    for (int i = 0; i <= tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArrayRec(const int arr[], const int tam, int i = 0){ //PrintArrayRecursivo
    if (i > tam){
        return;
    } else {
        cout << arr[i] << " ";
        printArrayRec(arr, tam, ++i);
    }

}

void Intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void PrintInvertirArreglo(int arr[], int tam){
    for( int i = (tam); i >= 0; i--){
        cout << arr[i] << " ";
    }
}

void InvertirArreglo(int arr[],const int tam){
    for( int i = 0; i < tam/2; i++){
        Intercambio(arr[i], arr[tam-i-1]);
    }
}

void InvertirArregloRec(int arr[], const int tam, int i = 0){
    if (i == tam/2)
        return;
    Intercambio(arr[i], arr[tam-i-1]);
    InvertirArregloRec(arr, tam, ++i);
}

void OrdenarArreglo(int array[], int tam){
    for(int i = 0; i <= tam; i++){
        for(int j = i + 1; j <= tam; j++){
            if(array[j]< array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr1[] = {8, 3, 4, 1, 9, 7, 2, 6, 5};
    cout << "Suma de elementos: " << sumar(arr, 7) << endl;
    //printArray(arr, 6);
    //printArrayRec(arr, 6);
   // cout << endl;
    //PrintInvertirArreglo(arr, 6);
   // cout << endl;
   // InvertirArreglo(arr, 7);
    //printArray(arr, 6);
    //InvertirArregloRec(arr, 7);
    //printArray(arr, 6);
    //InvertirArregloRec(arr, 7);
   // printArray(arr, 6);
    printArray(arr1, 8);
    OrdenarArreglo(arr1, 8);
    printArray(arr1, 8);
    return 0;
}