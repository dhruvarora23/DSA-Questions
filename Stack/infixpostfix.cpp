#include <iostream>
#include <string.h>
using namespace std; 

int precedence(char c){

    if(c == '^'){
        return 3;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

typedef struct{
    char element[100];
    int top;
}stack;

stack init(){
    stack s;
    s.top = -1;
    return s;
}

stack push(stack s, char x){
    ++s.top;
    s.element[s.top] = x;
}

stack pop(stack s){
    --s.top;
}

int isEmpty(stack s){
    return(s.top == -1);
}

int main(){
    stack s;
    char expr[100] = "a + (b / c)";
    s = init();
    string res;

    int i = 0; 

    while(expr[i]){
        if(expr[i]>='a' && expr[i] <= 'z'){
            res = res + expr[i];
        }
        else if(expr[i] == '('){
            s = push(s, expr[i]); 
        }
        else if(expr[i] == ')'){
            while(!isEmpty(s) && s.element[s.top] != '('){
                res = res + s.element[s.top];
                s = pop(s);
            } 
            if(!isEmpty(s)){
                s = pop(s);
            }
        }
        else if(expr[i] == ' '){
            continue;
        }
        else{
            while(!isEmpty(s) && precedence(s.element[s.top] > precedence(expr[i]))){
                res = res + s.element[s.top];
                s = pop(s); 
            }
            s = push(s, expr[i]);
        }
    }

    while(!isEmpty(s)){
        res = res + s.element[s.top];
        s = pop(s);
    }

    cout << res; 

}