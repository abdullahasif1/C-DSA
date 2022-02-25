#include<iostream>
using namespace std;

int pairingfriends(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    
    return pairingfriends(n-1) + pairingfriends(n-2)*(n-1);

}
int main(){
    int n;
    cout<<"Enter the number of friends: ";
    cin>>n;

    cout<<"You can make pair or let them alone in "<<pairingfriends(n)<<" combinations!\n";

    return 0;
}
