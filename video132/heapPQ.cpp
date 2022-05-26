#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){


    int k;
    cout<<"Enter the Kth position(0-4) to find the largest Kth value: ";
    cin>>k;

    
  //  int arr[]={20,30,40,50,60};
    
    int size;
    cout<<"Enter the size of ur array: ";
    cin>>size;


    int arr[size];
    cout<<"Enter the elements in ur array!\n";
    
    for(int i=0;i<size;i++){
        
        cin>>arr[i];
        cout<<"val of i: "<<i<<" val of arr[i]: "<<arr[i]<<" size: "<<size<<endl;
    }  

    //cout<<"here"<<endl;

    priority_queue<int, vector<int> > pqmax;     //MaxHeap
    for(int i=0;i<size;i++){
        pqmax.push(arr[i]);
    }

    int result;

    
    while(size-1>=k){
        result=pqmax.top();
        pqmax.pop();
        size--;
    }

    cout<<result<<endl;


    return 0;
}
