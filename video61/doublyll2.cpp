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
     node* temp=head;
     node* n=new node(value);
     if(temp!=NULL){                   //different way from previous
        temp->prev=n;
     }
        n->next=temp;
        temp=n;
        head=temp;
 }

void insertattail(node* &head,char value){
    if(head==NULL){                    // for the case if no node is included
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

void deletion(node* &head,char value){
    bool result=false;
    if(head==NULL){                                        //if no node is available for deletion
        cout<<"Already Empty!\n";
        return;
    }
    node* temp=head;
    if(head->next==NULL && head->data==value){             //if only one node and it contain the data which needs to be removed
        head=NULL;
        delete temp;
        return;
    }
    if(temp->data==value){                                 //if more than one node are present and ur node(which needs to be deleted)
        head=temp->next;                                   // is at the very start
        temp->next->prev=NULL;
        delete temp;
        return;
    }

    while(temp->next!=NULL){                               
        if(temp->data==value){                             //if element is found during traversing
            cout<<"Element found!\n";
            result=true;
            break;
        }
        temp=temp->next;
    }


    if(result==true && temp->next!=NULL){                  //if node to be deleted is somewhere betwwen last and first node   
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        return;
    }
    else if(result==false && temp->next==NULL && temp->data==value){  
        temp->prev->next=NULL;                             //if ur node is PRESNT at the last node which needs to be deleted
        delete temp;
        return;
    }
    else{
        cout<<"Element not found!\n";                      //if we dont find our element which we wanted to delete
    }

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
    deletion(head,'x');
    display(head);

    deletion(head,'D');
    display(head);
    return 0;
}
