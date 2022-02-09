#include<iostream>
#include <algorithm>
#include<climits>
using namespace std;
int main(){

    int n;
        cout<<"Enter the length of Array: ";
        cin>>n;
    int arr[n];
    int miniNo= INT_MIN;
    int maxiNo=INT_MAX;
        cout<<"Enter the values in array \n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            miniNo= min(miniNo,arr[i]);
            maxiNo= max(maxiNo,arr[i]);   //built in functions for min and max 
        /*    if(arr[i]>maxiNo){
                maxiNo=arr[i];
            }                            //ifthe about section doesnot work
            if(arr[i]<miniNo){
                minNo=arr[i];
            }   */
        }
        cout<<maxiNo<<" is the maximun number!\n";
        cout<<miniNo<<" is the minimun number!\n";
    return 0;
}
