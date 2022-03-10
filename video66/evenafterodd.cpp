#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;

        node(int value){
            data=value;
            next=NULL;
        }
};
void insertathead(node* &head,int value){
    node* n = new node(value);
    n->next=head;
    head=n;
}
void insertattail(node* &head,int value){
    node* n=new node(value);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void evenafterodd(node* &head){
    node* even=head->next;
    node* odd=head;
    node* evenstart=even;

    
    while(even->next!=NULL && odd->next!=NULL){

        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenstart;       //linking last odd node with even node at the    start
    if(odd->next!=NULL){
        even->next=NULL;         //if the evenstart is null so no node is      connexted with last node of odd nodes
    }
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
int main(){

    node* head=NULL;

    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    display(head);

    evenafterodd(head);              

    display(head);
    return 0;
}
