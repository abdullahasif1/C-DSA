#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node* next;

        node(int x){
             data=x;
             next=NULL;
        }
};

class queue{

    node* end;
    node* front;
    public:
    queue(){
        front=NULL;                    // Or front=NULL     
        end=NULL;                     //     end=NULL         
    }

    void push(int value){
        node* n=new node(value);

        if(front==NULL){
            front=n;
            end=n;
            return;
        }
        
        end->next=n;              //Pointing End pointer node->next to next node
        end=n;                    //shifting End pointer to last node
                                  //AND THIS IS ONLY PLACE WHERE END IS USED
    }

    void pop(){
        if(front==NULL || front==NULL){
            cout<<"Nothing to pop from Linked List!\n";
            return;
        }
        
        node* todelete=front;   //making sure no extra memory is left behind         
        front=front->next;      //we can only write this and forget about previous node as per Queue Laws   
        delete todelete;
    }

    int peek(){
        if(front==NULL || front==NULL){
            cout<<"Nothing in LL implemented of Queue!(-1)\n";
            return -1;
        }
        return front->data;
    }

    int empty(){
        if(front==NULL || front==NULL){
            return 1;
        }
        return 0;

    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}
