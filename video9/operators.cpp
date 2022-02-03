#include<iostream>
using namespace std;
int main(){
                        //Unary Operators (Pre-incremental/decremental) &
       int i=10, j=20,k;   // post-incrementals/decremental) 

       k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

       cout<<i<<endl;
       cout<<j<<endl;
       cout<<k<<endl;

       cout<<"-----------------------\n";     
                         //bitwise operators
        int x;
        x=4<<1;        
        cout<<"(Left shift bit operator) 4<<1 = "<<x<<"   a*2^n\n";

        x=4>>1;     
        cout<<"(Right shift operator) 4>>1 = "<<x<<"   a/2^n\n";

        cout<<"----------------------\n";
                                //assignment operators
        int a=30 , b=20, c;
        a+=b;
        cout<<"a=30 & b=20 so a+=b means a=a+b so a is: "<<a<<endl;
        a-=b;
        cout<<"Using updated a & b=20,  a-=b means a=a+b so a is: "<<a<<endl;
        a*=b;
        cout<<"Using updated a & b=20 so a*=b means a=a*b so a is: "<<a<<endl;
        a/=b;
        cout<<"Using updated a & b=20 so a/=b means a=a/b so a is: "<<a<<endl;
    
        cout<<"----------------\n";


        int p;
        p=a>b?a-b:b-a;
        cout<<"Ternary conditional operator\n";
        cout<<"p=a>b?a-b:b-a   for which a="<<a<<" and b="<<b<<" so p="<<p<<endl;
        
        cout<<"Cast operator \n";
        char l='a';
        int m=(int) l;
        cout<<" if char l='a' then  int m=(int) l gives: "<<m<<endl;
        
        
        return 0;







}
