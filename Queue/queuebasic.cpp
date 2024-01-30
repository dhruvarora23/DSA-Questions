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


int isEmpty(queue q){
    if(q.f == -1 || q.f > q.r){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(queue q){
    if(q.r == 10 - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int front(queue q){
    if(isEmpty(q)){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "The front element is : " << q.element[q.f];
    }

}


queue enqueue(queue q, int data){
    if(isFull(q)){
        cout << "queue overflow" << endl;
    }
    else if(isEmpty(q)){
        q.f = q.r = 0;
        q.element[q.r] = data;
    }
    else{
        ++q.r;
        q.element[q.r] = data;
    }

    return q;
}

queue dequeue(queue q){
    if(isEmpty(q)){
        cout << "queue underflow" << endl;
    }
    else{
        q.f++;
        return q;
    }
}

void print2(queue q){
    for(int i = q.f; i<=q.r; i++){
        cout << q.element[i] << endl;
    }
}

int main(){
    queue q;
    q = init();
    q = enqueue(q, 1);
    q = enqueue(q, 2);
    q = enqueue(q, 3);
    q = enqueue(q, 4);
    q = enqueue(q, 5);

    print2(q);

    q = dequeue(q);
    cout << endl;
    print2(q);
}