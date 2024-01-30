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

node *minVal(node *root){
    node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

node *deleteNode(node *root, int val){
    //best case
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root; 
            return NULL;
        }

        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            node * temp = root->left;
            delete root; 
            return temp;
        }

        //right child
        if(root->left == NULL && root->right != NULL){
            node *temp = root->right; 
            delete root; 
            return temp;
        }

        // 2 child
        //either replace max value of left tree or min value of right tree
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }

    }
    else if(root->data > val){
        root->left = deleteNode(root->left, val);
        return root; 
    }
    else{
        root->right = deleteNode(root->right, val);
        return root; 
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

    n = minVal(p);
    n = deleteNode(p, 15);
    inorder(p);
}