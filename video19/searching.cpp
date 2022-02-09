#include<iostream>
using namespace std;
void binarysearch(int arr[],int l, int key){
    int s=0,e=l ,mid;
    while(s<=e){
        mid=(s+e/2);
        if(arr[mid]==key){
          cout<<"Your number is at position "<<mid+1<<endl;
            return ;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }     
    }
    cout<<"Not Found!\n";
    return;
}
void linearsearch(int arr[],int l, int key){
    for(int i=0;i<l;i++){
        if(arr[i]==key){
            cout<<"Your number is at position "<<i+1<<endl;
            return ;
        }
    }
    cout<<"Not found!\n";
    return ;
}
int main(){
    int l, y;
        cout<<"Enter the length of the array: ";
        cin>>l;
        int arr[l];
        cout<<"Enter your array elements...\n";
        for(int i=0;i<l;i++){
            cin>>arr[i];
        }
        cout<<"Enter the you number want to find by linear search: ";
        cin>>y;
    linearsearch(arr,l,y);
        cout<<"Now its time to do the same thing by binary search,enter your number: ";
        cin>>y;
    binarysearch(arr,l,y);
    return 0;
}
