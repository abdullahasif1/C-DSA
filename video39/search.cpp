#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restofarray=lastocc(arr,n,i+1,key);
    if(restofarray!=-1){
        return restofarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter legth of ur array: ";
    cin>>n;
    cout<<"Inserts integers in ur array...\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Which element you want to find: ";
    cin>>key;
    cout<<"First occurance is at: "<<(firstocc(arr,n,0,key)+1)<<endl;
    cout<<"Last occurance is at: "<<(lastocc(arr,n,0,key)+1)<<endl;
    return 0;
}
