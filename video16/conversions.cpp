#include<iostream>
#include<math.h>
#include <cstring>
#include<string>
using namespace std;
void BinaryToDecimal(int x){
        int rem=0,weight=0,decimal=0;
        while(x>0){
            rem=x%10;
            decimal= decimal + ( rem * pow(2,weight++ ));
            x=x/10;
        }
        cout<<decimal<<endl;
        return;
}   
void OctalToDecimal(int x){
         int rem=0,weight=0,decimal=0;
         while(x>0){
             rem=x%10;
             decimal= decimal + ( rem * pow(8,weight++ ));
             x=x/10;
         }
         cout<<decimal<<endl;
         return;
}     
void HexaToDecimal(string x){          //why do we use x[i] - '0' in line 31   
         int weight=0,decimal=0,len;   //because x is a string not an int value
         len=x.length();               // system cant check if string x='0' == 0 
         for(int i=len-1;i>=0;i--){       //as x contains '0' means storing asci value of 0
             if(x[i]>= '0' && x[i]<= '9'){  //same for line 34
                 decimal=decimal + (x[i] - '0' * pow(16,weight++));
             }
             else if(x[i]>='A' && x[i]<='F'){
                 decimal=decimal + ((x[i] - 'A' + 10) * pow(16,weight++));
             }
         }
         
         cout<<decimal<<endl;
         return;
 }
int main(){

    string x;
        cout<<"Enter binary digits to convert into Decimal number: ";
        cin>>x;
        BinaryToDecimal(x);

        cout<<"---------------\n";
        cout<<"Enter Octal number to convert into Decimal number: ";
        cin>>x;
        OctalToDecimal(x);


        cout<<"---------------\n";
        cout<<"Enter Hexadecimal number to convert into Decimal number: ";
        cin>>x;
        HexaToDecimal(x);
    return 0;
}
