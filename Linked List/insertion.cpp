#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node *ptr){
    while(ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

//insert at beginning
node * insertStart(node *head, int data){
     node *ptr; 
     ptr = new node;

     ptr->next = head;
     ptr->data = data; 
     return ptr;
}

//insert at index
node * insertIndex(node *head, int index, int data){
    node *ptr = new node;
    node *p = head; 

    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}

node *insertend(node *head, int data){
    node *ptr = new node; 
    ptr->data = data;
    node *p = head; 
    while(p->next != NULL){
        p = p->next;
    }
    
    p->next = ptr; 
    ptr->next = NULL;
    return head;
}

node *insertvalue(node *head, int data, int value){
    node *p = head; 
    node *ptr = new node;

    while(p->data != value){
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;

}

int main(){

    node *head;
    node *second;
    node *third; 

    head = new node;
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third; 

    third->data = 9; 
    third->next = NULL; 

    head = insertStart(head, 17);
    head = insertIndex(head, 1, 10);
    head = insertend(head, 15);
    head = insertvalue(head, 90,10);
    linkedlisttransversal(head);
}