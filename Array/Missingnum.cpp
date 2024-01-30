#include <iostream>
using namespace std;

int missingnum(int arr[], int size){
    
    int num = 1;

    for(int i = 0; i < size; i++){
        int ans = arr[i+1] - arr[i];
        if(ans > num){
            int missing = (arr[i+1] + arr[i])/2;
            return missing;
        }
    }
}


int main(){

    int arr[5] = {1, 3, 4, 5, 6};
    int size = 5;
    cout << missingnum(arr, size);
    
}