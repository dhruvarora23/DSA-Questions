#include <iostream>
using namespace std; 

typedef struct{
    int element[10];
    int top;
}stack;

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

stack push(stack s, int value){
    if(isFull(s)){
        cout << "stack overflow";
    }
    else{
        ++s.top;
        s.element[s.top] = value;
    }

    return s; 
}

stack pop(stack s){
    if(isEmpty(s)){
        cout << "stack underflow";
    }
    else{
        s.top--;
        return s;
    }
 
}

void print2(stack s){
    for(int i = s.top; i >= 0; i--){
        cout << s.element[i] << endl;
    }
}

int main(){
    stack s; 
    s = init();
    s = push(s, 10);
    s = push(s, 11);
    s = push(s, 12);
    print2(s);

    s = pop(s);
    cout << "Element popped" << endl;
    print2(s);

}