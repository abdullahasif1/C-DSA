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

void getvalue(node* ptr[],int keyy){
    int index=hashfunc(keyy);
    node* n=ptr[index];

    if(n->key==keyy)
        cout<<"Value of key "<<keyy<<" is "<<n->value<<endl;
    
    while(n->next->key!=keyy){
        n=n->next;
    }
    if(n->next==NULL)
        cout<<"No key exits!\n";
    else
        cout<<"Value of key "<<keyy<<" is "<<n->next->value<<endl;
}
            
                    
            
            
void updatevalue(node* ptr[],int keyy,int val){
     int index=hashfunc(keyy);
     node* n=ptr[index];
 
     if(n->key==keyy)
         n->value=val;
 
     while(n->next->key!=keyy){
         n=n->next;
     }
     if(n->next==NULL)
         cout<<"No key exits!\n";
     else
         n->next->value=val;
 
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



    cout<<"Enter the key you want to get the value of: ";
    cin>>keyy;

    getvalue(ptr,keyy);




    int val=-1;
    cout<<"Enter the value of key you want to update the value of: ";
    cin>>keyy;
    cout<<"Enter the value you want to update: ";
    cin>>val;

    print(ptr,hashfunc(keyy));
    updatevalue(ptr,keyy,val);

    print(ptr,hashfunc(keyy));

    //getvalue(ptr,keyy);
    return 0;
}

