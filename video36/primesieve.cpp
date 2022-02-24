#include<iostream>
using namespace std;
void primesieve(int x){
    int pprimesieve[100]={0};


   /* for(int i=0;i<100;i++){
        pprimesieve[i]=0;
    }*/
    for(int i=2;i<=x;i++){       
        if(pprimesieve[i]==0){
            for(int j=i*i;j<=x;j+=i){      //j=i*I means if 5, u start makring from 25 
                pprimesieve[j]=1;         //cause previous numbers will be marked
            }                            //previous prime numbers
        }
    }
    for(int i=2;i<=x;i++){
        if(pprimesieve[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;

    return;
}
int main(){
    int x;
    cout<<"Enter the number till you want to find prime numbers: ";
    cin>>x;
    primesieve(x);
    return 0;
}
