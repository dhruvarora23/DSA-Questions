#include <iostream>
using namespace std;

int main() {
	int t = 0;
    int difficulty[1000]; 
    // cout << "Enter number of Test Cases: " << endl;
    cin >> t; 
    
    for(int i = 0; i < t; i++){
        int n; 
        // cout << "Enter number of problems" << endl;
        cin >> n; 
        for(int i = 0; i < n; i++){
            // cout << "Enter Difficulty: " << endl;
            cin >> difficulty[i];
        }

        for(int i = 1; i < n; i++){
            if(difficulty[i] < difficulty[i-1]){
                cout<<"no" << endl;
                break;
            }
            if(i==n-1){
                cout<<"yes" << endl;
            }
        }
        
    }

}
