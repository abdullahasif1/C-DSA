#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void insert(int* a,int n,int value){
    
    n=n+1;
    int* arr = new int(n);
	for (int x=0;x<n-1;x++) {
		arr[x]=a[x];
        cout<<"Value of arr[x]= "<<arr[x]<<"\n Value of a[x]= "<<a[x]<<endl;
	}

    //delete[] a;
    //a=arr;

    cout<<"Value of arr[8]= "<<arr[8]<<"\n Value of value= "<<value<<endl;
    arr[8]=value;
    cout<<"Value of arr[8]= "<<arr[8]<<"\n Value of value= "<<value<<endl;
   
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" \n";
     //   cout<<arr[n-1]<<"\n"; 
    }

    int i=n;
    while(i>1){
        int parent=i/2;
        if(a[parent]<a[i]){
            //swap(&a,parent,i);
            int temp=a[parent];
            a[parent]=a[i];
            a[i]=temp;

            i=parent;
        }
        else{
            return;
        }
    }
}
int main(){
  
	int *array{ new int[8]{-1,50,40,45,30,20,35,10}};

    insert(array,8,60);

    for(int i=1;i<9;i++)
        cout<<array[i]<<" ";

    return 0;
}
