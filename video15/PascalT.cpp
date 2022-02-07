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
    int n;
    cout<<"Enter the number of rows to be added by nCr in Triangle: ";
    cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
            }
            cout<<endl;
        }
 
return 0;
}
