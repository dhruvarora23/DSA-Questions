#include <iostream>
using namespace std;


int main(){
    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i <= n; i++){
        cin >> arr[i]; 
    }

    
    int min = arr[0];

    for(int i = 0; i <= n; i++){

        if (min >= arr[i]){
            min = arr[i];
        }
    }

    cout << min;
    

}