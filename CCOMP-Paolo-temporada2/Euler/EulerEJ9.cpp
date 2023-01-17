#include <iostream>


using namespace std;

int main() {
    int count = 0;
    int a = 1;
    int b = 2;
    int c = 3;
    int total;

    for (a=1;a<b;a++) {
        for (b=2;b<c;b++) {
            for (c=3;c<=1000;c++) {
                total = a+b+c;

                if (total == 1000 && a*a + b*b == c*c) {
                    cout << a*b*c << endl;
                    cout << a << "\t" << b  << "\t" << c << endl;
 
                }
            }
        }
    }

    return 0;
}