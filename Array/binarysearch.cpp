#include <iostream>
using namespace std; 


int binarySearch(int arr[], int key, int size){

    int start = 0; 
    int end = size - 1;
    int mid = (start + end)/2;

    for(int i = 0; i < size; i++){
        if(arr[mid] > key){
            end = mid - 1;
            mid = (start + end)/2;
        }
        else if(arr[mid] < key){
            start = mid + 1;
            mid = (start + end)/2;
        }
        else{
            cout << "Key Found" << endl;
            break;
        }
    }

}

int main(){
    int size;
    cout << "Enter Number of elements: " << endl;
    cin >> size;
    int arr[100]; 

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number you want to search: " << endl;
    cin >> key;

    binarySearch(arr, key, size);


}