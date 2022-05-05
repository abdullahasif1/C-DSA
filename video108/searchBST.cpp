#include<iostream>
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
 
Node* searchBST(Node* root,int key){
    if(root->data==key)
        return root;
    
    if(root==NULL)
        return NULL;

    if(root->data>key)
        return searchBST(root->left,key);
    
    if(root->data<key)
        return searchBST(root->right,key);
}


int main(){
    Node* root =new Node(4);           //          4
    root->left=new Node(2);            //         / \     /   
    root->right=new Node(6);           //        2   6
    root->right->left=new Node(5);     //       /   / \  / 
    root->left->left=new Node(1);      //      1   5   7 
    root->right->right=new Node(7);

    if(searchBST(root,7) == NULL)
        cout<<"Key doesnt exits\n";
    else
        cout<<"Key does exist\n";
    



    return 0;
}
