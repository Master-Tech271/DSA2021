#include <bits/stdc++.h> 
using namespace std;

int find(int arr[], int length, int k){
    int INT_SIZE = 8 * sizeof(int); //convert byte to bits (1 byte == 8 bits)
    int count[INT_SIZE]; //array of size of one int type bits
    memset(count, 0, sizeof(count)); //assign 0 value all the indexes of count array
    for(int i = 0; i < INT_SIZE; i++)
        for(int j = 0; j < length; j++)
            if((arr[j] & (1 << i)) != 0)
                count[i] += 1;
    int res = 0;
    for (int i = 0; i < INT_SIZE; i++) {
        res += (count[i] % k) * (1 << i);
    }
    return res;
}

int main(){
    int arr[] = {1,1, 2,2,3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout<< find(arr, length, k);
    return 0;
}

