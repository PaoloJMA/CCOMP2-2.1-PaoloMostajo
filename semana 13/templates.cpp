#include <iostream>

using namespace std;
/*
int sum(const double x, const double y){
    return x + y;
}

template <typename T>
T sum(const T a, const T b) {
    return a + b;
}
*/

template <typename T, typename U>
T sum(const T a, const U b) {
    return a + b;
}


int main(){
    cout << sum<int>(1,2) << endl;
    cout << sum<float>(1.21,2.43) << endl;
    cout << sum<string>("hola"," mundo") << endl;
    cout << sum<int,float>(1,2.43) << endl;
    return 0;
}
                                                                                                                                                                                  