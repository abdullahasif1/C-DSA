#include<iostream>
using namespace std;
void selectionsort(int arr[],int x){
    int temp;
    for(int i=0;i<x-1;i++){              //12,45,23,51,19,8
        for(int j=i+1;j<x;j++){          //8,45,23,51,19,12
            if(arr[i]>arr[j]){           //8,12,23,51,19,45
                temp=arr[j];             //8,12,19,51,23,45
                arr[j]=arr[i];           //8,12,19,23,45,51
                arr[i]=temp;
            }
        }
    }
    cout<<"Array is Sorted through Selection Sort!\n";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}
int main(){
    int x;
    cout<<"Enter the length of the array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of the array...\n";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    selectionsort(arr,x);
    return 0;
}
