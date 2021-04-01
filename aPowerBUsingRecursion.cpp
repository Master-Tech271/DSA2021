//find a^b using recursion
#include<iostream>

int aPowerB(int, int);

int main(){
    std::cout<<aPowerB(2, 3);
    return 0;
}

int aPowerB(int a, int b){
    if(b == 0)
        return 1;
    return aPowerB(a, b-1) * a;
}