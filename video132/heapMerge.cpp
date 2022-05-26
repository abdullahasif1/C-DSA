#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){

    int n;                //number of arrays
    cout<<"Enter the number of array: ";
    cin>>n;

    vector<vector<int> > arr(n);

    for(int i=0;i<k;i++){

        int size; //size of each array
        cout<<"Enter the size of ur array: ";
        cin>>size;

        arr[i]=vector<int>(size);     //declareing the size of each array

        cout<<"Enter the Sorted elements in the array: \n";
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }





    return 0;
}
