#include <iostream>
//trailing zeroes of factorial means => Number of zeroes in last of n factorial
int NumberOfTrailingZeroesInFactorial(int f){
    int res = 0;
    for(int i = 5; i <= f; i = i * 5){
        res += f/i;
    }
    return res;
}
int main(){
    std::cout<<NumberOfTrailingZeroesInFactorial(99);
    return 0;
}