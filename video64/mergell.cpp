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

node* merge(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* head3= new node(-1);
    node* p3=head3;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3=p1;
            p1=p1->next;
            p3=p3->next;
        }
        else if(p1->data>p2->data){
            p3=p2;
            p2=p2->next;
            p3=p3->next;
        }
        else{
            p3=p1;
            p3=p3->next;
            p3=p2;
            p3=p3->next;

            p1=p1->next;
            p2=p2->next;
        }
    }

    while(p1!=NULL){
        p3=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
           p3=p2;
           p2=p2->next;
           p3=p3->next;
    }

    cout<<"Value of head3= "<<head3<<endl;
    

    return head3;
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

    node* head1=NULL;
    node* head2=NULL;

    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,4);
    insertattail(head1,7);
    insertattail(head1,8);
    display(head1);
    insertattail(head2,3);
    insertattail(head2,5);
    insertattail(head2,6);
    display(head2);

    node* head3=merge(head1,head2);
    display(head3);
return 0;
}
