#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;      
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
         }
};
int minVal(Node* root){        //is to find inorder successor
    int minval=root->data;     //looks at right subtree for extreme left with left null 
    while(root->left!=NULL){
        minval=root->left->data;
        root=root->left;
    }
    return minval;
}
 

Node* deletionBST(Node* root,int key){
    if(root->data>key)   //root->left=  cause after deletion the subtree 
        root->left=deletionBST(root->left,key);// is saved at root->left pointer
    else if(root->data<key)
        root->right=deletionBST(root->right,key);
    else{
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        
        root->data= minVal(root->right);

        root->right=deletionBST(root->right,root->data);
    }
}


void inorder(Node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root =new Node(4);           //          4
    root->left=new Node(2);            //         / \     /   
    root->right=new Node(6);           //        2   6
    root->right->left=new Node(5);     //       /   / \  / 
    root->left->left=new Node(1);      //      1   5   7 
    root->right->right=new Node(7);
  
    inorder(root);
    cout<<"\n";
    root=deletionBST(root,5);
    inorder(root);
    cout<<"\n";
    return 0;
}
