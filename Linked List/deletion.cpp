#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data; 
    struct node *next;
};

void transversal(node *head){
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

 node *deletefirst(node *head){
    node *ptr = new node;
    ptr->next = head;
    head = head->next;
    free(ptr);
    return head;
}

node *deleteend(node *head){
    node *ptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
    return head;
}



node *deleteindex(node *head, int index){
    node *p = nullptr;
    node *current = head;
    int i = 0;
    while(i != index){
        p = current;
        current = current->next; 
        i++;
    }

    p->next = current->next;
    free(current);
    return head; 

}

node *deletevalue(node *head, int value){
    node *p = nullptr;
    node *current = head;
    while(current->data != value && current->next != NULL){
        p = current;
        current = current->next;
    }

    if(current->data == value){
        p->next = current->next;
        free(current);
    }

    return head;
    
}

int main(){
    node *head = new node; 
    node *second = new node; 
    node *third = new node; 
    node *fourth = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = NULL;

    // head = deletefirst(head);
    // head = deleteend(head);
    head = deleteindex(head, 1);
    head = deletevalue(head, 3);
    transversal(head);
}