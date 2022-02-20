#include<iostream>
using namespace std;
int main(){
    cout<<"Updating through Pointers\n";
    int x=69;
    int *xptr=&x;                          // referencing

    cout<<"Value of *xptr: "<<*xptr<<endl; //Dereferencing
    *xptr=100;                            //updating through pointer
    cout<<"Value of x is: "<<x<<endl;
    
    cout<<"---------------\n";
      
    //   Pointer Arithmetic
    cout<<"Pointers Arithmetic\n";
    cout<<"Value of xptr: "<<xptr<<endl;
    xptr++;
    cout<<"After xptr++! Value of xptr is : "<<xptr<<" as it points to an interger variable!\n";

    cout<<"---------------\n";
    
    char ch='a';
    char *chptr= &ch;
    cout<<"Value of chptr: "<<chptr<<endl;
    chptr++;
    cout<<"After chptr++! Value of chptr is : "<<chptr<<" as it points to an character variable!\n";
    
    cout<<"----------------\n";

    // Pointers and Arrays
    cout<<"Pointers and Array\n";
    int arr[]={10,20,30,40};
    cout<<"Value of *arr: "<<*arr<<endl;

    int *ptr=arr;                               //why *ptr=arr not *ptr=&arr
    for(int i=0;i<4;i++){                       //cause arr is already pointing to arr[0] or the address of the array
        cout<<"Value of *ptr: "<<*ptr<<" at i="<<i<<endl;
        cout<<"Value of ptr: "<<ptr<<" at i="<<i<<endl;
        ptr++;

    }

    cout<<"--------------\n";
    cout<<"another way to print of access integers in array is...\n";

    for(int i=0;i<4;i++){
        cout<<"Value of *(arr+i): "<<*(arr+i)<<" at i="<<i<<endl;
       // arr++;   //illegal, cannot increment like pointer to next index.
    }


    cout<<"----------------\n";

    cout<<"Making pointers to pointers!\n";
    int a=10;
    int *p=&a;
    cout<<"a =10 and *p=&a and **q=&p\n";
    cout<<"Value of *p: "<<*p<<endl;  //10 value stored in a

    int **q=&p;

    cout<<"Value of *q: "<<*q<<endl;  //value stored in p(address of a)
    cout<<"Value of **q: "<<**q<<endl; //value stored in a
                      

    return 0;
}
