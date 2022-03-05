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

node* reversek(node* &head,int k){
    node* prevp=NULL;
    node* currp=head;
    node* nextp;

    int count =0;
    while(currp!=NULL && count<k){       //iteration for reversal of k elements
        nextp=currp->next;
        currp->next=prevp;

        prevp=currp;
        currp=nextp;
        count++;
    }

    if(nextp!=NULL)
    head->next=reversek(nextp,k);
    
    
    return prevp; 
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

    display(head);

    node* newhead=reversek(head,2);
    display(newhead);

    return 0;
}
