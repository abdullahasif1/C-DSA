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

bool search(node* head, int key){
    node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
    return false;
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

    cout<<"Searching 5 in linklist above(0=not found, 1=found): "<<search(head,5)<<endl;
    cout<<"Searching 3: "<<search(head,3)<<endl;
    return 0;
}
