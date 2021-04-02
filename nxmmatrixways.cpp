//Count the number of ways in r*c matrix 
#include<iostream>

int findWay(int, int);

int main(){
    std::cout<<findWay(2, 3);
    return 0;
}

int findWay(int r, int c){
    if(r == 1 || c == 1)
        return 1;
    return findWay(r-1, c) + findWay(r, c-1);
}