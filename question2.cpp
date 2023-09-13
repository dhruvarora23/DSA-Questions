#include <iostream>
using namespace std; 

int main(){

    int nums[100];
    int num2[100] = {};
    int size;
    int j = 0;
    cout << "Enter Size" << endl; 
    cin >> size;


    for(int i = 0; i < size; i++){
        cout << "Enter Elements" << endl;
        cin >> nums[i];
    }

    for(int i = 0; i < size-1; i++){
        if(nums[i] != nums[i+1]){
            num2[j] = nums[i];
            ++j;
        }
    }
    num2[j] = nums[size-1];

     for(int i = 0; i <= j; i++){
        cout << num2[i];
    }

    return 0;
}