#include<iostream>
using namespace std;

int tilingways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tilingways(n-1) + tilingways(n-2);
}

int main(){
    int n;
    cout<<"Enter the column of tiles(2*1) in which you want to fix tiles: ";
    cin>>n;

    cout<<"Number of ways to adjust tile(2*1) are: "<<tilingways(n)<<endl;
    return 0;
}
