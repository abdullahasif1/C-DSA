#include<iostream>
using namespace std;
int main(){
    int *x=new int();
    *x=99;
    cout<<"Allocated memory in heap of *x: "<<*x<<endl;

    delete(x);

   // x=new int[4];      int *arr=new int(n); n is the length of array
    int i=0;           //cin>>arr[i];
    int *array{ new int [4]{20,30,40,50}};    
    while(i<4){
        cout<<*x<<"  "<<endl;      //OR  for(int i=0;i<4;i++){
        *x++;                      //       cout<<array[i];   }
        i++;
    }
    return 0;
}
