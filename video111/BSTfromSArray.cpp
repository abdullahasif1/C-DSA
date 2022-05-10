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
Node* BSTfromSArray(int arr[],int start, int end){

    if(start>end)            //base condition
        return NULL;


    int mid= (start+end)/2;
    Node* root=new Node(arr[mid]);

    root->left=BSTfromSArray(arr,start,mid-1);

    root->right=BSTfromSArray(arr,mid+1,end);

    return root;
}

void preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[]={10,20,30,40,50,60};

    Node* root= BSTfromSArray(arr,0,5);
    preorder(root);
    return 0;
}
