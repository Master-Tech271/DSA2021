//find the sum of n natural number using recursion
#include<iostream>

int sumOfNaturalNumbers(int);

int main(){
    std::cout<<sumOfNaturalNumbers(10);
}

int sumOfNaturalNumbers(int n){
    if(n == 1)
        return 1;
    return sumOfNaturalNumbers(n-1) + n;
}