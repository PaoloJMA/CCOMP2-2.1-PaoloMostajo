#include <iostream>

using namespace std;

int main(){

    char val = 'a';
    /* ERRORES
    char val = "a";
    char val = "ab";
    */

    cout << sizeof(val)<< endl;
    int valor = static_cast<int>(val);
    cout << valor << endl;
        
    return 0;
}