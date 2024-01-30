#include <iostream>
#include <string.h>
using namespace std; 

int main(){
    string s = "dhruv";
    string y;   

    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            y += s[i];
        }
    }

    cout << y;
}   