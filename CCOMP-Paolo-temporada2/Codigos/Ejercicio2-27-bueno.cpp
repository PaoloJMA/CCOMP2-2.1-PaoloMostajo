#include <iostream>
using namespace std;

int main(){
    char val;
    cout<<"Ingrese un caracter : ";
    cin>>val;

    cout<< static_cast<int>(val)<<endl;

    return 0;

}