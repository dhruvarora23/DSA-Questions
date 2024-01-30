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

node *insert(node *root, int data){
    node *temp = root;

    if(root == NULL){
        root = createNode(data);
        return root;
    }
    else if(data > root->data){
        root->right = insert(root->right, data);
    } 
    else{
        root->left = insert(root->left, data);
    }
}

node *minVal(node *root){
    node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

node *deleteNode(node *root, int data){
    
    if(root == NULL){
        return root;
    }
    if(root->data == data){

        if(root->left == NULL && root->right == NULL){
            delete root;
            return;
        }
        
        if(root->left != NULL && root->right == NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }

        
        if(root->left == NULL && root->right != NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }

        if(root->left != NULL && root->right != NULL){
            int minvalue = minVal(root->right)->data;
            root->data = minvalue;
            root->right = deleteNode(root->right, mini);
            return root;
        }
        
    }
}

int main(){
    node *n = new node;
    node *p1 = createNode(10);
    node *p2 = createNode(10);
    node *p3 = createNode(10);
    node *p4 = createNode(10);
    node *p5 = createNode(10);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
}