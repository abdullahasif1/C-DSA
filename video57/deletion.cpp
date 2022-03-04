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
void deletionathead(node* &head){
    if(head==NULL){
         cout<<"No node present!"<<endl;
         return;

    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int value){
    
    if(head==NULL){
        cout<<"No node present!"<<endl;
        return;
    }
    if(head->next==NULL){
        deletionathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data != value){
        temp=temp->next;
    }

    node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;
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
    display(head);

    insertathead(head,4);
    display(head);

    deletion(head,3);
    display(head);
    deletionathead(head);
    display(head);
    deletion(head,2);
    display(head);
    deletionathead(head);
    display(head);
  //  cout<<"Last call:"<<endl;
    deletion(head,3);
    display(head);
    return 0;
}
