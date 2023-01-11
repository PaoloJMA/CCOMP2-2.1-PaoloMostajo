#include <iostream>
#include <string>
using namespace std;

int main(){
    int mult = 0;
    int tmp = 1;

    while(tmp < 1000) {
        if (tmp % 3 == 0 || tmp % 5 == 0) {
            mult = mult + tmp;
            tmp++;
        }
        else{
            tmp++;
        }
    }

    cout << mult;
    
    return 0;
}