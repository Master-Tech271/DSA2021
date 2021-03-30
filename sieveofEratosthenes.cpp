#include <bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes(int);
string result(bool i);
int main(){
    int n = 15;
    sieveOfEratosthenes(n);
    return 0;
}

void sieveOfEratosthenes(int n){
    //first we create array of boolean with n size
    bool arr[n];
    //all the array elements value set to true
    memset(arr, true, n + 1);
    //then, explicity arr[0] and arr[1] value set to false because we know that 0 and 1 is not a prime number
    arr[0] = false;
    arr[1] = false;
    for(int i = 2; i * i <= n; i++){
        for(int j = 2*i; j <= n; j += i)
            arr[j] = false;
    }
    cout<<"\n\n\tThis Program is Written By Mohd Umar" << "\n\tFind Prime Numbers Using Sieve of Eratosthense" << endl;
    for(int i = 0; i <= n; i++)
        cout<<i << " : " << result(arr[i]) << endl;
}
//to convert 1 to true and 0 to false
string result(bool i){
    return i == 1 ? "True" : "False";
}