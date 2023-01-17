#include <iostream>

int reverse(int n){
    int rev=0;
    int remainder=0;
    while(n!=0){
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }
    return rev;
}
bool isPal(int num){
    if(reverse(num) == num){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int product = 0;
    int greatestPal = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            product = i * j;
            if(isPal(product) && greatestPal==0){
                    greatestPal = product;
                }
            else if(isPal(product) && greatestPal!=0){
                if(product > greatestPal){
                    greatestPal = product;
                    }
                }
            }
        }
        std::cout << greatestPal << std::endl;
        return 0;
}

