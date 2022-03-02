#include<iostream>
using namespace std;

int partition(int arr[],int l, int h){
    int pivot= arr[l];
    int i=l;
    int j=h;
    while(i<j){

        while(arr[i]<=pivot)
            i++;
        
        
        while(arr[j]>pivot)
            j++;


        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[l]);
    return j;
}
void quicksort(int arr[],int l,int h){

    if(l<h){
        int pivot = partition(arr,l,h);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,h);
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number of integers in ur array:" ;
    cin>>n;
    int arr[n];
    cout<<"Enter ur integers...\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
