#include<iostream>
using namespace std;
int main(){

    //Exclude the numbers which are divisble by given number with a range

     int x,y,a;
         cout<<"Enter the Range(smaller to greater)\n";
         cout<<"Start: ";
         cin>>x;
         cout<<"End: ";
         cin>>y;
         cout<<"Enter the divisor for which you want to exclude the values: ";
         cin>>a;

         for(int i=x;i<=y;i++){
             if(i%a==0){
                 continue;
             }
            cout<<i<<endl;
         }

    return 0;
}
