#include<iostream>
using namespace std;
int factorial(int a){
    int fac=1;
        for(int i=2;i<=a;i++){
            fac*=i;
        }
    return fac;
}

int main(){
    int n,r;
      cout<<"Enter the value of n: ";
      cin>>n;
      cout<<"Enter the value of r: ";
      cin>>r;

      int nCr = fac(n) /(fac(n-r) * fac(r));
      cout<<"Your Solution is: "<<nCr<<endl;


 return 0;
}
