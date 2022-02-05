#include<iostream>
using namespace std;
 
 void prime(int a){
    bool flag=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            cout<<"It is not a Prime Number!\n";
            flag=1;
            break;
        }
    }
 
    if(flag==0){
        cout<<"It is a Prime Number!\n";
    }
    
    return;
 }


 int main(){
    
    int x;
    cout<<"Enter the number you want to check is it a Prime number or not: ";
    cin>>x;
    prime(x);

    return 0;
 }
