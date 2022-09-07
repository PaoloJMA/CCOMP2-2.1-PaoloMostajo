/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int radio = 0;
    float valorpi = 3.14159;
    cout<<"Ingrese su radio: ";
    cin>>radio;
    cout<<"Su diametro es: "<< radio*2 << endl;
    cout<<"Su área es: "<< (radio*radio)*valorpi;
    return 0;
}
