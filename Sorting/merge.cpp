#include <iostream>
using namespace std; 

void merge(int arr[], int mid, int low, int high){
    int i, j, k, B[100];
    i = low;
    j = mid + 1; 
    k = low;

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            B[k] = arr[i];
            i++; 
            k++;
        } 
        else{
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        B[k] = arr[i];
        i++;
        k++;
    }
    while(j <= high){
        B[k] = arr[j];
        k++; 
        j++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = B[i];
    }
}

void print2(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void mergesort(int arr[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, mid, low, high); 
    }
}

int main(){
    int arr[] = {3, 8, 2, 4, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n-1); 
    print2(arr, n);
}