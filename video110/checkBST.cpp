#include<iostream>
#include<limits.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;      //can be written like this as well
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

 
int prevv=-1;
bool isBST(Node* root){
    if(root!=NULL){
        if(!isBST(root->left))
            return false;

        if(prevv!=-1 && root->data<=prevv)
            return false;

       prevv = root->data;    

        return isBST(root->right);
    }
    return true; 
}

int main(){

    Node* root=new Node(8);
    root->right=new Node(13);
    root->left=new Node(6);
    root->left->right=new Node(5);
    root->right->left=new Node(11);
    /*
                               8
                             /   \
                            6     13
                             \    /
                              5   11
      */
    if(isBST(root))
        cout<<"It is a Binary Search Tree!\n";
    else
        cout<<"It is not a BST!\n";

    return 0;
}

