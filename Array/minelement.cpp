// program to find the minimum element in an array 

#include <iostream>
using namespace std; 


int minelement(int arr[], int size){
    int min = arr[0];

    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int arr[5] = {2, 9, 3, 4, 5};
    int size = 5; 

    cout << "The minimum element in the array is " << minelement(arr, size);
    return 0;
}