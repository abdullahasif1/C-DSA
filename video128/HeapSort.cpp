#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){     //n is the size of array
    int largest=i;                       //i  is the start element from which
    int left=2*i;                        //heapification starts
    int right=2*i+1;

    if(left<=n && arr[largest]<arr[left])
        largest=left;

    if(right<=n && arr[largest]<arr[right])
        largest=right;

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    
     }
}

void heapSort(int arr[],int size){
    while(size>1){
        //step1:swap
        swap(arr[size],arr[1]);      //why 1 cause we always swap 1st with last element
        //step2
        size--;

        //step3
        heapify(arr,size,1);
    }
}


int main(){
    int arr[]={-1,50,55,53,60,62};
    
    //heap creation
    for(int i=6/2;i>0;i--)
        heapify(arr,6,i);       //why 6/2 cause 6/2+1 .. n are leaf nodes
    
    
    heapSort(arr,6);

    for(int i=1;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

