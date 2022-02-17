#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of ur array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your elements in array...\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    int low=0, high=n-1,k=0,sum=0;          //Can be written as a function from here
    cout<<"Enter the sum of the pair: ";
    cin>>k;
        while(low<high){
            sum=arr[low]+arr[high];
            if(sum>k){
                high--;
            }
            else if(sum==k){
                cout<<"Your Pair elements are at position : "<<low+1<<" & "<<high+1<<endl;
                break;
            }
            else{
                low++;
            }
        }
    return 0;
}
