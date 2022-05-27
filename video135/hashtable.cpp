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

    if(ptr[index]==NULL){
        ptr[index]=n;
        node* tempp=ptr[index];
        return;
    }
    else{
        node* temp= ptr[index];
            while(temp->next!=NULL){
                temp=temp->next;
            }
        temp->next=n;
    }
}


int hashfunc(int keyy){
    int idx=keyy%15;
    return idx;
}


void deletenode(node* ptr[],int keyy){

    int index=hashfunc(keyy);

    if(ptr[index]==NULL){
        cout<<"No node present to delete!"<<endl;
        return;
    }

    node* n=ptr[index];
    if(n->next==NULL && n->key==keyy){
        node* todelete=n;
        ptr[index]=NULL;
        delete todelete;
        return;
    }


    while(n->next->key != keyy){
        n=n->next;
    }
    node* todelete= n->next;
    n->next=n->next->next;
    delete todelete;
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
    node* ptr[15];

    int keyy,value;
    for(int i=0;i<15;i++)
        ptr[i]=NULL;
    
    
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
    index=hashfunc(keyy);
    insertattail(ptr,index,keyy,value);
    
    
    
    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;
    index=hashfunc(keyy);
    insertattail(ptr,index,keyy,value);
      



    cout<<"Enter an key: ";
    cin>>keyy;
    cout<<"Enter a value: ";
    cin>>value;
    index=hashfunc(keyy);
    insertattail(ptr,index,keyy,value);




    print(ptr,index);
    
    int todelete=0;
    cout<<"Enter the element you want to delete: ";
    cin>>todelete;
    deletenode(ptr,todelete);

    
    print(ptr,index);
    return 0;
}

