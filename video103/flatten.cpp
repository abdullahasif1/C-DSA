#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *right, *left;
        Node(int val){
            data=val;
            right=NULL;
            left=NULL;
        }
};

void FlattenSingly(Node* root,Node* &head,Node* &prev){         //converting into singly linked list

    
    if(root==NULL)
        return;
    FlattenSingly(root->left,head,prev);

    if(prev==NULL)
        head=root;

    else{
        prev->right=root;
        root->left=NULL;
    }

    prev=root;

    FlattenSingly(root->right,head,prev);
}


void FlattenDoubly(Node* root,Node* &head, Node* &prev){         //converting into Doubly linked list
    

    if(root==NULL)
        return;
    FlattenDoubly(root->left,head,prev);

    if(prev==NULL)   
        head=root;
    

    else{
        prev->right=root;
        root->left=prev;            //only change
    }

    prev=root;

    FlattenDoubly(root->right,head,prev);

}
Node* BTtoDLL(Node* root){
    Node* head=NULL;
    Node* prev=NULL;
    FlattenDoubly(root,head,prev);
    return head;
}
Node* BTtoSLL(Node* root){
    Node* head=NULL;
    Node* prev=NULL;
    FlattenSingly(root,head,prev);
    return head;
}


void print(Node* Head){
    Node* p=Head;
    if(p==NULL)
        return;
    cout<<p->data<<"-> ";
    print(p->right);
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);


    Node* head=BTtoSLL(root);

    print(head);

    return 0;
}
