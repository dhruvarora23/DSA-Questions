#include <iostream>
using namespace std;
    
typedef struct{
    int element[10];
    int f; 
    int r;
}queue;

queue init(){
    queue q; 
    q.f = -1; 
    q.r = -1;
    return q;
}


queue enqueue(queue q, int x){
    if(q.f == (q.r+1) % 10){
        cout << "Overflow" << endl;
    }
    else{
        q.r = (q.r+1) % 10;
        q.element[q.r] = x;
        if(q.f == -1){
            q.f = 0;
        }
    }

    return q;
}

queue dequeue(queue q){
    if(q.f == q.r && q.r == -1){
        cout << "Underflow" << endl;
    }
    else{
        int item = q.element[q.f];
        if(q.f == q.r){
            q.f = q.r - 1;
        }
        else{
            q.f = (q.f + 1) % 10;
        }
    }

    return q;
}

void print2(queue q){
    for(int i = q.f; i <= q.r; i++){
        cout << q.element[i] << endl;
    }
}

int main(){
    queue q; 
    q = init();
    q = enqueue(q, 10);
    q = enqueue(q, 11);
    q = enqueue(q, 12);
    q = enqueue(q, 13);

    print2(q);

    q = dequeue(q);
    cout << endl;

    print2(q);
}