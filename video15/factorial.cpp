#include<iostream>
using namespace std;

int factorial(int a){
    int fac=1;
        for(int i=2;i<=a;i++){
            fac=fac*i;
        }

    return fac;
}

int main(){
    int x;
    cout<<"Enter the number you want to find Factorial of: ";
    cin>>x;
    cout<<"Factoroial of "<<x<<"("<<x<<"!)"<<" is: "<<factorial(x)<<endl;

    return 0;
}
