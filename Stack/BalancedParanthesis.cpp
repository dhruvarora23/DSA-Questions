#include <iostream>
using namespace std; 
#include <string.h>

typedef struct{
    char element[100];
    int top; 
}stack;

stack init(){
    stack s; 
    s.top = -1; 
    return s; 
}

int isFull(stack s){
    return(s.top == 100 - 1);
}

int isEmpty(stack s){
    return(s.top == -1);
}

stack push(stack s, char x){
    if(isFull(s)){
        cout << "overflow";
    }
    else{
        ++s.top;
        s.element[s.top] = x;
    }

    return s;
}

stack pop(stack s){
    if(isEmpty(s)){
        cout << "Underflow";
    }
    else{
        --s.top;
    }

    return s;
}

int top(stack s){
    return s.top;
}

void print(stack s){

    if(isEmpty(s)){
        cout << "Empty";
    }
    else{
        for(int i = 0; i <= s.top; i++){
            cout << s.element[i]; 
        }
    }

    
}

int main(){
    stack s; 
    s = init();
    char expr[100] = "5 + ((1+2) + (2+3))";

    int i = 0;

    while(expr[i]){
        if(expr[i] == '('){
            s = push(s, expr[i]);
        }
        else if(expr[i] == ')'){
            if(!isEmpty(s) && s.element[s.top] == '('){
                s = pop(s);
            }
            else{
                break;
            }
        }
        i++;
    }

    if(isEmpty(s)){
        cout << "Balanced Paranthesis\n";
    }
    else{
        cout << "Unbalanced Paranthesis\n";
    }


    print(s);
}