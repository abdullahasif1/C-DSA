#include<iostream>
using namespace std;
int main(){
    int x;
        cout<<"Enter the length of your array: ";
        cin>>x;
    int arr[x];
        cout<<"Enter the values in your array...\n";
    for(int i=0;i<x;i++){
      cin>>arr[i];  
    }
    int maxsum=0;
        cout<<"Printing all possible subarrays...\n";
        for(int i=0;i<x;i++){
            for(int j=i;j<x;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                    sum +=arr[k];
                }
                cout<<endl;
                if(sum>maxsum){    //OR   maxsum=max(maxsum,sum)
                    maxsum=sum;
                }
            }
        }
        cout<<"Maximum sum of your subarray is: "<<maxsum<<endl;

    return 0;
}
