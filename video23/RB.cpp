#include<iostream>
using namespace std;
void RecordBreaker(int arr[],int x){
    if(arr[0]>arr[1]){
        cout<<"Your day 1 is a Record Breaker!\n";
    }
    for(int i=1;i<x;i++){
        int count = i;
        for(int j=i;j>0;j--){
            if(arr[i]>arr[j-1]){
                count--;
                }
            
            else{
                break;
            }
        }
        if(count==0 && arr[i]>arr[i+1] || count==0 && i==x-1){
            cout<<"Your day "<<i+1<<" is a Record Breaker!\n";
        }

    }
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

    RecordBreaker(arr,x);
    return 0;
}
