#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;
    int mid = (s + e)/2;

    while(s < e){
        if(key == arr[mid]){
            return mid;
        }

        else if(key > arr[mid]){
            s = mid + 1;
            mid = (s + e)/2;
        }
        
        else if(key < arr[mid]){
            e = mid - 1;
            mid = (s+e)/2;
        }
    }
    
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6; 
    int key = 5;

    cout << "The index at which the key can be found is " << binarysearch(arr, size, key);
}