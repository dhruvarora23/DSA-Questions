#include <iostream>
using namespace std; 


int linearsearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {2, 6, 3, 4, 5};
    int size = 5;
    int key = 6;

    cout << "The index at which this element is found is " << linearsearch(arr, size, key);
}