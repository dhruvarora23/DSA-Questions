#include <iostream>
using namespace std;
#define MAXLEN 100

typedef struct{
    char element[MAXLEN];
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
        cout << S.element[S.top];
        --S.top;
    }

    return S;
}

void print2(stack S){
    for(int i = S.top; i >= 0; --i){
        cout << S.element[i];
    }
}

int main(){
    stack S;
    S = init();
    char ch[100] = "datastructure";
    int i = 0;

    while(ch[i]){
        S = push(S, ch[i]);
        i++;
    }

    i = 0;

    while(ch[i]){
         S = pop(S);
         i++;
    }
    
    

}