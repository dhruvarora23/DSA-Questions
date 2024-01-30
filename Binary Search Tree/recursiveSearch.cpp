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


node *search(node *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    node *p = createNode(10);
    node *p1 = createNode(8);
    node *p2 = createNode(15);
    node *p3 = createNode(5);
    node *p4 = createNode(9);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    node *n = search(p, 1);
    if(n != NULL){
        cout << "Found: " << n->data << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}