#include<iostream>
using namespace std;
int divisible(int num, int a ,int b){
    int c1=num/a;
    int c2=num/b;

    int c3=num/(a*b);         //common elements
    return c1+c2-c3;          //-c3  is subtracting cmmon elements
}
int main (){
    int num,x,y;
    cout<<"Enter the number you want to find non divible of: ";
    cin>>num;
    cout<<"Enter two divisors: ";
    cin>>x>>y;
    cout<<"number of divisble numbers till "<<num<<" are: "<<divisible(num,x,y)<<endl;
    return 0;
}
