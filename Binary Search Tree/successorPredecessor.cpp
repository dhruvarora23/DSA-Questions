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

//suc is the min element of right side of the tree
//pred is the max element of the left side of the tree

int successor(node *root, int key){
    node *temp = root;
    int suc = -1;

    // key is root now
    while(temp->data != key){
        if(temp->data > key){
            suc = temp->data;
            temp = temp->left; 
        }
        else{   
            temp = temp->right;
        }
    }

    node *righttree = temp->right;
    while(righttree != NULL){
        suc = righttree->data;
        righttree = righttree->left;
    }

    return suc;
}


int predeccesor(node *root, int key){
    node *temp = root;
    int pred = -1;

    // key is root now
    while(temp->data != key){
        if(temp->data < key){
            pred = temp->data;
            temp = temp->right; 
        }
        else{   
            temp = temp->left;
        }
    }

    node *lefttree = temp->left;
    while(lefttree != NULL){
        pred = lefttree->data;
        lefttree = lefttree->right;
    }

    return pred;
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

    cout << successor(p, 8) << endl;
    cout << predeccesor(p, 8) << endl;


}
