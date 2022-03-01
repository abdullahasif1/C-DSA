#include<iostream>
using namespace std;

bool safe(int** arr, int x,int y,int n){       //assuming its a square matrix of n

    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinMaze(int ** arr, int x, int y,int n, int** solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
            return true;
    }
    if(safe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;               //Backtracking
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the N for which there is a square matrix: ";
    cin>>n;

    int ** arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
     }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ** solArr=new int *[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j];
        }
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
           }
        }cout<<endl;
    }

  // 1 0 1 0 1
  // 1 1 1 1 1
  // 0 1 0 1 0
  // 1 0 0 1 1
  // 1 1 1 0 1
    return 0;
}
