#include <iostream>
using namespace std;

/*

typedef struct{
    int element[100];
    int top;
} stack;

stack init(){
    stack s;
    s.top = -1;
    return s;
}

int isEmpty(stack s){
    if(s.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(stack s){
    if(s.top == 10-1){
        return 1;
    }
    else{
        return 0;
    }
}

void print2(stack s){
    for(int i = s.top; i>= 0; i--){
        cout << s.element[i] << " ";
    }
    cout << endl;
}

stack push(stack s, int val){
    if(isFull(s)){
        cout << "Stack is Full" << endl;
    }
    else{
        ++s.top;
        s.element[s.top] = val;
    }
    
    return s;
}

stack pop(stack s){
    if(isEmpty(s)){
        cout << "Stack is Empty" << endl;
    }
    else{
        --s.top;
    }

    return s;
}

int main(){
    stack s; 
    s = init();
    s = push(s, 10);
    s = push(s, 9);
    s = push(s, 8);
    s = push(s, 7);
    print2(s);
    cout << endl;

    s = pop(s);
    s = pop(s);
    s = pop(s);
    print2(s);
    cout << endl;
}

*/

struct node{
    int data; 
    node *next;
};

node *top == NULL;

int isEmpty(node *top){
    if(top == NULL){
        cout << "Empty"
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

void transversal(node *top){
    while(top != NULL){
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

node *push(node *top, int val){
    if(isFull(top)){
        cout << "Stack Overflow";
    }
    else{
        node *n = top;
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(node **top){
    if(isEmpty(*top)){
        cout << "Empty" << endl;
    }
    else{
        node *n 
    }
}

int main(){

}