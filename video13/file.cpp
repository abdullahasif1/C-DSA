#include<iostream>
#include<math.h>
using namespace std;
  int main(){

      int n;                              //Identifying Prime number
      bool change=0;
      cout<<"Enter a number to check whether it is a Prime number or not: ";
      cin>>n;
        for(int i=2;i<=n/2;i++){
              if(n%i==0){
                  cout<<"Not a Prime number!\n";
                  change=1;
                  break;
              }
        }
        if(change==0){
              cout<<"It is a Prime number!\n";
        }


      cout<<"--------------\n";
      int ld,reverse=0;      //ld=lastdigit
      cout<<"Enter a number to Reverse it: ";
      cin>>n;                                    // reverse a number
          while(n>0){
              ld=n%10;
              reverse = reverse * 10 + ld;
              n=n/10;
          }
          cout<<"Your reversed number is: "<<reverse<<endl;



      cout<<"--------------\n";
      cout<<"Enter a number to check whether is it an Armstrong number or not: ";
      cin>>n;

      int armstrong=0,ogn=n;                       //Identifying Armstrong number
        while(n>0){
            ld=n%10;
            armstrong += pow(ld,3);
            n=n/10;
        }
        if(ogn==armstrong){
            cout<<"It is an Armstrong number!\n";
        }
        else{
            cout<<"It is not an Armstrong number!\n";
        }
    return 0;
  }
