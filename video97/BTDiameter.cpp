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
 
 int Diameter(Node* root){
     if(root==NULL)
         return 0;
 
     return Diameter(root->left) + Diameter(root->right) + 1;
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
     cout<<"Diameter of ur tree is: "<<Diameter(root)<<endl;
     return 0;
 }

