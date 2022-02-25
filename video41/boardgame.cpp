#include<iostream>
using namespace std;

int countPath(int s,int e){
    
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=0;i<=6;i++){
        count+= countPath(s+i,e);
    }

    return count;
}
int main(){
    int e,s;
    cout<<"Enter the starting point and ending point to calculate the possibilities in reaching from starting to ending: ";
    cin>>s>>e;
    countPath(s,e);

    return 0;
}
