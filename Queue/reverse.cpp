#include <iostream>
#include <queue>
using namespace std;

void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<endl;
        temp.pop();
    }
    cout << '\n';
}

void reverse(queue<int> &q){

    if(q.empty()){
        return;
    }
    
    int d = q.front();
    q.pop();
    reverse(q);
    q.push(d);
}

int main(){
    queue<int> q; 
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);

    print_queue(q);

    q.pop();
    
    print_queue(q);

    reverse(q);
    print_queue(q);
}