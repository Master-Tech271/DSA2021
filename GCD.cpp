//Greatest common Divisor
#include<iostream>

int GCD(int, int);

int main(){
    int a = 32;
    int b = 85;
    std::cout<< GCD(a, b);
    return 0;
}

int GCD(int a, int b){
    return (a % b == 0 ? b : GCD(b, a%b));
}