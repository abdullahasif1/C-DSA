#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int value){             //no change in node structure
            data=value;
            next=NULL;
        }
};
void insertathead(node* &head,int value){
    node* n=new node(value);
    node* temp=head;

    if(head==NULL){          //if no node exists in LL
        n->next=n;
        head=n;

    cout<<"Im in sthead with n= "<<n->data<<endl;
        return;
    }

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
    head=n;


}
void insertattail(node* &head,int value){
   // node* n=new node(value);           casue if head==NULL we dont need 
  //  node* temp=head;                   new node rn
    if(head==NULL){
        insertathead(head,value);
        return;
    }

    node* n=new node(value);
    node* temp=head;
    while(temp->next!=head){          //traversing to read the end node 
        temp=temp->next;             //cause end node is pointing to head
    }    

    temp->next=n;
    n->next=head;
    cout<<"Data of n->next in tail= "<<n->data<<endl;

}

void display(node* head){
    node* temp=head;

    while(temp->next!=head){                  //do{
        cout<<temp->data<<"->";         //  cout<<temp-data<<"->";
                                        //   temp=temp->next;
        temp=temp->next;                //while(temp->next!=head)         
    }                                 
    cout<<temp->data<<endl;
    return;
}
int main(){

    node* head=NULL;
    
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    display(head);
    insertathead(head,7);
    display(head);

    return 0;
}

