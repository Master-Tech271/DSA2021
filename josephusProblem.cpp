//Solve Josephus Problem using recursion
#include<iostream>

int josephus(int, int);

int main(){
    std::cout<<josephus(6, 3);
    return 0;
}

int josephus(int n, int k){
    if(n == 1)
        return 0;
    return (josephus(n-1, k) + k) % n;
}