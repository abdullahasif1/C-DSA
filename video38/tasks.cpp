#include<iostream>
using namespace std;
int recursivesum(int n){

    if(n==0){
        return 1;
    }
    int prevSum=recursivesum(n-1);
    return n+prevSum;
}
int powerof(int n,int p){

    if(p==0){
        return 1;
    }

    int prevPow= powerof(n,p-1);
    
    return n*prevPow;
}
int fac(int n){
    if(n==0){
        return 1;
    }
 //   int prevfac=fac(n-1);          if this then return n*prevfac;
    return n*fac(n-1);
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,p;
    cout<<"Enter a number till which you want the sum through recursion:";
    cin>>n;

    cout<<"Sum is: "<<recursivesum(n)<<endl;
    cout<<"----------\n";

    cout<<"Calculating n raise to power p!\n";
    cout<<"Enter the number first then power: ";
    cin>>n>>p;

    cout<<"Your answer is: "<<powerof(n,p)<<endl;

    cout<<"-------------\n";
    cout<<"Enter a number to find its fictorial: ";
    cin>>n;
    cout<<"Its factorial is: "<<fac(n)<<endl;

    cout<<"---------------\n";
    cout<<"Enter the nth number of term to find it: ";
    cin>>n;
    cout<<"It is: "<<fib(n)<<endl;



    return 0;
}
