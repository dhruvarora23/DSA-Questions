#include <iostream>
using namespace std; 

struct node{
    int data;
    node *next;
    node *prev;
};

void transversal(node *temp){
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void searchinll(node *head, int num){
    node *temp = head;
    if (head == NULL) {
        cout << "Empty LL" << endl;
        return;
    }
    while (temp != NULL) {
        if (temp->data == num) {
            cout << "Element found" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Element not found" << endl;
}

node *insertstart(node *head, int num){
    node *temp = new node;
    temp->data = num;
    if(!head){
        head = temp;
        temp->next = NULL;
        temp->prev = NULL;
    }
    else{
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    return head;
}

node *insertend(node *head, int num){
    node *temp = new node;
    temp->data = num;
    node *current = head;

    if(!head){
        head = temp;
        temp->next = NULL;
        temp->prev = NULL;
    }
    else{
        while(current->next != NULL){
            current  = current->next;
        }
        current->next = temp;
        temp->next = NULL;
        temp->prev = current;
    }

    return head;
} 

node *insertvalue(node *head, int num, int value){

    // NOT WORKING

    node *temp = new node; 
    temp->data = num;
    node *current = head; 
    
    while(current->data != value){
        current = current->next;
    }
    if(current == NULL){
        cout << "Element not present";
    }
    else if(current->next == NULL){
        current->next = temp;
        temp->prev = current;
        temp->next = NULL;
    }
    else{
        current->next = temp;
        temp->next = current->next;
        temp->prev = current; 
        
    }

    return head;
}

int main(){
    node *head = new node; 
    node *second = new node; 
    node *third = new node; 
    node *fourth = new node;


    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third; 

    third->data = 12;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    transversal(head);
    searchinll(head, 15);
    head = insertstart(head, 9);
    transversal(head);
    head = insertend(head, 15);
    transversal(head);
    head = insertvalue(head, 20, 13);
    transversal(head);
}
