#include<iostream>
using namespace std;
int main(){

        //Zeeshi can go out only on odd days and if he got money more than 0




     int pm=0;           //pm=pocket money
     int de=0;           //de= daily expenditure
         cout<<"Enter your pocket money first: ";
         cin>>pm;
         cout<<"Enter ur daily expenditure(must be less than Pocket money): ";
         cin>>de;
         if(de<pm){
             for(int date=1;date<=30;date++){
                 if(date%2==0){
                     continue;
                 }
                 if(pm<=0){
                  cout<<"Out of budget!\n";
                     break;
                 }
                   cout<<"You can go out buddy, Enjoy!"<<" at "<<date<<endl;
                   pm=pm-de;

             }


         }

    return 0;
}
