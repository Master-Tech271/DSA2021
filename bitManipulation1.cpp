/*
 C++ Program to find an element of an array that appears only once using O(n) time complexity with O(1) space
 This Program is written by Mohd Umar (Master-Tech271,786 an Umar17605) 
*/
#include <iostream>
using namespace std;

int findSingleElement(int arr[], int sizeOfArray);

int main(){
    int arr[] = {1, 2, 3, 4, 3, 1, 2, 4, 9, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]); //length of arr
    cout << "output -: "
         << findSingleElement(arr, n); 
    return 0;
}

int findSingleElement(int arr[], int sizeOfArray){
    int res = arr[0];
    for(int i = 1; i < sizeOfArray; i++)
        res = res ^ arr[i];
    return res;
}