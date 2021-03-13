#include <iostream>
using namespace std;

void findTwoNonRepeatingNumber(int arr[], int size);

int main(){
    int arr[] = {1, 1, 3, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findTwoNonRepeatingNumber(arr, n);
    return 0;
}

void findTwoNonRepeatingNumber(int arr[], int size) {
    int Xor = arr[0];
    for(int i = 1; i < size; i++)
        Xor ^= arr[i];
    int rightMostSignificantBit = Xor & ~(Xor -1);
    //divide array by rightMostSignificantBit of xor
    int x1 = 0; //xor of 1 list of divided array
    int x2 = 0; //xor of 2nd list of divided array
    for(int i = 0; i < size; i++){
        if(arr[i] & rightMostSignificantBit){
            x1 ^= arr[i];
        }
        else{
            x2 ^= arr[i];
        }
    }
    int f = Xor ^ x1;
    int s = f ^ Xor;
    cout<< "\nFirst Number = " << f;
    cout<< "\nSecond Number = " << s;
}