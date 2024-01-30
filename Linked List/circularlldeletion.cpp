#include <iostream>
#include <stdlib.h>
using namespace std; 

struct node{
    int data;
    node *next;
};

void transversal(node *head){
    node *ptr = head;
    
    do{
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    while(ptr != head);
}

node *deletebeg(node *head){
    node *ptr = head;
    node *p = new node;

    ptr = ptr->next; 

    while(ptr->next != head){
        ptr = ptr->next;
    } 
    p = ptr->next;
    head = head->next;
    ptr->next = head;

    free(p);    
    return head; 
}

node *deleteend(node *head){
    node *current = head; 
    node *p = new node;

    while(current->next != head){
        p = current;
        current = current->next;
    }

    p->next = head;
    free(current);
    return head;
    
}

node *deletevalue(node *head, int value){
    node *current = head; 
    node *p = new node;

    while(current->data != value){
        p = current;
        current = current->next;
    }

    p->next = current->next;
    free(current);
    return head;


}

node *deleteindex(node *head, int index){
    node *current = head;
    node *ptr = new node;

    int i = 0; 
    while(i != index -2){
        ptr = current;
        current = current->next;
        i++;
    }
    ptr->next = current->next;
    free(current);
    return head;
}

int main(){
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;

    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = fifth;
    
    fifth->data = 5;
    fifth->next = head;

    // head = deletebeg(head);
    // head = deleteend(head);
    // head = deletevalue(head, 3);
    head = deleteindex(head, 3);
    transversal(head);

}