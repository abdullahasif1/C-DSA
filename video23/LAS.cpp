#include<iostream>
using namespace std;
void longestArithimaticSubArray(int a[] ,int x){
    int diff=(a[0]-a[1]);
      
    int count=1,streak=0;
    cout<<"Difference1  "<<diff<<endl;
    for(int i=1;i<x-1;i++){
        if(diff == (a[i]-a[i+1])){
            count++;
        }
        else{
            if(count>streak){
                streak=count;    
            }
            count=1;
            diff=a[i]-a[i+1];
        }
    }
    cout<<"Length of Longest Arithimatic SubArray in your array is : "<<streak+1<<endl;
    return ;
}
int main(){
    int x;
    cout<<"Enter the length of array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter the integers in your Array...\n";
    for(int i=0;i<x;i++){
        cin>>arr[i];

    }
   
    longestArithimaticSubArray( arr ,x);

   
    return 0;
}
