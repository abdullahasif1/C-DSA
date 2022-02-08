#include<iostream>
#include<algorithm>
using namespace std;
void pythagoras(int x,int y,int z){
    int a,b;
    int max= std::max(x, std::max(y,z));
        if(max==x){
            a=y;
            b=z;
        }
        else if(max==y){
            a=x;
            b=z;
        }
        else{
            a=x;
            b=y;
        }
        if(max*max ==( a*a +b*b )){
            cout<<"Its a Right angled triangle!\n";
        }
        else{
            cout<<"Its not a Right angled triangle!\n";
        }
    return;
}
int main(){
    int a,b,c;
    cout<<"Enter the length of all sides of the triangle: ";
    cin>>a>>b>>c;
    
    pythagoras(a,b,c);
    
    

    return 0;
}
