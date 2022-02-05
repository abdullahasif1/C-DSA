#include<iostream>
using namespace std;

int fictorial(int a){

    for(int i=a-1;i>0;i--){
        a=a*i;
    }

    return a;
}

int main(){
    int x;
    cout<<"Enter the number you want to find Fictorial of: ";
    cin>>x;
    cout<<"Fictoroial of "<<x<<"("<<x<<"!)"<<" is: "<<fictorial(x)<<endl;





    return 0;
}
