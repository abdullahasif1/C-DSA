#include<iostream>
using namespace std;
class node{
    public:
        char data;
        node* next;
        node* prev;
        node(char value){
            next=NULL;
            data=value;
            prev=NULL;
        }
};
void insertathead(node* &head,char value){
     //node* temp=head;
     node* n=new node(value);
     if(head!=NULL){    //temp!=NULL
        head->prev=n;  //temp->next=n;
     }

        n->next=head;   
      // n->next=temp;
      // temp=n;
        head=n;
 }

void insertattail(node* &head,char value){
    if(head==NULL){                    // for the case if no node is there
        insertathead(head, value);
        return;
    }
    
    node* n= new node(value);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
    n->prev=temp;;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
    return;
}
int main(){

    node* head=NULL;
    insertattail(head,'C');
    insertathead(head,'B');
    insertattail(head,'D');
    insertathead(head,'A');

    display(head);
    return 0;
}
