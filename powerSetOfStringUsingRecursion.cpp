#include <iostream>
#include <string>
using namespace std;

void powerSet(string str, int i = 0, string result = "") {
    if(i == str.length()){
        cout<<result << endl;
        return;
    }
    powerSet(str, i + 1, result + str[i]);
    powerSet(str, i + 1, result);
}

int main(){
    string str = "abc";
    powerSet(str);
    return 0;
}