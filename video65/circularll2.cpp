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
    node* n=new node(value);
    node* temp=head;

    if(head==NULL){        
        n->next=n;
        head=n;
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
   
    if(head==NULL){
        insertathead(head,value);
        return;
    }

    node* n=new node(value);
    node* temp=head;
    while(temp->next!=head){          
        temp=temp->next;             
    }

    temp->next=n;
    n->next=head;
    
}
void deleteathead(node* head){
    node* todelete=head;
    node* temp=head;
    for(temp->next != head){
        temp=temp->next;
    }

    head=head->next;
    temp->next=head;
    delete todelete;

}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp=head;
    int counter=1;
    while(counter<pos-1){
        temp=temp->next;
        counter++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
 
void display(node* head){
    node* temp=head;

    while(temp->next!=head){                  
        cout<<temp->data<<"->";         
                                        
        temp=temp->next;                         
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
     
     cout<<"Deleting node 7...\n";
     deletion(head,7);
     display(head);
     cout<<"Deleting node 1...\n";
     deletion(head,1);
     display(head);

     deletion(head,3);
     cout<<"Deleting node 3...\n";
     display(head);

 
     return 0;
 }

