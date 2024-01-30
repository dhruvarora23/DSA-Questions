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
    n->left = n->right = NULL;
    return n;
}

node *insertNode(node *root, int data){
    if(root == NULL){
        root = createNode(data); 
        return root;
    }

    if(data > root->data){
        root->right = insertNode(root->right, data);
    }
    else{
        root->left = insertNode(root->left, data);
    }
}

void inorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    node *n = new node;
    node *p = createNode(10);
    node *p1 = createNode(8);
    node *p2 = createNode(15);
    node *p3 = createNode(5);
    node *p4 = createNode(9);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    n = insertNode(p, 7);
    inorder(p);
}