#include<iostream>
using namespace std;
void primefactorsieve(int x){
     int spf[100]={0};

     for(int i=2;i<=x;i++){
         spf[i]=i;
     }
     for(int i=2;i<=x;i++){
         if(spf[i]==i){
             for(int j=i*i;j<=x;j+=i){
                 if(spf[j]==j){
                    spf[j]=i;         
                 }                            
             }
        }
     }
     while(x!=1){
        cout<<spf[x]<<" ";
        x=x/spf[x];
         }
    cout<<endl;
}
int main(){
    int x; 
    cout<<"Enter the number to find its prime factors: ";
    cin>>x;
    primefactorsieve(x);
    return 0;
}
