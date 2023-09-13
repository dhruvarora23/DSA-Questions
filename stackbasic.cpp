#include <iostream>
using namespace std;
#define MAXLEN 100

typedef struct{
    int element[MAXLEN];
    int top;
} stack;


stack init(){
    stack S;
    S.top = -1;
    return S;
}

int isempty(stack S){
    return(S.top == -1);
}

int isfull(stack S){
    return(S.top == MAXLEN - 1);
}

int top(stack S){
    if(isempty(S)){
        cout << "empty stack \n";
    }
    else{
        return S.element[S.top];
    }
}

stack push(stack S, int x){
    if(isfull(S)){
        cout << "overflow";
    }
    else{
        ++S.top;
        S.element[S.top] = x; 
    }

    return S;
}

stack pop(stack S){
    if(isempty(S)){
        cout << "Underflow";
    }
    else{
        --S.top;
        return S;
    }
}

void print2(stack S){
    for(int i = S.top; i >= 0; --i){
        cout << S.element[i];
    }
}

int main(){
    stack S;
    S = init();
    S = push(S, 10);
    S = push(S, 1);
    cout << "Current Stack: ";
    print2(S);
    cout << endl;
    S = pop(S);
    cout << "Current Stack: ";
    print2(S);
    cout << endl;
    cout << "Top: " << top(S);
}