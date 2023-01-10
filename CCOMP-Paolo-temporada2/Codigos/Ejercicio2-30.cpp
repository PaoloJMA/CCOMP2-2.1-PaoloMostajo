#include <iostream>
using namespace std;

int main(){
    float a; float b;   float c;
    cout << "Ingress your weight : ";
    cin >> a ;
    cout << "Ingress your height : ";
    cin >> b ;
    c= a / (b * b);
    cout << "Your body mas index is :" << c << endl;
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;

    return 0;
}