#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            right=NULL;
            left=NULL;
        }
};
void SumReplacement(Node* root){
    if(root==NULL)
        return;

    SumReplacement(root->right);
    SumReplacement(root->left);

    if(root->right!=NULL)
        root->data = root->data + root->right->data;

    if(root->left!=NULL)
        root->data = root->data + root->left->data;

    }

void inorder(Node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root=new Node(1);               //           1
    root->left=new Node(2);               //          / \    /
    root->right=new Node(3);
    root->right->left=new Node(6);        //         2   3
    root->left->left=new Node(4);         //        /    /
    root->left->left->left=new Node(5);   //       4    6
                                          //      /
                                          //     5
    SumReplacement(root);
    cout<<"Printing inorder traversal...\n";
    inorder(root);
    return 0;
}
