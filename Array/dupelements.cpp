#include <iostream>
using namespace std;

int removingdup(int arr[], int size){

    int arr2[5] = {};
    int index = 0;
    for(int i = 0; i < size-1; i++){
        if(arr[i] != arr[i+1]){
            arr2[index] = arr[i];
            index++;
        }
    }   

    
    for(int i = 0; i < index; i++){
        cout << arr2[i];
    }

}       

int main(){
    int arr[5] = {1, 1, 2, 0, 0};
    int size = 6;

    removingdup(arr, size);


}