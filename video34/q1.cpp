#include<iostream>
using namespace std;
void powerof2(int num){
    if((num & (num-1))==0){
        cout<<"Your number is a power of 2!\n";
    }
    else
        cout<<"Your number is not a power of 2!\n";
    return ;
}
void numberof1s(int num){
    int times=0;
    while(num){
        num=num & (num-1);
        times++;
    }
    cout<<"Number of 1s in ur number is: "<<times<<endl;
}
int main(){
    int num;
    cout<<"Enter a number to check if it is a power of 2: ";
    cin>>num;
    powerof2(num);
    
    cout<<"----------\n";
    cout<<"Finding the number of 1s in your number given above in its binary form!\n";
    numberof1s(num);
    
    
    
    return 0;

}
