#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4, 2, 1, 10, 9};
    int n = 5;

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

    return 0;
}