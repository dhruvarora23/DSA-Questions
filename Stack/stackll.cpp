#include <iostream>
#include <stdlib.h>
using namespace std; 

struct node{
    int data; 
    node *next;
};

node *top = NULL;

void transversal(node *ptr){
    while(ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

}

int isEmpty(struct node *top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(node *top){
    node *p = new node;
    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

node *push(node *top, int x){
    if(isFull(top)){
        cout<< "Stack Overflow" << endl;
    }
    else{
        node *n = new node; 
        n->data = x;
        n->next = top; 
        top = n; 
        return top;

    }
}

int pop(node **top){
    if(isEmpty(*top)){
        cout << "Stack Underflow" << endl;
    }
    else{ 
        node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main(){
    
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 99);
    transversal(top);
    int element = pop(&top);
    cout << "Element Popped is: " << element << endl;
}