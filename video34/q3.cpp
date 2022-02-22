#include<iostream>
using namespace std;
void subsets(int* arr, int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
    return ;
}
int main(){
    int x;
    cout<<"Enter the length of array: ";
    cin>>x;
    int* arr=new int(x); 
    cout << "Enter " << x << " items" << endl;
	for (int i=0; i<x; i++) {
		cin>>arr[i];
	}
    subsets(arr, x);
    return 0;
}
