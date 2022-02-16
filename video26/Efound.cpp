#include<iostream>
using namespace std;
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

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x,count=0;
    cout<<"Enter the element you want to find: ";
    cin>>x;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==x){
                cout<<"Element Found at location: "<<i+1<<","<<j+1<<endl;
                count++;
            }
        }
    }
    if(count=0){
        cout<<"Element not found!\n";
    }



    return 0;
}
