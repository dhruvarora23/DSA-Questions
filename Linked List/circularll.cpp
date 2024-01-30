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

node *inserthead(node *head, int data){
    node *ptr = new node;
    node *p = head->next;

    ptr->data = data;

    while(p->next != head){
        p = p->next;
    }
    //at this point p points at the last node of the ll

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

node *insertend(node *head, int data){
    node *ptr = new node;
    node *p = head;
    ptr->data = data; 

    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

node *insertvalue(node *head, int data, int value){
    node *ptr = new node; 
    node *p = head; 

    ptr->data = data;

    while(p->data != value){
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
   
}

node *insertindex(node *head, int index, int data){
    node *current = head; 
    node *ptr = new node; 

    ptr->data = data; 
    int i = 0; 

    while(i != index -1){
        current = current->next;
        i++;
    }

    ptr->next = current->next;
    current->next = ptr;
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

    head = inserthead(head, 10);
    head = insertend(head, 15);
    head = insertvalue(head, 11, 2);
    head = insertindex(head, 1, 14);
    transversal(head);
}