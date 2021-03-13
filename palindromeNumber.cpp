#include <iostream>

void palindromeNumber(int n){
    int res = 0;
    int a = n;
    while(n > 0){
        res = res * 10 + (n  % 10);
        n = n/10;
    }
    if(res == a)
        std::cout<< "Number is Palindrome";
    else
        std::cout<< "Number is not Palindrome";
}
int main(){
    palindromeNumber(111);
    return 0;
}