#include<iostream>

long aPowerBModN(long, long, long);

int main(){
    std::cout<<aPowerBModN(3, 5, 2);
    return 0;
}

long aPowerBModN(long a, long b, long n){
    long result = 1;
    while(b > 0){
        if((b & 1) != 0){
            //std::cout<<"result = " << result << ", " << result << " % " << n << " => " << result %n << std::endl;
            //result = (result % n * a % n ) % n;
            result = (result * a % n) %n; //because result % n = result
        }
        a = (a % n * a % n) % n;
        b = b >> 1;
    }
    return result;
}

/*
    Example -> 
    a = 3;
    b = 5;
    n = 2;

    (a ^ b) % n = (a % n * b % n) % n
                = (3 % 2 * 5 % 2) % 2
                = (1 * 1) % 2
                = 1 % 2
                = 1
*/