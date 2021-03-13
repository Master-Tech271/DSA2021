#include <iostream>
using namespace std;
//find factorial of a number formulae => n! = n * n!;
int fact(int a){
    int r = 1;
    for(int i = 2; i <= a; i++)
        r *= i;
    return r;
}
int main(){
    int f = 5;
    cout<< fact(f);
    return 0;
}

