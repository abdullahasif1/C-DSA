#include<iostream>
using namespace std;
 int main(){
      
       int a,sum=0;
         cout<<"Enter the positive number till you want to add even numbers: ";
         cin>>a;
      
         if(a>0){
             for(int i=2;i<a;i++){
                  if(i%2==0){
                        sum = sum + i;
                  }
                    
             } 
             cout<<"Total sum of even numbers till "<<a<<" is "<<sum<<endl;
         }
         else{
             cout<<"You've entered a negative nnumber \n";
         }

    return 0;
}
