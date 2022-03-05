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
node* reverseiterative(node* &head){     //reversing of LL by iteration
    node* current=head;
    node* previous=NULL;
    node* nextptr;

    while(current!=NULL){
        nextptr=current->next;
        current->next=previous;
        
        previous=current;
        current=nextptr;
    }
    return previous;
}

node* reverserecursion(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead= reverserecursion(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
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
    insertathead(head,4);
    display(head);

  //  cout<<"Reversing it by iteration...!\n";
    //node* newhead= reverseiterative(head);
   // display(newhead);
    cout<<"Doing it by Recursion...!\n";
    node* ewhead= reverserecursion(head);
    display(ewhead);

return 0;
 }
