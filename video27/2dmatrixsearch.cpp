#include<iostream>
using namespace std;
int main(){
    int row,col,key;
    bool result=false;
     cout<<"Enter the number of rows and columns of 2D array: ";
     cin>>row>>col;
     int arr[row][col];

     cout<<"Enter the elements in matrix/2dArray...\n";
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             cin>>arr[i][j];
         }
     }
    cout<<"Enter the number to be searched: ";
    cin>>key;
    for(int i=0;i<row;i++){                //linear search
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                cout<<"Index is: "<<i+1<<" "<<j+1<<endl; ;
                result =true;
            }
        }
    }
    if(result){
        cout<<"Element found!\n";
    }
    else{
        cout<<"Not found!\n";
    }

    cout<<"Doing it now by less complexity!!! \n";
    int r=0, c=col-1;               // can be done in two ways 
    bool result1=false;                 // this is for 1 2 3 4 
    while(r<row && c>=0){         //             4 5 6 7  starting from 4.
        if(arr[r][c]==key){
            result1=true;
        }
        if(arr[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
     if(result1){
           cout<<"Element found!\n";
       }
       else{
           cout<<"Not found!\n";
       }

    return 0;
}
