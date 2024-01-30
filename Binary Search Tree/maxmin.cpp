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
    n->right = NULL; 
    n->left = NULL; 
    return n;
}

node *min(node *root){
    node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}


node *max(node *root){
    node *temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
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

    n = min(p);
    cout << n->data << endl;
    n = max(p);
    cout << n->data << endl;

}