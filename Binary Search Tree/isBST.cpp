#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

struct node *createNode(int data){
    node *n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

int isBST(node *root){
    static node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0; 
        }
        prev = root; 
        return isBST(root->right);
    }
    else{
        return 1; 
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

    if(isBST(p)){
        cout << "This is a BST" << endl;
    }

}