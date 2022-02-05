#include<iostream>
using namespace std;
int fic(int a){
    for(int i=a-1;i>0;i--){
        a*=i;
    }
    return a;
}

int main(){
    int n,r;
      cout<<"Enter the value of n: ";
      cin>>n;
      cout<<"Enter the value of r: ";
      cin>>r;

      int nCr = fic(n) /( fic(n-r) * fic(r));
      cout<<"Your Solution is: "<<nCr<<endl;


 return 0;
}
