#include <iostream>
using namespace std;

int main(){
	int t = 0;
    
    int freshness[1000]; 
    int cost[1000];
    // cout << "Enter number of Test Cases: " << endl;
    cin >> t; 
    
    for(int i = 0; i < t; i++){
        int total = 0;
        int n; 
        int minimumfreshness;
        // cout << "Enter number of items" << endl;
        cin >> n >> minimumfreshness; 
        for(int i = 0; i < n; i++){
            // cout << "Enter Freshness: " << endl;
            cin >> freshness[i];
        }

        for(int i = 0; i <= n-1; i++){
            // cout << "Enter Cost" << endl;
            cin >> cost[i];
        }

        for(int i = 0; i < n; i++){
            if(freshness[i] >= minimumfreshness){
                total = total + cost[i];
            }
        }
        cout << total;

}
}