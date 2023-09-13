#include <iostream>
#include <string.h>
using namespace std; 

int reverseString(string s){

    for(int i = s.length(); i >= 0 ; i--){
        cout << s[i];
    }

}

int main(){
    string s = "dhruv arora";
    reverseString(s);

    return 0;
}