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

node* buildTree(int pre[], int in[], int start, int end){
    if(start>end)
        return NULL;

    int current=0;
    int pos=0;
    static int idx=0;
    current=pre[idx];
    idx++;

    node* Node=new node(current);

    if(start==end)
        return Node;

    for(int i=start;i<=end;i++){
        if(in[i]==current){
             pos=i;
             break;
        }
    }
    Node->left=buildTree(pre,in,start,pos-1);
    Node->right=buildTree(pre,in,pos+1,end);

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

    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};

    node* root=buildTree(pre,in,0,4);

    inorderTraverse(root);
    return 0;

}
