#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int leftIndex, int rightIndex){
    if(leftIndex >= rightIndex)
        return true;
    if(str[leftIndex] != str[rightIndex])
        return false;
    return isPalindrome(str, leftIndex + 1, rightIndex - 1);
}

string Converter(bool n){
    return n == true ? "String Is Palindrome" : "String Is Not Palindrome";
}

int main(){
    string str = "abccba";
    cout<<Converter(isPalindrome(str, 0, str.size() - 1));
    return 0;
}