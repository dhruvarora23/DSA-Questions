#include <iostream>
using namespace std; 

int insertelement(int arr[], int size, int pos, int element){

    for(int i = size - 1; i >= pos; i--){
        arr[i+1] == arr[i];
    }
    arr[pos] = element;
    size ++;

    for(int i = 0; i < size; i++){
        cout << arr[i];
    }

}

int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos;
    int element = 10; 
    cout << "Enter the index you want to insert element in: " << endl;
    cin >> pos; 

    insertelement(arr, size, pos, element);
}