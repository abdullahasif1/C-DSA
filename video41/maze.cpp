#include<iostream>
using namespace std;

int countMazePaths(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1; 
    }
    if(i>=n ||j>=n){
        return 0;
    }

    return countMazePaths(n,i+1,j) + countMazePaths(n,i,j+1);   //i+1 as we can only go to right or j+1 can only go downwards
}
int main(){
    int n;
    cout<<"Enter n,where n is n*n matrix: ";
    cin>>n;
    cout<<"Number of ways to go to the last block from start is: "<<countMazePaths(n,0,0)<<endl;
    return 0;
}
