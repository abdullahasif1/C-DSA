#include<iostream>
using namespace std;
void insertionsort(int arr[],int x){
    for(int i=1;i<x;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j-- ;
        }
        arr[j+1]=current ;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return ;
}
 int main(){
    int x;
    cout<<"Enter the length of array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter the integers in your Array...\n";
    for(int i=0;i<x;i++){
       cin>>arr[i];
    }
    insertionsort(arr,x);
 return 0;
  }
