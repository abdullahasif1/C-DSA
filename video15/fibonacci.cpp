#include<iostream>
using namespace std;
void fibonacci(int a){
    int t1=0,t2=1,nterm=0;
    
    for(int i=1;i<=a;i++){
        cout<<t1<<" ";
        nterm=t1+t2;
        t1=t2;
        t2=nterm;

    }
    return;
}

int main(){
    int x;
    cout<<"Enter the number of terms you want to see of Fibonacci Sequence: ";
    cin>>x;
    fibonacci(x);

    return 0;
}
