/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    int e;
    cout <<"Ingrese los valores: "<< endl;
    cin >>a;
    cin >>b;
    cin >>c;
    cin >>d;
    cin >>e;

    if (a > b && a > c && a > d && a > e){
        cout <<"Es el valor mas alto: " << a << endl;        
    } else if  (b > a && b > c && b > d && b > e){
        cout <<"Es el valor mas alto: " << b << endl;        
    } else if  (c > a && c > b && c > d && c > e){
        cout <<"Es el valor mas alto: " << c << endl;  
    } else if  (d > a && d > b && d > c && d > e){
        cout <<"Es el valor mas alto: " << d << endl;  
    } else if  (e > a && e > b && e > c && e > d){
        cout <<"Es el valor mas alto: " << e << endl;
    }
    return 0;
}