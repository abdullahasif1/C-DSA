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

void intersect(node* &head1,node* &head2, int position){
    node* temp1=head1;
    position--;
    while(position--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next=temp1;            //joing at this line
}
int fintersection(node* &head1,node* &head2){
    int l1=lengthofll(head1);
    int l2=lengthofll(head2);

    cout<<"Length of l1= "<<l1<<endl;
    cout<<"Length of l2= "<<l2<<endl;
    
    int diff=0;
    node *ptr1;
    node *ptr2;

    if(l1<l2){
        diff=l2-l1;
        ptr1=head2;              //ptr1 is pointing to larger LL always
        ptr2=head1;
    }
    else if(l1>l2){
        diff=l1-l2; 
        ptr1=head1;              //same here ptr1 is pointing to Larger LL
        ptr2=head2;
    }
    else{
        ptr1=head1;
        ptr2=head2;
        
    }

    while(diff){          //while(d) means the same
        ptr1=ptr1->next;
        diff--;
        if(ptr1==NULL)
            cout<<"No intersection found!\n";
            return -1;
    }
cout<<"Im value of pt1(larger ll) node from where im starting "<<ptr1<<endl; 
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2)
            return ptr1->data;     //ptr2->data will be same cause this is an intersection

        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;

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

    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertattail(head1,7);

    display(head1);
    cout<<lengthofll(head1)<<endl;
   
    node* head2=NULL;
   
    insertattail(head2,9);
    insertattail(head2,9);
    insertattail(head2,2);
    insertattail(head2,4);
    insertattail(head2,5);
    insertattail(head2,6);
    insertattail(head2,7);

    display(head2);
    cout<<lengthofll(head2)<<endl;

    intersect(head1,head2,6);
    cout<<"After intersect length of ll2= "<<lengthofll(head2)<<endl;

    cout<<fintersection(head1,head2)<<endl;

return 0;
}
