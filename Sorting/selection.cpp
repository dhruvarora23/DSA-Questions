#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int i, j, min_index; 

    for(i = 0; i < n; i++){
        min_index = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }


        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

void print2(int arr[], int n){
    for(int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {12, 11, 14, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    print2(arr, n);
}