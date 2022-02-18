#include<iostream>
using namespace std;
void transpose(int col, int row, int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){          //check the passing of 2darray in this
            int temp=arr[i][j];          // its not working out and i cant find sol so change and there and commit if you find 
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return;
}
int main(){
    int row,col;
     cout<<"Enter the number of rows and columns of 2D array: ";
     cin>>row>>col;
     int arr[row][col];

     cout<<"Enter the elements in array...\n";
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             cin>>arr[i][j];
         }
     }

     transpose(row,col,arr)
    return 0;
}
