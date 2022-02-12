#include<iostream>
using namespace std;
int main(){

     int x,pos;
     cout<<"Enter the length of array: ";
     cin>>x;
     int arr[x];
     cout<<"Enter the integers in your Array...\n";
     for(int i=0;i<x;i++){
         cin>>arr[i];
     }

     cout<<"Enter the i-th position to find maximum till i-th position: ";
     cin>>pos;
     int maxi;
     for(int i=0;i<pos;i++){
         maxi = max(maxi,arr[i]);
     }
     cout<<"Your maximun number till "<<pos<<" is :"<<maxi<<endl;

    return 0;
}
