#include<iostream>
using namespace std;
 int main(){

      int x;
          cout<<"Enter the number from where you want to start counter till 0: ";
          cin>>x;

          while(x>0){

              cout<<x<<endl;
              x--;

          }

          cout<<"-Do While Loops starts from here-\n";

      int num=0;
      int sum=0;
          cout<<"User must add positive numbers of which he needs the sum of or enter a negative number to end the program\n";
          do{
             sum += num;

             cout<<"Enter a number: ";
             cin>>num;
          }
          while(num>=0);
    
          cout<<"\nThe sum is "<<sum<<endl;

    return 0;
}
