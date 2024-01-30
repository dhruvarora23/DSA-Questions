#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *createNode(int data){
    node *n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL; 
    return n;
};

node *search_iterative(node *root, int key){

    while(root != NULL){
        if(key == root->data){
            return root;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL; 
}

int main(){

    node *n = new node();
    node *p = createNode(10);
    node *p1 = createNode(8);
    node *p2 = createNode(15);
    node *p3 = createNode(5);
    node *p4 = createNode(9);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;   

    n = search_iterative(p, 10);
    if(n!=NULL){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}