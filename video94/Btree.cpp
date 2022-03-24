#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* right;
    node* left;
    node(int value){
        data=value;
        right=NULL;
        left=NULL;
    }
};

node* buildTree(int post[], int in[], int start, int end){
    if(start>end)
        return NULL;

    int current=0;
    int pos=0;
    static int idx=4;
    current=post[idx];
    idx--;

    node* Node=new node(current);

    if(start==end)
        return Node;

    for(int i=start;i<=end;i++){
        if(in[i]==current){
             pos=i;
             break;
        }
    }
    Node->right=buildTree(post,in,pos+1,end);
    Node->left=buildTree(post,in,start,pos-1);

    return Node;
}

void inorderTraverse(node* root){
    if(root==NULL)
        return;

    inorderTraverse(root->left);
    cout<<root->data<<" ";
    inorderTraverse(root->right);
}

int main(){

    int post[]={4,2,5,3,1};
    int in[]={4,2,1,5,3};

    node* root=buildTree(post,in,0,4);

    inorderTraverse(root);
    return 0;
}

