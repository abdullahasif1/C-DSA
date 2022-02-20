#include<iostream>
using namespace std;
void swap(int a,int b){     //this function doesnot change anything
        int temp=a;
        a=b;               //as it doesnot have access to original home of a
        b=temp;
}                          //void increment only makes a copy of a of main 
void swapbypointers(int *a,int *b){
    
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){

    int a=2;
    int b=4;
    swap(a,b);
    cout<<"Swapping by swap(a,b): "<<a<<" "<<b<<endl;
    swapbypointers(&a,&b);
    cout<<"Swapping by swap(&a,&b): "<<a<<" "<<b<<endl;
    int *aptr=&a;
    int *bptr=&b;
    swapbypointers(aptr,bptr);
    cout<<"Swapping by swap(aptr,bptr): "<<a<<" "<<b<<endl;
    return 0;
}
