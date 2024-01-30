#include <iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size = 0;

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};


void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left < n && arr[largest] < arr[left]){
        largest = left; 
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        int x = arr[largest];
        arr[largest] = arr[i];
        arr[i] = x;

        heapify(arr, n, largest);
    }

}

void heapsort(int arr[], int n){
    int t = n;
    while(t>1){
        int x = arr[t];
        arr[t] = arr[1];
        arr[1] = x;
        t--;

        heapify(arr, t, 1);
    }
}

int main(){
    heap h;

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for(int i = n/2; i>0; i--){
        heapify(arr, n, i);
    }
    
    cout << "printing the array now" << endl;

    for(int i = 1; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    heapsort(arr, n);

    cout << "printing the array after heap sort: " << endl;

    for(int i = 1; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}