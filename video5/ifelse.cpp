#include<iostream>
using namespace std;

 int main(){
      
    int a,b,c;
       cout<<"Enter 3 numbers: ";
       cin>>a;
       cin>>b;
       cin>>c;

       if(a>b){
            if(a>c){
                cout<<a<<" is biggest\n";
            }
            else{
                cout<<c<<" is biggest\n";
            }
       }
       else{
            if(b>c){
                cout<<b<<" is biggest\n";
            }
            else{
                cout<<c<<" is biggest\n";
            }
       }


    return 0;
 }
