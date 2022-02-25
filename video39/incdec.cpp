#include<iostream>
using namespace std;
void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;     //this return is for termination
    }
    cout<<n<<endl;        //first prints the number and then calls itself
    dec(n-1);
}
void inc(int z){
    if(z==1){
        cout<<"1"<<endl;
        return;
    }
    inc(z-1);
        cout<<z<<endl;
}
int main(){
    int num;
    cout<<"Enter any number to see decrement through recursion: ";
    cin>>num;
    dec(num);
    cout<<"Now enter a nuber to see increament through recursion: ";
    cin>>num;
    inc(num);
    return 0;
}
