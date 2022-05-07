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

Node* construstBST(int preorder[], int* Idx, int key, int min, int max, int n){
    Node* root=NULL;
    if(key>min && key<max){
        root = new Node(key);
        *Idx = *Idx+1;
    }

    if(*Idx<n)
        root->left = constructBST(preorder, Idx, preorder[*Idx], min, key, n)
    
    if(*Idx<n)
        root->right = constructBST(preorder, Idx, preorder[*Idx], key, max, n)

}
void inorder(Node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    int preorder[]={8,5,6,13,11}; 
    int Idx=0;
    int n=5;
    /*
                              8
                            /   \
                           6     13
                            \    /
                             5  11
     
      */

    Node* root= constructBST(preorder, &Idx, preorder[0],INT_MIN, INT_MAX,n);

    inorder(root);  //6 5 8 11 13 


}

