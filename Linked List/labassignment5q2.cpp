// Write a program to count the number of occurrences of a given key in a singly linked
// list and then delete all the occurrences. For example, if given linked list is 1->2->1-
// >2->1->3->1 and given key is 1, then output should be 4. After deletion of all the
// occurrences of 1, the linked list is 2->2->3.

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void transversal(node *head){
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

node *deletevalue(node *head, int value){
    node *ptr = NULL;
    node *current = head;
    int count = 0;
    
    while(current != NULL){
        if(current->data == value){
            count++;
            if(ptr == NULL){
                head = current->next;
                free(current);
                current = head;
            }
            else{
                ptr->next = current->next;
                free(current);
                current = ptr->next;
            } 
        }
        else{
            ptr = current;
            current = current->next;
        }
    }

    cout << "The number of occurances are: " << count << endl; 
    return head;

}


int main(){

    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;
    node *sixth = new node;
    node *seventh = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 1;
    third->next = fourth;
    
    fourth->data = 3;
    fourth->next = fifth;
    
    fifth->data = 4;
    fifth->next = sixth;
    
    sixth->data = 1;
    sixth->next = seventh;

    seventh->data = 5;
    seventh->next = NULL;

    head = deletevalue(head, 1);
    transversal(head);
}