#include <iostream>
#include <string>

using namespace std;

bool es_primo(int x) {
    
    for(int i = 2; i <= x/2; i++){

        if ( x % i == 0){
            return false;
        }
    }

    return true;

}

int main() {

    int x = 2;

    for (int i = 3; ; i += 2) {

        if(es_primo(i)) {
            x++;
        }
        if(x > 10001){
            cout << i << endl;
            return 0;
        }

    }

}