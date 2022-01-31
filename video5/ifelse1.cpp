#include<iostream>
using namespace std;
 
int main(){
    
    int budget;
        cout<<"Enter your budget: ";
        cin>>budget;

        if(budget>=5000){
            if(budget>=10000){
                cout<<"Must go to club.\n";
            }
            else{
                cout<<"Must only go for shopping.\n"; 
            }
        }

        else if(budget>=2000){
            cout<<"Must go with Friends.\n";
        }

        else{
            cout<<"Must study as you're broke\n";
        }

    return 0;
 }
