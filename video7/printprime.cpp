#include<iostream>
using namespace std;
int main(){

      //Check for all prime numbers within a range

    int x,y;
        cout<<"Enter the range from which you want to find prime numbers(smaller to greater)\n";
        cout<<"Start: ";
        cin>>x;
        cout<<"End: ";
        cin>>y;



        if(x<y){
           for(int num=x;num<=y;num++){
              int i;
              for(i=2;i<num;i++){
                  if(num%i==0){
                      break;
                   }
              }
              if(i==num){
                cout<<num<<endl;
              }
           }
        }
        else{
            cout<<"Range not correct!\n";
        }

    return 0;
}
