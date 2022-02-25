#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restofarray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restofarray);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"Enter array is {1,2,3,4,5}!\n";
    cout<<"If 0=not sorted & 1 =sorted!\n";
    cout<<"Your array is: "<<sorted(arr,5)<<endl;

    return 0;
}
