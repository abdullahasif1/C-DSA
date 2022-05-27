#include<iostream>
#include<map>
using namespace std;

class node{
    public:
        int key;
        int value;
        node* next;

        node(int k,int v){
            key=k;
            value=v;
            next=NULL;
        }
};



void insertattail(node* ptr[],int index,int keyy,int value){
    node* n=new node(keyy,value);

    //cout<<"Value of index: "<<index<<" Value of key: "<<keyy<<endl;

    if(ptr[index]==NULL){
        ptr[index]=n;
        node* tempp=ptr[index];
      //  cout<<"Value of ptr[index]: "<<tempp->key<<endl;
        return;
    }


    else{
        node* temp= ptr[index];
        //cout<<"Value of temp->data: "<<temp->next->key<<endl;
            while(temp->next!=NULL){
        //        cout<<"Value of Temp->data: "<<temp->key<<endl;
                temp=temp->next;
            }
        temp->next=n;
        //temp=temp->next;
        //cout<<"Value of temp->key: "<<temp->key<<endl;
    }
}


int hashfunc(int x){
    x=0;
    return x;
}




void print(node* ptr[],int index){

    if(ptr[index]==NULL)
        cout<<"No element at index "<<index<<endl;
    
    else{

        node* n=ptr[index];
        
        cout<<"Key "<<n->key<<endl;
        cout<<"Value "<<n->value<<endl;
        while(n->next!=NULL){
            n=n->next;
            cout<<"Key "<<n->key<<endl;
            cout<<"Value "<<n->value<<endl;
        }
    }
}



int main(){
    node* ptr[1];

    int keyy,value;
    ptr[0]=NULL;
    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;


    int index=hashfunc(keyy);
    
    
    insertattail(ptr,index,keyy,value);

    
    
    
    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;

    insertattail(ptr,index,keyy,value);

    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;


    insertattail(ptr,index,keyy,value);
      
    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;

    insertattail(ptr,index,keyy,value);

    print(ptr,index);
    

    return 0;
}

