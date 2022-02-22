#include<iostream>
using namespace std;
void getBit(int num, int pos){                             //means the same 
     cout<<"Your BIT is: "<<((num & (1<<pos-1))!=0)<<endl;   //or(n & (0<<pos-1)==0))
     return ;
}

void setBit(int num,int pos){
    cout<<"Your number after the setting is: "<<(num|1<<pos-1)<<endl;
    return;
}

void clearBit(int num,int pos){
     cout<<"Your number after the clearing bit is: "<<(num &(~(1<<pos-1)))<<endl;
       return;
   }

int main(){
    int num, pos;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Enter the position of the bit you want to check of ur number(order-eg 3,2,1): ";
    cin>>pos;

    getBit(num,pos);

    cout<<"Now Set any bit of the same number!\n";
    cout<<"Enter the position of the bit where you want to add 1: ";
    cin>>pos;

    setBit(num,pos);

    cout<<"Now clear and bit of the same number!\n";
    cout<<"Enter the position of the bit where you want to clear the bit(puttin 0): ";
    cin>>pos;
 
    clearBit(num,pos);
    return 0;
}
