#include<iostream>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
    long long inver=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[i] = arr[mid+i+1];
    }
    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(a[i]<= b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k] = b[j];
            inver += n1-i;
            // a[i],a[i+1],a[i+2]..a[] > b[j] and i<j
             k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
    return inver;
}

long long mergesort(int arr[],int l,int r){
    long long inver=0;
    if(l<r){
        int mid=(l+r)/2;
        inver += mergesort(arr,l,mid);
        inver += mergesort(arr,mid+1,r);
        inver += merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    cout<<"Counting inversions through Merge sort!!\n";
    cout<<"Enter the length of ur array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the integers...\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    cout<<"Number of inversions: "<<mergesort(arr,0,n-1)<<endl;
    return 0;}
}
