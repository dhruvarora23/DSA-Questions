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

void inorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
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

    cout << "In Order: ";
    inorder(p); 
    cout << endl; 
    cout << "Pre order: ";
    preorder(p);
    cout << endl;
    cout << "Post Order: "; 
    postorder(p);
}