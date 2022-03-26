#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data=value;
            right=NULL;
            left=NULL;
        }
};

int countofnodes(Node*root){
    if(root==NULL)
        return 0;

    return countofnodes(root->left) + countofnodes(root->right) + 1;
}
int sumofnodes(Node*root){
    if(root==NULL)
        return 0;

    return sumofnodes(root->left) + sumofnodes(root->right) + root->data;
}

int main(){
     Node* root=new Node(1);
     root->right=new Node(3);
     root->left=new Node(2);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
     root->right->left=new Node(6);
 
     cout<<"Count of All nodes in ur tree is: "<<countofnodes(root)<<endl;

     cout<<"Sum of all nodes in ur tree is: "<<sumofnodes(root)<<endl;
     return 0;
 }

