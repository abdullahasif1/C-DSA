#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
    node(int x){
        data=x;
        right=NULL;
        left=NULL;
    }
};

void preorder(node* root){
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

int main(){

    node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);

    root->left->left= new node(4);
    root->left->right= new node(5);

    preorder(root);
    cout<<"\n";
    /*        1
     *       / \
     *      2   3
     *     / \    /
          4   5
    */
    return 0;
}
