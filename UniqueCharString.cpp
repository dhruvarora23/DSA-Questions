#include <iostream>
#include <string.h>
using namespace std; 

int uniqueChar(string s){
    int arr[26] = {};

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }
    
    for(int i = 0; i < s.length(); i++){
        int num2 = s[i]-'a';
        if(arr[num2]==1)
        {
            return i;
        }
        else{
            return -1;
        }
    }
    
}


int main(){
    string s = "aavbbc";
    cout << uniqueChar(s);
    return 0;
}