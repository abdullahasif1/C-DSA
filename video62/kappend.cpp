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

int lengthofll(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head,int k){
    node* temp=head;
    int count=1;

    int l= lengthofll(head);
    while(count < (l-k)){
        count++;
        temp=temp->next;
    }

    node* tempS=temp->next;
    node* tempE=temp->next;
    temp->next=NULL;
    int counter=1;

    while(counter<k){
        counter++;
        tempE=tempE->next;
    }
    tempE->next=head;
    head=tempS;

    return head;
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
    cout<<"Length of Linked List: "<<lengthofll(head)<<endl; 

    kappend(head,2);
    display(head);

    return 0;
}
