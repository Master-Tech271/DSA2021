//Program to find a^b
// a^b = (a^2)^(b/2), if b is even
// a^b = a*(a-1)^b, if b is odd
#include<iostream>

long power(long, long);

int main(){
    std::cout<<power(2, 2);
    return 0;
}

long power(long a, long b){
    long result = 1;
    while(b > 0){
        //check b is odd
        if((b & 1) != 0){
            result = result * a;
        }
        a = a * a;
        b = b >> 1; //binary right shift by 1 means divide by 2
    }
    return result;
}