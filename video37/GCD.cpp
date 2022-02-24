#include<iostream>
using namespace std;
int gcd(int x, int y){
    while(y!=0){
        int rem=x%y;
        x=y;
        y=rem;
    }
    return x;
}
int main(){
    int x,y;
    cout<<"Enter Two numbers to find their Greatedt commom divisors: ";
    cin>>x>>y;
    if(x<y){
        int rem=x;
        x=y;
        y=rem;
    }
    cout<<gcd(x,y)<<endl;
    return 0;
}
