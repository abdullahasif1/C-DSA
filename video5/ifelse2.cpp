#include<iostream>
using namespace std;
int main(){

     int a;
         cout<<"Enter the number you want to check for even/odd: ";
         cin>>a;

         if(a%2==0){
             cout<<a<<" is even.\n";
         }
         else{
             cout<<a<<" is odd.\n";
         }

    return 0;
}
