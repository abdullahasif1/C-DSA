#include<iostream>
using namespace std;
int main(){

    
    //check if the number is prime or not

      int p;
          cout<<"Enter a number: ";
          cin>>p;
          int i;
          for(i=2;i<p;i++){
              if(p%i==0){
                  cout<<"Not Prime!\n";
                  break;
              }

          }
          if(i==p){
             cout<<"It's a Prime Number\n";
          }

    return 0;
}
